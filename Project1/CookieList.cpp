#include "CookieList.h"

using namespace std;

// Function addCookie
	void CookieList::addCookie(const Cookie& aCookie){
        last->setNext(new Node(aCookie, nullptr));
        last = last->getNext();
    }
	//addCookie overloaded
	void CookieList::addCookie(const std::string& newName, size_t newCalories,
		const std::set<std::string>& newIngredients, size_t newServings){
            Cookie(newName, newCalories, newIngredients, newServings);
            last->setNext(new Node(Cookie(newName, newCalories, newIngredients, newServings), nullptr));
            last = last->getNext();
        }

// Accessor function
	size_t CookieList::getCount() const{
        return count;
    }

// Boolean functions
	bool CookieList::isEmpty() const{
        return count == 0;
    }
	bool CookieList::searchCookie(const std::string& aCookie) const{
        Node* currentNode = first;
        bool found = false;

        while(currentNode != nullptr && !found){
            if(currentNode->getCookie().getName() == aCookie){
                found == true;
            }
            currentNode = currentNode->getNext();
        }

        return found;
    }
//Function clearList
	void CookieList::clearList()
	{  
	    Node* temp = first;
	
	    while (first != nullptr)
	    {
	        first = first->getNext();
	        delete temp;
	        temp = first;
	    }
	    last = nullptr;
	    count = 0;
	}
// The Big Three
	CookieList(const CookieList& otherCookieList);
	CookieList& CookieList::operator=(const CookieList& otherCookieList)// for calling helper function	
	{
		if(count == 0)
	    	copyCallingObjIsEmpty(otherCookieList); //
		
		
		
		
		
	}
	CookieList::~CookieList()
	{
	   clearList();
	}

//helper Function
//Function copyCallingObjIsEmpty
    CookieList::getFirst() // umm, I'm still confused about CookieList is singly but it have 2 node, I'll fix that later. If you figure out, u can change it T.T
    {
        return first;
    }
    CookieList::getLast()
    {
        return last;
    }
void CookieList::copyCallingObjIsEmpty(const CookieList& otherCookieList)
{
    Node* temp = otherCookieList.getFirst();
    while(temp != nullptr)
    {
        addCookie(temp->getCookie());
        temp = temp->getNext();
    }
}

//Function copyObjectsSameLength
void CookieList::copyObjectsSameLength(const CookieList& otherCookieList)
{
    Node* temp = otherCookieList.getFirst();
    Node* tempCalling = first;
    while(temp!= nullptr)
    {
        tempCalling->setCookie(temp->getCookie());
    }
}









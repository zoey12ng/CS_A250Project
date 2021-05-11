#include "CookieList.h"

using namespace std;
//
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

// Print functions
	void CookieList::printAllCookies() const
	{
	    if(first == nullptr)
	        cerr <<"List is empty";
	    else
	    {
	        Node* currentNode = first;
	        while( currentNode != nullptr)
	        {
	            cout << currentNode->getCookie().getName() << " ";
	            currentNode = currentNode->getNext();
	        }
	    }
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
	CookieList::CookieList(const CookieList& otherCookieList)
	{
		
		
		
		
		
	}
	CookieList& CookieList::operator=(const CookieList& otherCookieList)	
	{
		if(count == 0)
	    		copyCallingObjIsEmpty(otherCookieList); 
		
		else if(count > otherCookieList.count)
			copyCallingObjLonger(otherCookieList);

		else if(count < otherCookieList.count)
			copyCallingObjShorter(otherCookieList);

		else copyObjectsSameLength(otherCookieList);
			
	}
	
	CookieList::~CookieList()
	{
	   clearList();
	}

//helper Function
//Function copy
void CookieList::copyCallingObjIsEmpty(const CookieList& otherCookieList)
{
    Node* temp = otherCookieList.first;
    while(temp != nullptr)
    {
        addCookie(temp->getCookie());
        temp = temp->getNext();
		count++; 
    }
}

//Function copyObjectsSameLength
void CookieList::copyObjectsSameLength(const CookieList& otherCookieList)
{
    Node* temp = otherCookieList.first;
    Node* tempCalling = first;
    while(temp!= nullptr)
    {
        tempCalling->setCookie(temp->getCookie());
		temp = temp->getNext();
		tempCalling = tempCalling->getNext();
    }
}

void CookieList::copyCallingObjLonger(const CookieList& otherCookieList){
	Node* temp = otherCookieList.first;
    	Node* tempCalling = first;
	Node* prev;
    while(temp!= nullptr)
    {
        tempCalling->setCookie(temp->getCookie());
		temp = temp->getNext();
		prev = tempCalling;
		tempCalling = tempCalling->getNext();
    }

	last = prev;
	
	while(tempCalling != nullptr){
		tempCalling = tempCalling->getNext();
		prev = tempCalling;
		prev->setNext(nullptr);
		delete prev;
		count--;
	}

}

void CookieList::copyCallingObjShorter(const CookieList& otherCookieList){
	Node* temp = otherCookieList.first;
	Node* tempCalling = first;

    while(tempCalling != nullptr)
    {
        tempCalling->setCookie(temp->getCookie());
		temp = temp->getNext();
		tempCalling = tempCalling->getNext();
    }
	while(temp != nullptr){
		addCookie(temp->getCookie());
		temp = temp->getNext();
		count++;
	}
}








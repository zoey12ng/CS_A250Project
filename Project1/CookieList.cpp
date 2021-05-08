#include "CookieList.h"

using namespace std;

// Function addCookie
	void CookieList::addCookie(const Cookie& aCookie){
        last->setNext(new Node(aCookie, nullptr));
        last = last->getNext();
    }

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


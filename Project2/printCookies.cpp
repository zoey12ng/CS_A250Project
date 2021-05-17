#include "CookieList.h"
#include <iostream>
#include <iomanip>

using namespace std;

	void CookieList::printAllCookies() const
	{
	    if(first == nullptr)
	        cerr <<"List is empty";
	    else
	    {
	        for(int i = 0; i < 65; i++)   // we need to print it follow the output of partC!!
                cout << "*";
            cout << endl << setw(38) << "COOKIE RECIPES" << endl; 
            for(int i = 0; i < 65; i++)
                cout << "*";
	        Node* currentNode = first;
	        while( currentNode != nullptr)
	        {
	            cout << setw(26) << currentNode->getCookie().getName() << endl;
	            currentNode = currentNode->getNext();
	        }
	    }
	}

    void CookieList::printCookiesSelection() const
	{
		int count = 1;
		Node* current = first;
		while(current != nullptr)
		{
			cout << count << ": " << current->getCookie().getName() << endl;
			count++;
			current = current->getNext();
		}
		
	}

    void CookieList::printRecipe(size_t cookieSelect){

		Node* location = getCookieLocation(cookieSelect);

		location->getCookie().printRecipe();
	}

    void CookieList::printLimitedCalories(size_t maxOfCalo)
	{
		Node* current = first;
		while(current != nullptr)
		{
			if(current->getCookie().getCalories() <= maxOfCalo)
				current->getCookie().printCalories();
				current = current->getNext();
		}
	}

    void CookieList::printCalories(size_t cookieSelection){
		Node* location = getCookieLocation(cookieSelection);
		location->getCookie().printCalories();
	}
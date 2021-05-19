/*
    Group No Idea
    Alvarez, Mauricio (41298)
    Nguyen, Thu (41298)

    Date (month in letters)

    CS A250
    Project 2
*/

#include "CookieList.h"

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

// default CookieList constructor
CookieList::CookieList()
{
	cookieList = new list<Cookie>();
}


// Function addCookie
void CookieList::addCookie(const Cookie& aCookie)
{
	cookieList->push_back(aCookie);
}

//addCookie overloaded
void CookieList::addCookie(const std::string& newName, size_t newCalories,
		const std::set<std::string>& newIngredients, size_t newServings)
{
	Cookie aCookie(newName, newCalories, newIngredients, newServings);
	cookieList->push_back(aCookie);
}

// Accessor function
size_t CookieList::getCount() const
{
	return cookieList->size();
}

// Boolean functions
bool CookieList::isEmpty() const
{
	return cookieList->empty();
}

// Print functions
void CookieList::printAllCookies() const
{		
	for(const auto i : *cookieList)
		cout << setw(26) << &i.getName() << endl;
}

void CookieList::printCalories(size_t cookieSelection)
{
	Node* location = getCookieLocation(cookieSelection);
	location->getCookie().printCalories();
}

//Function clearList
void CookieList::clearList()
{  
	cookieList->clear();
}

//partC
void CookieList::printCookiesSelection() const
{
	int count = 1;
	for(auto i : *cookieList){
		cout << count++ << ": " << i.getName() << endl;
	}
}

void CookieList::printRecipe(size_t cookieSelect)
{
	Node* location = getCookieLocation(cookieSelect);
	location->getCookie().printRecipe();
}

void CookieList::printLimitedCalories(size_t maxOfCalo)
{
	for(auto i : *cookieList)
	{
		if(i.getCalories() <= maxOfCalo)
			i.printCalories();
	}
}

// Copy Constructor
CookieList::CookieList(const CookieList& otherCookieList)
{
	list<Cookie>* cookieList = new list<Cookie>(otherCookieList); //not yet

}

//Copy assignment operator:
CookieList& CookieList::operator=(const CookieList& otherCookieList)	
{
	if(&otherCookieList == this) //check if 2 obj are the same
	{
		cerr << "Attempted assignment to itself.";
	}
	else
	{
		 *cookieList = *otherCookieList.cookieList;
	}
	return *this;
}
	
CookieList::~CookieList()
{
   clearList();
   delete cookieList;
}



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
	for(const auto& i : *cookieList)
		cout << setw(26) << &i.getCookie().getName() << endl; // fixed
}

void CookieList::printCalories(size_t cookieSelection) //fixed
{
	auto iter = cookieList->begin();
	for(size_t i = 0; i < cookieSelection - 1; i++)
	{
  		iter++;
	}
	iter->printCalories();
}

//Function clearList
void CookieList::clearList()
{  
	cookieList->clear();
}

void CookieList::printCookiesSelection() const //////////// hoi laij cai &i
{
	int count = 1;
	for(const auto& i : *cookieList)
	{
		cout << count << ": " << i.getCookie()getName() << endl;
		count++;
	}
}

void CookieList::printRecipe(size_t cookieSelect)
{
	auto iter = cookieList->begin(); 
	for(size_t i = 0; i < cookieSelection - 1; i++)
	{
  		iter++;
	}
	iter->printRecipe();	
}

void CookieList::printLimitedCalories(size_t maxOfCalo) const
{
	for(const auto& i : *cookieList)
	{
		if(i.getCalories() <= maxOfCalo)
			i.printCalories();
	}
}

// Copy Constructor
CookieList::CookieList(const CookieList& otherCookieList)
{
	cookieList = new list<Cookie>(*otherCookieList.cookieList); 
}

CookieList& CookieList::operator=(const CookieList& otherCookieList)	
{
	if(&otherCookieList == this) 
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

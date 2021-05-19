/*
    Group No Idea
    Alvarez, Mauricio (41298)
    Nguyen, Thu (41298)

    Date (month in letters)

    CS A250
    Project 1
*/

#ifndef COOKIELIST_H
#define COOKIELIST_H

#include "Cookie.h"

#include <list>

class CookieList
{
public:
	// Constructors
	CookieList();
	
	// Function addCookie
	void addCookie(const Cookie& aCookie);
	void addCookie(const std::string& newName, size_t newCalories,
		const std::set<std::string>& newIngredients, size_t newServings);

	// Accessor function
	size_t getCount() const;

	// Boolean functions
	bool isEmpty() const;

	// Print functions
	void printAllCookies() const;
	void printCalories(size_t cookieSelection);

	// Function clearList
	void clearList();
	
	//Part C
	void printCookiesSelection() const;
	void printRecipe(size_t cookieSelect);
	void printLimitedCalories(size_t maxOfCalo); 
	
	// The Big Three
	CookieList(const CookieList& otherCookieList);
	CookieList& operator=(const CookieList& otherCookieList);		
	~CookieList();
	
private:
	std::list<Cookie>* cookieList;
};

#endif

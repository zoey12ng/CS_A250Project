/*
    Group No Idea
    Alvarez, Mauricio (41298)
    Nguyen, Thu (41298)

    Date (month in letters)

    CS A250
    Project 1
*/

#include "CookieType.h"
#include <cstddef>

using namespace std;

CookieType::CookieType(const string& name, size_t calorieNum)
{ 
    cookieName = name; 
    calories = calorieNum;
}
    
string CookieType::getName() const 
{
    return cookieName;
}

size_t CookieType::getCalories() const 
{
    return calories;
}
    
void CookieType::setName(const string& newName)
{
    cookieName = newName;
}

void CookieType::setCalories(size_t newCalories)
{
    calories = newCalories;
}

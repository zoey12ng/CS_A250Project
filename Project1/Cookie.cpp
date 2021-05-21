/*
    Group No Idea
    Alvarez, Mauricio (41298)
    Nguyen, Thu (41298)

    Date (month in letters)

    CS A250
    Project 1
*/

#include "Cookie.h"

#include <iostream>

using namespace std;

Cookie::Cookie(const string& name, size_t calorieNum, const set<string>& newIngredients, 
               size_t newServings) : CookieType(name, calorieNum)
{                                                                                      
    ingredients = newIngredients;
    numOfServings = newServings;
}
 
void Cookie::setServings(const size_t newServings) 
{
    numOfServings = newServings;
}
        
void Cookie::setIngredients(const vector<string>& newIngredients)
{
    ingredients.clear();
    ingredients.insert(newIngredients.begin(),newIngredients.end());
}
            
size_t Cookie::getServings() const 
{
    return numOfServings;
}

set<string> Cookie::getIngredients() const 
{
    return ingredients;
}

const Cookie& Cookie::getCookie() const
{
    return *this;
}

void Cookie::printRecipe() const 
{
    cout << "    " << "Recipe for " << getName() << endl;
    cout << "        " << "Servings: " << numOfServings << endl;
    printIngredients();
}

void Cookie::printCalories() const
{
    cout << endl << "    " << getName() << " (calories: " << getCalories() << ")";
}

void Cookie::printIngredients() const
{
    cout << "    " << "Ingredients: ";
    for(auto i : ingredients)
        cout << i << " ";
}

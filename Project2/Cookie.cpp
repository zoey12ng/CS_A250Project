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
#include <set>
#include <vector>
using namespace std;

Cookie::Cookie(const string& name, size_t calorieNum, const set<string>& newIngredients, 
               size_t newServings) : CookieType(name, calorieNum)
   {                                                                                      
       ingredients = newIngredients;
       numOfServings = newServings;
    }
          
    

void Cookie::setServings(const size_t newServings) {
        numOfServings = newServings;
    }
        
void Cookie::setIngredients(const vector<string>& newIngredients){
            ingredients.clear();
            ingredients.insert(newIngredients.begin(),newIngredients.end());
        }
            
size_t Cookie::getServings() const {return numOfServings;}

set<string> Cookie::getIngredients() const {return ingredients;}

Cookie& Cookie::getCookie() {return *this;}

void Cookie::printRecipe() const {
    cout << "Recipe for " << getName();
    cout << "\nServings: " << numOfServings;
    printIngredients();
}

void Cookie::printCalories() const{
    cout << getName() << "(calories: " << getCalories() << ")\n";
    }

void Cookie::printIngredients() const{
            cout << "Ingredients: ";

            for(auto i : ingredients)
                cout << i << " ";
        }
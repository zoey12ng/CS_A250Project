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

//Cookie::Cookie(const string& name, size_t calorieNum, const set<string>& ingredients, size_t numOfServings)

Cookie::Cookie(const string& name, size_t calorieNum,const set<string>& newIngredients, size_t newServings)
     : CookieType(name, calorieNum)
    {                                                                                   // I review lesson on Inheritance to see how implement correctly 
                                                                                          //and it look like that. Can you check it out?
        ingredients = newIngredients;
        numOfServings = newServings;
    }
          
    // {              
    //     setName(name);                     
    // }

void Cookie::setServings(const size_t newServings) {
        numOfServings = newServings;
    }
        
void Cookie::setIngredients(const vector<string> &newIngredients){
            //ingredients = newIngredients;
        }
            
size_t Cookie::getServings() const {return numOfServings;}

set<string> Cookie::getIngredients() const {return ingredients;}

Cookie& Cookie::getCookie() {return *this;}

void Cookie::printRecipe() const {
    cout << "Cookie: " << getName() << endl;
    cout << "Number of Servings: " << numOfServings << endl;
    }

void Cookie::printCalories() const{
    cout << "Cookie: " << getName() << endl;
    cout << "Number of Calories: " << getCalories() << endl;
    }

void Cookie::printIngredients() const{
            cout << "Ingredients: ";

            for(auto i : ingredients)
                cout << i << " ";
        }
        
Cookie::~Cookie(){}

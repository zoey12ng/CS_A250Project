#ifndef COOKIE_H
#define COOKIE_H

#include <iostream>
#include <set>
#include <vector>

using namespace std;

class CookieType{
    public:
        CookieType(){ calories = 0;}
        CookieType(string name, size_t calorieNum){ cookieName = name; calories = calorieNum;}
        string getName(){ return cookieName;}
        size_t getCalories(){return calories;}
        void setName(string newName){cookieName = newName;}
        void setCalories(size_t newCalories){calories = newCalories;}
        ~CookieType(){}
    protected:
        string cookieName;
        size_t calories;
    
};

class Cookie : public CookieType{
    public:
        Cookie(){numOfServings = 0;}
        Cookie(string name, size_t calorieNum, set<string> ingredients, size_t numOfServings){cookieName = name;};
        size_t getServings(){return numOfServings;}
        set<string> getIngredients(){return ingredients;}
        Cookie& getCookie(){return *this;}
        ~Cookie(){}
        
        void setServings(size_t newServings){numOfServings = newServings;}
        void setIngredients(vector<string> newIngredients){
            //ingredients = newIngredients;
            }
        void printRecipe(){
            cout << "Cookie: " << cookieName << endl;
            cout << "Number of Servings: " << numOfServings << endl;
        }

        void printCalories(){
            cout << "Cookie: " << cookieName << endl;
            cout << "Number of Calories: " << calories << endl;
        }

    protected:
        set<string> ingredients;
        size_t numOfServings;
    
};

#endif
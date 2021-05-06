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
        string getName() const{ return cookieName;}
        size_t getCalories() const{return calories;}
        void setName(const string newName){cookieName = newName;}
        void setCalories(const size_t newCalories){calories = newCalories;}
        ~CookieType(){}
    protected:
        string cookieName;
        size_t calories;
    
};

class Cookie : public CookieType{
    public:
        Cookie(){numOfServings = 0;}
        Cookie(string name, size_t calorieNum, set<string> ingredients, size_t numOfServings){cookieName = name;};
        size_t getServings() const{return numOfServings;}
        set<string> getIngredients() const{return ingredients;}
        Cookie& getCookie(){return *this;}
        ~Cookie(){}

        void setServings(const size_t newServings){numOfServings = newServings;}
        void setIngredients(const vector<string> &newIngredients){
            //ingredients = newIngredients;
            }
        void printRecipe() const{
            cout << "Cookie: " << cookieName << endl;
            cout << "Number of Servings: " << numOfServings << endl;
        }

        void printCalories() const{
            cout << "Cookie: " << cookieName << endl;
            cout << "Number of Calories: " << calories << endl;
        }

    protected:
        set<string> ingredients;
        size_t numOfServings;
    
};

#endif
/*
    Group No Idea
    Alvarez, Mauricio (41298)
    Nguyen, Thu (41298)

    Date (month in letters)

    CS A250
    Project 1
*/

#ifndef COOKIE_H
#define COOKIE _H

#include "CookieType.h"
#include <iostream>
#include <set>
#include <vector>

class Cookie : public CookieType{
    public:
        Cookie(){numOfServings = 0;}

        CookieType::CookieType(string &name, size_t calorieNum): Cookie(set<string> &ingredients, 
                    size_t numOfServings);
                
        void setServings(const size_t newServings);
        void setIngredients(const vector<string> &newIngredients);
    
        size_t getServings() const;
        set<string>& getIngredients() const; 
        Cookie& getCookie();

        void printRecipe() const;

        void printCalories() const;
        
        void printIngredients() const;
        
        ~Cookie(){}

    private:
        set<string> ingredients;
        size_t numOfServings;
    
};

#endif

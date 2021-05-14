/*
    Group No Idea
    Alvarez, Mauricio (41298)
    Nguyen, Thu (41298) 

    Date (month in letters)

    CS A250
    Project 1
*/

#ifndef COOKIETYPE_H
#define COOKIETYPE _H

#include <string>

class CookieType{
    public:
        CookieType();
        CookieType(const std::string& name, size_t calorieNum);
        
        void setName(const std::string& newName);
        void setCalories(const size_t newCalories);
        
        std::string getName() const;
        size_t getCalories() const;
        
        ~CookieType(){}
        
    private:
        std::string cookieName;
        size_t calories;
};

#endif

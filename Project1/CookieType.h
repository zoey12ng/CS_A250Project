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

#include //???? not <iostream> there is no need to include iostream in this file, 
//because you are not printing anything,(ONLY the ones needed in this file)

class CookieType{
    public:
        CookieType();
        CookieType(string name, size_t calorieNum); //how do you pass an object (string)? I try const string& name but it said error 
        
        void setName(const string newName);        //?  said" error: ‘string’ does not name a type"
        void setCalories(const size_t newCalories);
        
        string getName() const;                        //? said" error: ‘string’ does not name a type"
        size_t getCalories() const;
        
        ~CookieType(){}
        
    private:
        string cookieName;         //? said" error: ‘string’ does not name a type"
        size_t calories;
};

#endif

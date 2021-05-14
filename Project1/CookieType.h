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
<<<<<<< HEAD
#include <cstddef>
//#include //???? not <iostream> there is no need to include iostream in this file, 
//because you are not printing anything,(ONLY the ones needed in this file)
=======
>>>>>>> 1189b6d862990715981a4795e4ab70fb5a130930

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

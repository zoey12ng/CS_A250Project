#include "Interface.h"
#include "Testing.h"
#include <iomanip>

int main(){
    CookieList temp;
    displayMenu();
    createCookieList(temp);
    processChoice(temp);
    
    //displayMenu();

    return 0;
}
/*
        Group No Idea
        
        Alvarez, Mauricio (41298)
        Nguyen, Thu (41298)
        
        Date (month in letters)
        
        CS A250
        Project 2
*/
/*
1. The name of selection is "Sort the cookie list"
2. It sort the cookie list    
3. 
4.
*/

#include "Interface.h"
#include <iomanip>
#include <iostream>

using namespace std;

void displayMenu()
{
        cout << "****************************************************************\n"
        << "                        COOKIE RECIPES\n"
        << "****************************************************************\n\n";
   
        cout << "Select one of the following:" << endl;
        cout << endl << setw(24) << "a. Print all recipes" << endl;
        cout << setw(26) << "b. Print cookie recipe" << endl;
        cout << setw(28) << "c. Print cookie calories" << endl;
        cout << setw(29) << "d. Print limited calories" << endl;
        cout << setw(27) << "e. Sort the cookie list" << endl;
        cout << setw(14) << "f. To exit" << endl;
}

void processChoice(CookieList& cookieList)
{
        cout << "\nEnter your choice: ";

        char choice = '\0'; 
        char tryAgain = '\0';
   
        while(choice != 'f')
        {
                cin >> choice;
        
                switch(choice)
                {
                        case 'a':
                                if(cookieList.isEmpty())
                                {
                                        cerr << " \n\n=> There are no recipes in the list.\n\n";
                                        cout << "================================================================\n\n";
                                        cout << "\n\nPLease contact your administrator. Good bye!";
                                }
                                else
                                { 
                                        cout << "\n\n----------------------------------------------------------------\n";
                                        cout << "    COOKIE RECIPES\n"  
                                        << "----------------------------------------------------------------\n\n";
                                        cookieList.printAllCookies(); 
                                        cout << "\n\n================================================================";
                                        cout <<"\n\nWould you like to continue (y/n)?";
                                        cin >> tryAgain;
                                }
                                break;
                        case 'b':
                                if(cookieList.isEmpty())
                                {
                                        cerr << " \n\n=> There are no recipes in the list.\n\n";
                                        cout << "================================================================\n\n";
                                        cout << "\n\nPLease contact your administrator. Good bye!";
                                }
                                else
                                {
                                        size_t cookieSelection = 0;
                                        cout << "\n\n----------------------------------------------------------------\n";
                                        cout << "    COOKIE RECIPES\n"  
                                        << "----------------------------------------------------------------\n\n";
                                        cout << "\n\nChoose a cookie to view the recipe.\n\n";
                                        cookieList.printAllCookies();  
                                        cout <<"\n\nYour choice: ";
                                        cin >> cookieSelection;
                                        cout << "\n\n";
                                        cookieList.printRecipe(cookieSelection);
                                        cout << "\n\n================================================================";
                                        cout <<"\n\nWould you like to continue (y/n)?";
                                        cin >> tryAgain;
                                }
                                break;
                        case 'c':
                                if(cookieList.isEmpty())
                                {
                                        cerr << " \n\n=> There are no recipes in the list.\n\n";
                                        cout << "================================================================\n\n";
                                        cout << "\n\nPLease contact your administrator. Good bye!";
                                }
                                else
                                {
                                        size_t cookieSelection = 0;
                                        cout << "\n\n----------------------------------------------------------------\n";
                                        cout << "    COOKIE RECIPES\n"  
                                        << "----------------------------------------------------------------\n\n";
                                        cout << "\n\nChoose a cookie # to view number of calories.\n\n";
                                        cookieList.printAllCookies(); 
                                        cout <<"\n\nYour choice: ";
                                        cin >> cookieSelection;
                                        cookieList.printCalories(cookieSelection);
                                        cout << "\n\n================================================================";
                                        cout <<"\n\nWould you like to continue (y/n)?";
                                        cin >> tryAgain;
                                }
                                break;
                        case 'd':
                                if(cookieList.isEmpty())
                                {
                                        cerr << " \n\n=> There are no recipes in the list.\n\n";
                                        cout << "================================================================\n\n";
                                        cout << "\n\nPLease contact your administrator. Good bye!";
                                }
                                else
                                {
                                        size_t maxOfCalo = 0;
                                        cout << "\n\n----------------------------------------------------------------\n";
                                        cout << "    MAXIMUM CALORIES\n"  
                                        << "----------------------------------------------------------------\n\n";
                                        cout << "What is the maximun # of calories (100-200)? ";
                                        cin >> maxOfCalo;
                                        cout <<"\n\n";
                                        cookieList.printLimitedCalories(maxOfCalo);
                                        cout << "\n\n================================================================";
                                        cout <<"\n\nWould you like to continue (y/n)?";
                                        cin >> tryAgain;
                                }
                                break;
                        case 'e':
                                cout << "Let sort the list !" << endl;
                                cookieList.sort();
                                cookieList.printAllCookies();
                              
                        case 'f':
                                cout << endl << "Thank you for using our software. Good bye!";
                                break;
                        default:
                                cout << endl << " => Sorry. That is not a selection.\n\n";   
                                cout << "================================================================\n\n";
                                cout << "Would you like to try again (y/n)? ";
                                cin >> tryAgain;
                                if(tryAgain == 'n')
                                {
                                        choice = 'e';
                                        cout << endl << "\n\nThank you for using our software. Good bye!";
                                }
                                else 
                                        displayMenu();
                                break;  
              }
    }
}

#include "Interface.h"
#include <iostream>
#include <iomanip>

using namespace std;

void displayMenu(){
        for(int i = 0; i < 65; i++)
        cout << "*";
    cout << endl << setw(38) << "COOKIE RECIPES" << endl; 
    for(int i = 0; i < 65; i++)
        cout << "*";

    cout << "\n\nSelect one of the following:" << endl;
    cout << endl << setw(24) << "a. Print all recipes" << endl;
    cout << setw(26) << "b. Print cookie recipe" << endl;
    cout << setw(28) << "c. Print cookie calories" << endl;
    cout << setw(29) << "d. Print limited calories" << endl;
    cout << setw(14) << "e. To exit" << endl;
}

void processChoice(CookieList& cookieList){
        
    cout << "\nEnter your choice: ";

    char choice; // initialize char choice and char tryAgain.
    char tryAgain;
   
    while(choice != 'e'){
        
        cin >> choice;
        
        switch(choice){
            case 'a':
                if(cookieList.isEmpty()){
                        cerr << " \n\n=> There are no recipes in the list.\n\n";
                        for(int i = 0; i < 65; i++)
                                cout << "=";
                        cout << "\n\nPLease contact your administrator. Good bye!";
                }
                else{ 
                        for(int i = 0; i < 65; i++)
                                cout << "-";
                        cout << endl << setw(38) << "COOKIE RECIPES" << endl; 
                        for(int i = 0; i < 65; i++)
                                cout << "-";
                        cout << "\n\n";
                        cookieList.printAllCookies();      
                        cout <<"\n\nWould you like to continue (y/n)?";
                        cin >> tryAgain;
                        }
                break;
            case 'b':
                if(cookieList.isEmpty()){
                        cerr << " => There are no recipes in the list.\n\n";
                        for(int i = 0; i < 65; i++)
                                cout << "=";
                        cout << "\n\nPLease contact your administrartor. Good bye!";
                        }
                else{
                        size_t cookieSelection;
                       for(int i = 0; i < 65; i++)
                                cout << "-";
                        cout << endl << setw(38) << "COOKIE RECIPES" << endl; 
                        for(int i = 0; i < 65; i++)
                                cout << "-";
                        cout << "\n\nChoose a cookie to view the recipe.\n";
                        cookieList.printAllCookies();  
                        cout <<"\n\nYour choice: ";
                        cin >> cookieSelection;
                        cout << "\n\n";
                        cookieList.printRecipe(cookieSelection);
                }   
                        
                        
                        
                        
                        
                        
                break;
            case 'c':
                if(cookieList.isEmpty()){
                        cerr << " => There are no recipes in the list.\n\n";
                        for(int i = 0; i < 65; i++)
                                cout << "=";
                        cout<<"\n\n";
                        cout << " PLease contact your administrartor. Good bye!";
                        }
                else{
                        //..........
                }
                break;
            case 'd':
                if(cookieList.isEmpty()){
                        cerr << " => There are no recipes in the list.\n\n";
                        for(int i = 0; i < 65; i++)
                                cout << "=";
                        cout<<"\n\n";
                        cout << " PLease contact your administrartor. Good bye!";
                        }
                else{
                    size_t maxOfCalo;
                    cout << "What is the maximun # of calories (100-200)? ";
                    cin >> maxOfCalo;
                    cout <<"\n\n";
                    cookieList.printLimitedCalories(maxOfCalo);
                }
                break;

            case 'e':
                cout << endl << "Thank you for using our software. Good bye!";
                break;

            default:
                cout << endl << " => Sorry. That is not a selection.\n\n";   //use "\n\n" instead of << endl << endl
                for(int i = 0; i < 65; i++)
                    cout << "=";
                cout << "\n\nWould you like to try again (y/n)? ";
                cin >> tryAgain;
                if(tryAgain == 'n'){
                    choice = 'e';
                    cout << endl << "Thank you for using our software. Good bye!";
                }
                 else 
                        displayMenu();
                break; 
        }
    }
}

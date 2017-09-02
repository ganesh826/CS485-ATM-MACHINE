/* 
 * File:   main.cpp
 * Author: Ganesh Koripalli
 *
 * Created on August 29, 2017, 8:25 PM
 */

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();
void printTransactionOperations();
void printTransactionOperations(double balance);
double deposit(double balance);
double withdraw(double balance);
double balance;

//Global variable to store the user's menu selection
char menuInput;

//Main function
int main() {

    //Welcome message 
    cout << "Hi! Welcome to SIU ATM Machine!\n\n";

    //call the function start
    start();
    return 0;
}

void printIntroMenu() {
    //Prints the introduction menu
    
    //Switch statement to go through the menu options for the intro menu
    cout << " l -> Login\n c -> Create New Account\n q -> Quit\n\n";
    cin >> menuInput;

    switch(menuInput){
        
        case 'l':
            login();
            break;
        
        case 'c':
            createAccount();
            break;
            
         case 'q':
            exit(0);
            break;

        default:
            cout << "Invalid Input, please enter a valid selection\n";
            printIntroMenu();   
    }

}

void printMainMenu() {
    //Prints the main menu
    
    printTransactionOperations();

}

void start() {

    printIntroMenu();
    cout << "Please select an option from the menu below: \n";

}

void createAccount() {
    //Create an account where the user will be prompted to make a user id and password

    int username;
    int pass;

    //user id entry
    cout << "Please enter a user id: ";
    cin >> username;

    //password entry 
    cout << "Please enter a password: ";
    cin >> pass;

    //After the program has created the new user id and password, the program will go back to start
    start();


}

void login() {
    //check the user's id and password 

    int id;
    int password;

    cout << "Please enter your user id: ";
    cin >> id;

    cout << "Please enter your password: ";
    cin >> password;
    
    //If statement that will check the id and password so that it can move to the main menu page
    //Set it up so you can access the login with these credentials 
    if (id == 12 && password == 2345) {

        cout << "Access Granted!\n\n";
        printMainMenu();

    } else {

        cout << "*************** LOGIN FAILED! ***************\n\n";
        printIntroMenu();

    }

}

void printTransactionOperations() {

    //Method to cycle through the options 

    cout << " \n d -> Deposit Money\n w -> Withdraw Money\n r -> Request Balance\n q -> Quit\n";
    cin >> menuInput;

    switch (menuInput) {

        case 'd':
            balance = deposit(balance);
            printTransactionOperations(balance);
            break;

        case 'w':
            balance = withdraw(balance);
            printTransactionOperations(balance);
            break;

        case 'r':
            cout << "Your balance is: $" << balance;
            printTransactionOperations();
            break;

        case 'q':
            exit(0);
            break;

        default:
            cout << "Invalid Input, please enter a valid selection";
            printTransactionOperations();

    }
}

void printTransactionOperations(double balance) {

    //Method to cycle through the options 

    cout << " d -> Deposit Money\n w -> Withdraw Money\n r -> Request Balance\n q -> Quit\n";
    cin >> menuInput;

    switch (menuInput) {

        case 'd':
            balance = deposit(balance);
            printTransactionOperations(balance);
            break;

        case 'w':
            balance = withdraw(balance);
            printTransactionOperations(balance);
            break;

        case 'r':
            cout << "Your balance is: $" << balance;
            printTransactionOperations();
            break;

        case 'q':
            exit(0);
            break;

        default:
            cout << "Invalid Input, please enter a valid selection";
            printTransactionOperations();

    }
}

double deposit(double balance) {

    double userInput;

    cout << "Amount of deposit: $"; //Amount to be 
    cin >> userInput;

    balance = balance + userInput;
    return balance;

}

double withdraw(double balance) {

    double userInput;

    cout << "Amount of withdrawal: $";
    cin >> userInput;

    balance = balance - userInput;
    return balance;

}

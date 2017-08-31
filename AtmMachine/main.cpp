/* 
 * File:   main.cpp
 * Author: Ganesh Koripalli
 *
 * Created on August 29, 2017, 8:25 PM
 */

/*
 * Still need to do: 
 * 1.) Fix the issue with balance
 * 2.) Run the program through the case given to us
 * 3.) Beautify the program
 */

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
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

//Global variable to store the user's menu selection
string menuInput;

//Main function
int main(){
 
    //Welcome message 
    cout << "Hi! Welcome to SIU ATM Machine!\n";
    
    //call the function start
    start();
    return 0;
}

void printIntroMenu(){
    //Prints the introduction menu
    string selection;
    
    cout << " l -> Login\n c -> Create New Account\n q -> Quit\n";
    cin >> selection;
    
    //If else statement to cycle through the correct selection, and continue the program
    
    if(selection == "l"){
        
        login();
    
    } else if(selection == "c"){
        
        createAccount();
        
    } else if(selection == "q"){
        
        exit(0);
    
    } else {
        //If the user types any other letters other than the selection, this will cycle the program again
        cout << "Invalid Input, please enter a valid selection";
        printIntroMenu();
        
    }   
    
}

void printMainMenu(){
    //Prints the main menu
    cout << " d -> Deposit Money\n w -> Withdraw Money\n r -> Request Balance\n q -> Quit";
   
}

void start(){
    
    printIntroMenu();
    cout << "Please select an option from the menu below: \n";
   
}

void createAccount(){
    //Create an account where the user will be prompted to make a user id and password
    
    int username;
    int pass;
    
    //user id entry
    cout << "Please enter a user id:";
    cin >> username;
    
    //password entry 
    cout << "Please enter a password:\n";
    cin >> pass;
    
    //After the program has created the new user id and password, the program will go back to start
    start();
   
    
}

void login(){
    //check the user's id and password 
    
    int id;
    int password;
   
    cout << "Please enter your user id: ";
    cin >> id;
    
    cout << "Please enter your password: ";
    cin >> password;

    //If statement that will check the id and password so that it can move to the main menu page
    
    if(id == 12 && password == 2345){
        
        cout << "Access Granted!\n";
        printMainMenu();
        
        }
}

     void printTransactionOperations(){
        
        //Method to cycle through the options 
        
        double balance;
        
        cout << " d -> Deposit Money\n w -> Withdraw Money\n r -> Request Balance\n q -> Quit"; 
        cin >> menuInput;
        
        if(menuInput == "d"){
            
            balance = deposit(balance); 
            printTransactionOperations(balance);
            
        } else if(menuInput == "w"){ 
            
            balance = withdraw(balance);
            printTransactionOperations(balance);
            
        } else if(menuInput == "r"){ //balance is requested and printed out 
            
            cout << "Balance: " << balance;
            printTransactionOperations();
            
        } else { //If the user does not pick the correct selection then the program will get this warning and cycle through again
            
            cout << "Invalid Input, please enter a valid selection";
            printTransactionOperations();
        
        }
 
    }
    
    void printTransactionOperations(double balance){
        
        //Method to cycle through the options 
        
        double balance;
        
        cout << " d -> Deposit Money\n w -> Withdraw Money\n r -> Request Balance\n q -> Quit"; 
        cin >> menuInput;
        
        if(menuInput == "d"){
            
            balance = deposit(balance); 
            printTransactionOperations(balance);
            
        } else if(menuInput == "w"){ 
            
            balance = withdraw(balance);
            printTransactionOperations(balance);
            
        } else if(menuInput == "r"){ //balance is requested and printed out 
            
            cout << "Balance: " << balance;
            printTransactionOperations();
            
        } else { //If the user does not pick the correct selection then the program will get this warning and cycle through again
            
            cout << "Invalid Input, please enter a valid selection";
            printTransactionOperations();
        
        }
 
    }
    
    double deposit(double balance){
        
        double userInput;
        
        cout << "Amount of deposit: $ ";//Amount to be 
        cin >> userInput;
        
        balance += userInput;
        return balance;
        
    }
    
    double withdraw(double balance){
        
        double userInput;
        
        cout << "Amount of withdrawal: $ ";
        cin >> userInput;
        
        balance -= userInput;
        return balance;
        
    }






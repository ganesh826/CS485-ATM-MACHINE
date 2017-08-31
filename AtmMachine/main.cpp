/* 
 * File:   main.cpp
 * Author: Ganesh Koripalli
 *
 * Created on August 29, 2017, 8:25 PM
 */

/*
 * Still need to do: 
 * 1.) Make sure that everything works so far
 * 2.) Set up the transaction menu
 * 3.) have the deposit, withdraw functions working 
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

//Global variable to store the user's menu selection
char menuInput;

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
    
    if(selection == "l"){
        
        login();
    
    } else if(selection == "c"){
        
        createAccount();
        
    } else if(selection == "q"){
        
        exit(0);
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
    cout << "Please enter a password:";
    cin >> pass;
    
    cout >> "Thank You, User id and Password have been created";
    
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



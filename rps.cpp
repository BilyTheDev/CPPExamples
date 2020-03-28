/*
This code is written by Bily ( Bily#6405 on Discord ) and can be redistributed.
This is a Rock Paper Scissors game, with only one round, and has an option to restart if the player wants to play again. If there are any errors in this code, feel free to DM me
As simple as this code can be, it was created to help complete beginners in C++ who want to know what the language looks like. I really hope you guys find it useful.
This is the first time I've ever written open source code, and I want to wrtie more to help the big community of programmers out there!
*/ 

#include <iostream>

// C libraries I need
#include <cstdlib>
#include <ctime>     
#include <cstdio>


using namespace std;


void rps()  
{  
    string PlayerChoice; // Player's choice string


    srand((unsigned)time(0));   
    int RandChoice;
    RandChoice = (rand() % 3) + 1; // randomizing function 
    
    // rock = 1, paper = 2, scissors = 3

    cout << "choose Rock (r), paper (p), scissors (s): "; 

    cin >> PlayerChoice;

    // ifs if player chose rock:
    if (PlayerChoice == "r" && RandChoice == 2) 
    {
        cout << "Computer chose paper, it won" << endl;
    } 

    else if (PlayerChoice == "r" && RandChoice == 3) 
    {
        cout << "Computer chose scissors, you won" << endl; 
    }

    else if (PlayerChoice == "r" && RandChoice == 1) 
    {
        cout << "Tie" << endl;
    } 


    // ifs if player chose paper:
    if (PlayerChoice == "p" && RandChoice == 3) 
    {
        cout << "Computer chose scissors, it won" << endl; 
    } 

    else if (PlayerChoice == "p" && RandChoice == 1) 
    {
        cout << "Computer chose rock, you won" << endl;
    }

    else if (PlayerChoice == "p" && RandChoice == 2) 
    {
        cout << "Tie" << endl; 
    } 

    

    // ifs if player chose scissors:
    if (PlayerChoice == "s" && RandChoice == 1) 
    {
        cout << "Computer chose rock, it won" << endl; 
    }
    
    else if (PlayerChoice == "s" && RandChoice == 2) 
    {
        cout << "Computer chose paper, you won" << endl; 
    }
    else if (PlayerChoice == "s" && RandChoice == 3) 
    {
        cout << "Tie" << endl;
    }

   
}
void restart() // function if the player wants to restart 
{     
    char choice;

    cout << "Retry? (y = yes, n = no): ";

    cin >> choice;

    if (choice == 'y')
    {
        rps(); 
        restart(); // recalling the function if the player wants to play again after playing again
    }  
} 
int main()
{ 
    rps();   // calling the rps function in the main function
    restart(); // calling the restart function if the player want to restart


    return 0;
}
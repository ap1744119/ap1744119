/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 30, 2014, 6:58 PM
 * Purpose: Assignment 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) 
{
    //Declare variables
    int distance, time, acceleration;
    cout << "Hello,\n";
    cout << "Press return after entering a value.\n";
    cout << "Enter the time, in seconds, of the freefall duration:\n";
    cin >> time;
    acceleration = 32;
    distance = (acceleration * time * time)/2;
    
    cout << "The total distance traveled during freefall is ";
    cout << time;
    cout << " seconds,\n";
    cout << "is ";
    cout << distance;
    cout << " feet.\n";
    //Exit stage right
    return 0;
}


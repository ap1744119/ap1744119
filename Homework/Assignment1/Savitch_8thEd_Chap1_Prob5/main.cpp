/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 25, 2014, 7:54 PM
 * Purpose: Assignment 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main( ) 
{
    //Declare variables
    int number_of_bananas, number_of_apples, total_number_multiplied, total_number_added;
    cout << "Press enter after entering the values.\n";
    cout << "Enter the number of bananas bought at the supermarket:\n";
    cin >> number_of_bananas;
    cout << "Enter the number of apples bought at the supermarket:\n";
    cin >> number_of_apples;
    total_number_multiplied = number_of_bananas * number_of_apples;
    total_number_added = number_of_bananas + number_of_apples;
    cout << "If you have " << number_of_bananas << " bananas" << " and " << number_of_apples << " apples,\n";
    cout << "you will have a total of " << total_number_added << " fruits!\n";
    cout << "If we make an error and hit the multiplication sign in the calculator,\n";
    cout << "we will get an output of " << total_number_multiplied << " fruits.\n";
    cout << "The statement will then make no sense unless we have 2 of each!\n\n";
    cout << "Lesson concluded, now go make a smoothie!\n";
    //Exit stage right
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 25, 2014, 7:54 PM
 * Purpose: Assignment 1
 */
//System Libraries

#include <iostream> 
// by adding a space between < and i, system cannot find this file, it sees it different that <iostream>.
using namespace std;
// if int main( ) is taken out, the whole build fails, and { token can no longer be understood.

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main( ) 
{
    //Declare variables
    int number_of_bananas, number_of_apples, total_number_multiplied, total_number_added; 
    // w/o _ between the words I get "Unexpected tokens" and "Unable to resolve identifier" errors for each word.
    cout << "Press enter after entering the values.\n"; 
    // if a forward slash is used, the program is not disrupted in executing the integers, but the context no longer makes sense to the user.
    cout << "Enter the number of bananas bought at the supermarket:\n";
    // if no semicolon is used, an error is given, but so is the solution,
    // it gives: "error:expected ';' before 'cin'" 
    cin >> number_of_bananas;
    cout << "Enter the number of apples bought at the supermarket:\n";
    cin >> number_of_apples;
    // if an arrow is taken out it provides: "error:no match for 'operator.'", and gives a list of possible solutions.
    total_number_multiplied = number_of_bananas * number_of_apples;
    total_number_added = number_of_bananas + number_of_apples;
    cout << "If you have ";
    // If no space provided after have, then the next input would be placed next to it w/o a space. 
    // It would only look like a simple error because program still runs.
    cout << number_of_bananas;
    cout << " bananas ";
    // if i misspell cout and replace it with cut, error states: "Unable to resolve identifier cut."
    cout << "and ";
    cout << number_of_apples;
    cout << " apples,\n";
    cout << "you will have a total of ";
    cout << total_number_added;
    cout << " fruits!\n";
    cout << "If we make an error and hit the multiplication sign in the calculator,\n";
    cout << "we will get an output of ";
    cout << total_number_multiplied;
    cout << " fruits, which makes no sense unless we have 2 sets of each!\n";
    cout << "Lesson concluded, now go make a smoothie!\n";
    //Exit stage right
    return 0;
 }
//If both semicolons are gone, the program still works, but if only one is left, we receive an error and the build fails.
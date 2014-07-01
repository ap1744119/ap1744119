/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 30, 2014, 12:13 AM
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
    int number_of_quarters, number_of_dimes, number_of_nickels;
    int total_value_of_quarters, total_value_of_dimes, total_value_of_nickels;
    int total_monetary_value;
    
    cout << "Hello,\n";
    cout << "Press return after entering a value.\n";
    cout << "Enter the number of quarters:\n";
    cin >> number_of_quarters;
    total_value_of_quarters = number_of_quarters * 25;
    
    cout << "Enter the number of dimes:\n";
    cin >> number_of_dimes;
    total_value_of_dimes = number_of_dimes * 10;
    
    cout << "Enter the number of nickels:\n";
    cin >> number_of_nickels;
    total_value_of_nickels = number_of_nickels * 5;
    total_monetary_value = total_value_of_quarters + total_value_of_dimes + total_value_of_nickels;
    
    cout << " \n";
    cout << "The total worth of all the coins is ";
    cout << total_monetary_value;
    cout << " cents.\n";
    //Exit stage right
    return 0;
}


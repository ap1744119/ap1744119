/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 23, 2014, 7:01 PM
 * Purpose:First Program Example
 */

//System Level Libraries
#include <iostream>//Input Output Library
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    double balance(50.00);
    int count(0);
    //Output a string
    cout << "This program tells you how long it takes\n"
         << "to accumulate a debt of $100, starting with\n"
         << "an initial balance of $50 owed.\n"
         << "The interest rate is 2% per month.\n";
    
    while (balance < 100.00)
    {
        balance = balance + 0.02 * balance;
        count++;
    }
    
    cout << "After " << count << " months,\n";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "your balance due will be $" << balance << endl;
    //Exit stage right
    return 0;
}
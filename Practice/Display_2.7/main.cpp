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
    int hours;
    double gross_pay, rate;
    //Output a string
    cout << "Enter the hourly rate of pay: $";
    cin >> rate;
    cout << "Enter the number of hours worked,\n"
         << "rounded to a whole number of hours: ";
    cin >> hours;
    if (hours > 40)
        gross_pay = rate * 40 + 1.5 * rate * (hours - 40);
    else
        gross_pay = rate * hours;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Hours = " << hours << endl;
    cout << "Hourly pay rate = $" << rate << endl;
    cout << "Gross pay = $" << gross_pay << endl;
    //Exit stage right
    return 0;
}
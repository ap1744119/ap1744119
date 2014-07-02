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
    const double NORMAL(98.6);//degrees Fahrenheit
    double temperature;
    //Output a string
    cout << "Enter your temperature: ";
    cin >> temperature;
    
    if (temperature > NORMAL)
    {
        cout << "You have a fever.\n";
        cout << "Drink lots of liquids and get to bed.\n";
    }
    else
    {
        cout << "You don't have a fever.\n";
        cout << "Go study.\n";
    }
    //Exit stage right
    return 0;
}
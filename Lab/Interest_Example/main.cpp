/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 23, 2014, 7:01 PM
 * Purpose:First Program Example
 */

//System Level Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int loan(10000), i(12e-2), N(36), total_cost;
    //Enter variables into formula
    total_cost=(i*pow((1+i), N)*(loan))/(pow((1+i), N)-1);
    cout<<"Total cost of loan is: $ "<<total_cost<<".\n";
    //Exit stage right
    return 0;
}
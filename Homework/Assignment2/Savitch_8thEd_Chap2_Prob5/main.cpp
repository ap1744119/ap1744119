/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 23, 2014, 7:01 PM
 * Purpose:Assignment 2
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Input variables of amount the consumer needs, loan amount, interest rate, and duration in months
    float cnsmr, loan, irate, drtn;
    //Input variables
    cout<<"Enter how much money is needed by the consumer at face value: $\n";
    cin>>cnsmr;
    cout<<"Enter the interest rate for the loan in decimal: ";
    cin>>irate;
    cout>>"Enter the duration of the loan in months: ";
    cin<<drtn;
    //Calculate how big the loan should be
    loan=cnsmr/(1-irate*drtn);
    //Output the information
    cout<<"The loan you need to get in order to receive the amount you need is: $ "<<loan<<endl;
    //Exit stage right
    return 0;
}

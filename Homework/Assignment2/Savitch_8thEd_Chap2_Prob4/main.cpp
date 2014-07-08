/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on July 2, 2014, 3:47 PM
 * Purpose: Assignment 2
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare variables
    double s, ba, bm, r(.076);//where s=annual salary, b=bonus received (a for annual, m for monthly), & r=retroactive pay increase
    int m;
    //Input information needed
    cout<<"Please enter your annual salary: $";
    cin>>s;
    cout<<"Enter the number of months you will receive retroactive bonus pay: ";
    cin>>m;
    //Calculate the bonus the employee will receive
    ba=s*r*m/12+s;
    bm=ba/12;
    //Output bonus earned
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your new annual salary with the retroactive bonus will be: $"<<ba<<"."<<endl;
    cout<<"Breaks down to a new monthly salary of: $"<<bm<<" for the upcoming year."<<endl;
    //Exit stage right
    return 0;
}
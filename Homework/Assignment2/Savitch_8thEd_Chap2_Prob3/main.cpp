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
    //Input information needed
    cout<<"Please enter your annual salary: $";
    cin>>s;
    //Calculate the bonus the employee will receive
    ba=s*r/2+s;
    bm=(s*r/12)+s/2;
    //Output bonus earned
    cout<<"Your new salary with the retroactive bonus will be: $"<<ba<<"."<<endl;
    cout<<"breaks down to a monthly salary of: $"<<bm<<" for 6 months"<<endl;
    //Exit stage right
    return 0;
}
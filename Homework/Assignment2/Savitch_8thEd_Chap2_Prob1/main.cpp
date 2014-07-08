/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on July 2, 2014, 3:47 PM
 * Purpose: Assignment 2
 */

//System Level Libraries
#include <iostream>//Input Output Library
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare variables
    char done;
    int boxes;//Number of boxes needed
    double crlwght, ttlwght(35273.92);//Cereal weight of each one and total weight
    //Input information needed
    do
    {
    cout<<"Hello,\n";
    cout<<"Enter the weight of each cereal box in ounces or type 'done':\n";
    cin>>crlwght;
    //How many boxes needed to make a metric ton?
    boxes=ttlwght/crlwght;
    //Output solution
    cout<<"You would need "<<boxes<<" boxes of that cereal to make a metric ton.\n";
    //Exit stage right
    } while (crlwght!=done);
    cout<<"Good-bye.\n";
    return 0;

}
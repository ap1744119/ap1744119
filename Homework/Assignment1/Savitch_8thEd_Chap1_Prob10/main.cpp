/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 30, 2014, 7:46 PM
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
    char letter;
    cout << "Hello,\n";
    cout << "Please enter any letter from the keyboard:\n";
    cin >> letter;
    
    cout <<" "<<endl
        <<"  "<< letter <<" "<< letter <<" "<< letter <<""<<endl
        <<" "<< letter <<"    "<< letter <<""<<endl
        <<""<< letter <<"      "<<endl
        <<""<< letter <<"      "<<endl
        <<""<< letter <<"      "<<endl
        <<""<< letter <<"      "<<endl
        <<""<< letter <<"      "<<endl
        <<" "<< letter <<"    "<< letter <<""<<endl
        <<"  "<< letter <<" "<< letter <<" "<< letter <<""<<endl;
    //Exit stage right
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 30, 2014, 7:46 PM
 * Purpose: Assignment 1
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
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
    return 0;
}
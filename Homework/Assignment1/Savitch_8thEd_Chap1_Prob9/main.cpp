/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 30, 2014, 6:58 PM
 * Purpose: Assignment 1
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
    int distance, time, acceleration;
    cout << "Hello,\n";
    cout << "Press return after entering a value.\n";
    cout << "Enter the time, in seconds, of the freefall duration:\n";
    cin >> time;
    acceleration = 32;
    distance = (acceleration * time^2)/2;
    
    cout << "The total distance traveled in ";
    cout << time;
    cout << " seconds,\n";
    cout << "is ";
    cout << distance;
    cout << " feet.\n";
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 25, 2014, 7:54 PM
 * Purpose: Assignment 1
 */

#include <iostream>
using namespace std;
int main( ) 
{
    int number_of_bananas, number_of_apples, total_number_multiplied, total_number_added;
    cout << "Press enter after entering the values.\n";
    cout << "Enter the number of bananas bought at the supermarket:\n";
    cin >> number_of_bananas;
    cout << "Enter the number of apples bought at the supermarket:\n";
    cin >> number_of_apples;
    total_number_multiplied = number_of_bananas * number_of_apples;
    total_number_added = number_of_bananas + number_of_apples;
    cout << "If you have ";
    cout << number_of_bananas;
    cout << " bananas ";
    cout << "and ";
    cout << number_of_apples;
    cout << " apples,\n";
    cout << "you will have a total of ";
    cout << total_number_added;
    cout << " fruits!\n";
    cout << "If we make an error and hit the multiplication sign in the calculator,\n";
    cout << "we will get an output of ";
    cout << total_number_multiplied;
    cout << " fruits, which makes no sense unless we have 2 sets of each!\n";
    cout << "Lesson concluded, now go make a smoothie!\n";
    return 0;
}

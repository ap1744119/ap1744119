/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on June 25, 2014, 7:54 PM
 * Purpose: Assignment 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main( ) 
{
    //Declare variables
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Hello,\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    cout << "Good-bye\n";
    //Exit stage right
    return 0;
}

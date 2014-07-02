/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 *
 * Created on June 23, 2014, 7:01 PM
 * Purpose:First Program Example
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
    int number_of_bars;
    double one_weight, total_weight;
    //Output a string
    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cout << "Then press return.\n";
    cin >> number_of_bars;
    cin >> one_weight;
    
    total_weight = one_weight * number_of_bars;
    
    cout << number_of_bars << " candy bars\n";
    cout << one_weight << " ounces each\n";
    cout << "Total weight is " << total_weight << " ounces.\n";
    
    cout << "Try another brand.\n";
    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cout << "Then press return.\n";
    cin >> number_of_bars;
    cin>> one_weight;
    
    total_weight = one_weight * number_of_bars;
    
    cout << number_of_bars << " candy bars\n";
    cout << one_weight << " ounces each\n";
    cout << "Total weight is " << total_weight << " ounces.\n";
    
    cout << "Perhaps an apple would be healthier.\n";
    
    //Exit stage right
    return 0;
}

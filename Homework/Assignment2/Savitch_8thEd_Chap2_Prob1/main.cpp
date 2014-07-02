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
int main(int argc, char** argv) {
    //Declare variables
    int cereal_box_weight, number_of_boxes, total_weight_in_oz;
    double total_weight;
    const int metric_conversion(1/35273.92);
    //Output a string
    cout << "Enter the weight of cereal box in ounces:\n";
    cin >> cereal_box_weight;
    cout << "Enter the number of cereal boxes:\n";
    cin >> number_of_boxes;
    total_weight = cereal_box_weight * number_of_boxes * metric_conversion;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << total_weight;
    
    //Exit stage right
    return 0;
}
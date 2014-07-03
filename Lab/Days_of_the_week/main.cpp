/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on July 2, 2014, 9:01 PM
 * Purpose: Switch Month Days
 */

//System Level Libraries
#include <iostream>//Input Output Library
#include 
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    const int MSIZE=11;
    char month[MSIZE];
    int imonth;
    
    //Acquire the month
    cout<<"Type in a month and the number of days "<<
            "in that month will be output"<<endl;
    cin>>month;
    
    //Output the number of days
    switch(month){
        case "January":cout<<"there are 31 days in "
                           <<imonth<<endl;
                           break;
        case "February":cout<<"there are 28 days in "
                            <<imonth<<endl;
                           break;
    }
    //Exit stage right
    return 0;
}

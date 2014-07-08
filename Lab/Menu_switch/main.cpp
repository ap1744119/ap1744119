/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on July 7, 2014, 7:01 PM
 * Purpose:First Program Example
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare menu variables
    unsigned short choice;//unsaigned short is a 2 byte positive integer
    
    //output the menu
    cout<<"Type 1 for Problem X from book Savitch"<<endl;
    cout<<"Type 2 for Problem Y from book Gaddis"<<endl;
    cout<<"Type 3 for Problem A from book Savitch"<<endl;
    cout<<"Type 4 for Problem B from book Gaddis"<<endl;
    
    //Acquire the users choice and execute
    cin>>choice;
    switch(choice){
        case 1:{
            cout>>"Put code for problem X here"<<endl;
            break;
        }
        case 2:{
            cout>>"Put code for problem Y here"<<endl;
            break;
        }
        case 3:{
            cout>>"Put code for problem A here"<<endl;
            break;
        }
        case 4:{
            cout>>"Put code for problem B here"<<endl;
            break;
        }
    }
    //Exit stage right
    return 0;
}


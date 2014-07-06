/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 *
 * Created on July 6, 2014, 9:35 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char ans;
    
    do
    {
        cout<<"Hello\n";
        cout<<"Do you want another greeting?\n";
        cout<<"Press y for yes, n for no,\n";
        cout<<"and then press return: ";
        cin>>ans;
    }  while(ans=='y'||ans=='Y');
    cout<<"Good-bye\n";    
    return 0;
}


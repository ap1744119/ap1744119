/* 
 * File:   main.cpp
 * Author: Alejandra Pesqueira
 * Created on July 5, 2014, 9:38 PM
 * Purpose:First Program Example
 */

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {

string middle_name, pet_name;
string alter_ego_name;

cout<<"Enter your middle name and the name of your pet.\n";
cin>>middle_name>>pet_name;

alter_ego_name=pet_name+" "+middle_name;

cout<<"The name of your alter ego is: ";
cout<<alter_ego_name<<"."<<endl;

    return 0;
}
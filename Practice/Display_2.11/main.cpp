#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int count_down;
    cout<<"How many greetings do you want? ";
    cin>>count_down;
    
    while (count_down>0)
    {
        cout<<"Hello ";
        count_down=count_down-1;
    }
    cout<<endl;
    cout<<"That's all folks!\n";
    return 0;
}


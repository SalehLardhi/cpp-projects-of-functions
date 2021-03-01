/*
Write a program like ``Hello, world!'' that takes a name as a command-line argument
and writes ``Hello, name !''. Modify this program to take any number of names as 
arguments and to say hello to each.
*/
#include <iostream>
#include <cstdio>

using namespace std;
string print(string);
int main(){
    string name;
    do{
        cout<<"Enter your name\n";
        cin>>name;
        print(name);

    }while(name != "stop");

}
string print (string nam){

    cout<<"Hello "<<nam<<endl;
    return nam;
}

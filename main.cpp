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

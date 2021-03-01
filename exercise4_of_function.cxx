/*
Write a program containing inline function (called roundany) to round and value.
*/
#include <iostream>
using namespace std;
inline int roundany(float y){

    int i,k; double m;
    i=y;
    k=i+1;
    m=1+0.5;
    if(y>=m)
        return k;
        else
        return i;
}
int main(){

    double num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"roundany is: "<<roundany(num);

}

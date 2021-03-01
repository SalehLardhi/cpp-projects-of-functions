/*
Write a program containing overloading function (called print) to print a value based on 
its data type (integer, float-point or char).
*/
#include <iostream>
using namespace std;
void print(int i) {

  cout << " Here is int " << i << endl;
}

void print(float  f) {

  cout << " Here is float " << f << endl;
}

int main() {
float d;
cout<<"Enter a value even float \n";
cin>>d;
int i;
i=d;

  print(i);
  cout<<"\n";
  print(d);

  return 0;
}


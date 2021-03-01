/*
Write a program containing three functions, first function to read 6 elements of one 
dimension array (called A), second function to sort array elements in ascending order 
and store them in array B then print them, and the third function to sort array elements 
in descending order and store them in array C then print them.
*/
#include <iostream>
#include <cstdio>
using namespace std;
int read (int[]);
int asc (int[],int[]);
int desc (int[],int[]);
int main(){
    int A[6],B[6],C[6];
    read (A);
    asc (A,B);
    for(int i=0;i<6;i++){
        cout<<B[i];
  }
       cout<<endl;
    desc (A,C);
    for(int i=0;i<6;i++){
        cout<<C[i];
    }
}
int read (int D[]){
    cout<<"Enter 6 Elements\n";
    for(int i=0;i<6;i++){
        cin>>D[i];

    }
    return D[6];
}
 int asc (int A[6],int B[]){
    int j;
    for(int i=0;i<6;i++){
        for(int k=i+1;k<6;k++){
            if(A[i]>A[k])
            j=A[i];
            A[i]=A[k];
            A[k]=j;
        }

    }
    for(int i=0;i<6;i++){
        B[i]=A[i];
    }
}
int desc (int A[],int C[]){
    int j;
    for(int i=0;i<6;i++){
        for(int k=i+1;k<6;k++){
            if(A[i]<A[k])
            j=A[i];
            A[i]=A[k];
            A[k]=j;
        }
    }
    for(int i=0;i<6;i++){
        C[i]=A[i];
    }
}

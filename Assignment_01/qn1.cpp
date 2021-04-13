//Write a C++program that reads a number and tests whether it is multiple of 5 or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;
    if(n%5==0){
        cout<<"The given number is  multiple of 5"<<endl;
    }
    else{cout<<"The given number is not multiple of 5"<<endl;}

    return 0;
}

//Write a C++program that reads a number and tests whether is it multiple of 5 or 11
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    if(n%5==0 ||n%11==0){
        cout<<"The given number is multiple of 5 or 11"<<endl;
    }
    else{cout<<"The number is not multiple of 5 or 11"<<endl;}
    return (0);
}
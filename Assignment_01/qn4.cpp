//Write a C++program that reads a number and tests whether is it multiple of 5 but not 11
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    if(n%5==0 && n%11==!0){
        cout<<"The given number is multiple of 5 but not 11"<<endl;
    }
    else{
        cout<<"..........NOT.........."<<endl;
    }
    return (0);
}

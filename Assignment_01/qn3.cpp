//Write a C++program that reads a number and tests whether is it multiple of 5 and 11
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    if(n%5==0 && n%11==0){
        cout<<"THe given number is Multiple of 5 and 11"<<endl;
    }
    else{
        cout<<"The given humber is not not the mutiple of 5 and 11 both"<<endl;
    }
    return (0);
}

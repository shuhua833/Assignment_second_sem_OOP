//Write a C++program that reads a number and finds sum of the squares of digits (For example, if the number if 235 then sum = 2^2+3^2+5^2 =38) 
#include<iostream>
using namespace std;
int main(){
    int n,x,sum=0;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    while(n!=0){
        x=n%10;
        sum=sum+x*x;
        n=n/10;
    }
    cout<<"SUM of squares of digit is :"<<sum<<endl;
    return (0);
}
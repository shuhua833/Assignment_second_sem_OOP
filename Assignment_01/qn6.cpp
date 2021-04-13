//Write a C++program to read any two numbers and performs simple arithmetic operations (Addition, subtraction, division, multiplication).
#include<iostream>
using namespace std;
void calculator(double x ,double y){
    double sum=x+y;
    double sub=x-y;
    double mul=x*y;
    double div=x/y;
    cout<<"Addition of two numbers : "<<sum<<endl;
    cout<<"Subtraction of two numbers : "<<sub<<endl;
    cout<<"Division of two numbers : "<<div<<endl;
    cout<<"Multiplication of twi numbers : "<<mul<<endl;
}
int main(){
    double n1,n2;
    cout<<"Enter any two numbers :"<<endl;
    cin>>n1>>n2;
    calculator(n1,n2);
    return (0);

}
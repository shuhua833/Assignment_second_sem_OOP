//Write a C++ program that reads a year (e.g 2012) and checks whether the entered year is leap year or not.
#include<iostream>
using namespace std;
void is_leap_year(int year){
    if(year%4==0 || year%100==!0 && year%400==0){
        cout<<"Hello there "<<endl;
        cout<<"the year "<<year<<" is a leap year ."<<endl;
    }
    else{
        cout<<"The year "<<year<<" is not the leap year."<<endl;
    }
}

int main(){
    int year;
    cout<<"Enter the year :"<<endl;
    cin>>year;
    is_leap_year(year);
    return (0);
}
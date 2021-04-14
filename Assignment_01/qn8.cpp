//Write a C++program that reads marks in five subjects and finds total marks, percentage.
#include<iostream>
using namespace std;
void total_marks_and_percentage(int m1,int m2,int m3,int m4,int m5){

    cout<<"Enter marks of 5 subject one by one "<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;
    int t_marks=m1+m2+m3+m4+m5;
    cout<<"Total marks : "<<t_marks<<endl;

    double percentage=0;
    int total_sub=5;
    percentage=((float)t_marks/total_sub);

    cout<<"Percentage :"<<percentage<<"%"<<endl;
}

int main(){
    int m1,m2,m3,m4,m5;
    total_marks_and_percentage(m1,m2,m3,m4,m5);
    return 0;
}

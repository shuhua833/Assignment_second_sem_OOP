//Write a C++program to input time in second convert it into hour, minute and second.
#include<iostream>
using namespace std;
int main(){
    int tin_sec,hr,min,sec01_left,sec02_left;
    cout<<"Enter time in seconds :"<<endl;
    cin>>tin_sec;

    hr=tin_sec/60;

    sec01_left=tin_sec-(60*hr);
    min=sec01_left/60;

    sec02_left=tin_sec-(hr*60)-(min*60);

    cout<<"HR \tMIN \tSEC "<<endl;
    cout<<hr<<"\t"<<min<<"\t"<<sec02_left<<"\t"<<endl;

    return (0);
    
}
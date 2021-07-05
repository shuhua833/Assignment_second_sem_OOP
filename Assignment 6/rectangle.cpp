#include<iostream>
using namespace std;
inline int rect(int l,int b)
{
	return l*b;
}
int main()
{
	int l,b;
	cout<<"enter the length and breadth of rectangle";
	cin>>l>>b;
	cout<<"Area of rectangle is:"<<rect(l,b);
}

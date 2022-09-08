#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"enter the year: ";
	cin>>y;
	if(y%4==0)
	{
		cout<<"it is leap year";
	}
	else
	{
		cout<<"it is not a leap year";
	}
	return 0;
}

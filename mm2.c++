#include<iostream>
using namespace std;
int main()
{
	int rows,i,j;
	cout<<"enter no of rows: ";
	cin>>rows;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

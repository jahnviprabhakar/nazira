#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,t,lcm,gcd;
	cout<<"enter first number: ";
	cin>>x;
	cout<<"enter second number: ";
	cin>>y;
	a=x;
	b=y;
	while(b!=0)
	{
	t=b;
	b=a%b;
	a=t;
}
gcd=a;
lcm=(x*y)/gcd;
cout<<"the gcd is: "<<gcd;
cout<<"the lcm is: "<<lcm;
	return 0;
}

#include<iostream>
using namespace std;
class area
{
	public:
		void output(int l,int b)
		{
			cout<<"\narea of rectangle is="<<l*b;
		}
		void output (int a)
		{
			cout<<"\narea of square is="<<a*a;
		}
		};
		int main()
		{
			area obj;
			obj.output(5,6);
			obj.output(5);
		};

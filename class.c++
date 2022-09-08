#include <iostream>
using namespace std;
class degree{
 public:
  degree()
  {
   cout<<"I got a degree.";
  }
};
class undergraduate:public degree{
 public:
  undergraduate()
  {
   cout<<"I am an Undergraduate\n";
  }
};
class postgraduate:public degree{
 public:
  postgraduate()
  {
   cout<<"I am a Postgraduate\n";
  }
};
int main()
{
 undergraduate u;
 postgraduate p;
}

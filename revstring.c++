#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    std::cout<<" enter the string";
    cin>>str;
    cout << "Before Reversal: " << str;
    reverse(str.begin(), str.end());
    
    cout << "\nAfter Reversal: "<< str;
    
    return 0;
}

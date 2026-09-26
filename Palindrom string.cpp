#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str,rev;
	cout<<"enter string";
	cin>> str;
	rev=string(str.rbegin(),str .rend());
	if (str==rev)
	cout<<"string is a palindrome";
	else 
	cout<<"string isnt palindrome";
}
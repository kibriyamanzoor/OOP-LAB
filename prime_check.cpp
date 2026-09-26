#include <iostream>
using namespace std;
int main()
{
	int n;
	bool prime=true;
	cout<<"enter a number";
	cin>>n;
	if (n<=1){
		prime=false;
	}
	else {
		for (int i=2;i*1<=n;i++){
			if (n%i==0){
				prime=true;
				break;
			}
		}
	}
	if(prime)
	cout<<"prime";
	else 
	cout<<"not prime";
}
#include <iostream>
using namespace std;
int main(){
	int a,b;
	char op;
	cout<<"enter two numbers";
	cin>>a>>b;
	cout<<"enter operation";
	cin>>op;
	switch(op){
		case '+':
		cout<<"Result=" <<a+b;
		break;
		case '-':
		cout<<"Result=" <<a-b;
		break;
		case '*':
		cout<<"result=" <<a*b;
		break;
		case '/':
		cout<<"result=" <<a/b;
		break;
	}
}
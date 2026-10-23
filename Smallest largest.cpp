#include <iostream>
using namespace std;
inline int maxOf(int a, int b)
{
    return (a>b)?a:b;
}
inline int minOf(int a,int b)
{
    return (a<b)?a:b;
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    int largest=maxOf(maxOf(a, b), c);
    int smallest=minOf(minOf(a, b), c);
    cout << "Largest number is " << largest << endl;
    cout << "Smallest number is " << smallest << endl;
    return 0;
}
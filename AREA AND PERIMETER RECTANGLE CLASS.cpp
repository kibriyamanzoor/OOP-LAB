#include <iostream>
using namespace std;
class Rectangle{
	double length,breadth;
	public:
		void getdata(){
			cout<<"enter the length";
			cin>>length;
			cout<<"Enter breadth";
			cin>>breadth;
		}
		double area(){
			return length*breadth;
		}
		double perimeter(){
			return 2*(length+breadth);
		}
		void display(){
			cout<<"the area is:"<<area()<<endl;
			cout<<"the perimeter is:"<<perimeter()<<endl;
		} 
		   };
		int main()
		{
			Rectangle r;
			r.getdata();
			r.display();
		}
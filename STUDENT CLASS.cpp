#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int rollNo;
    int marks1, marks2, marks3;
public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks in three subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }
    int total()
    {
        return marks1 + marks2 + marks3;
    }
    double average()
    {
        return total() / 3.0;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNo << endl;
        cout << "Total: " << total() << endl;
        cout << "Average: " << average() << endl;
    }
};
int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}
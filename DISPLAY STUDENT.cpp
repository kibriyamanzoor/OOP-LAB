#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int marks;
};
void display(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}
int main() {
    Student s;
    s.name = "Sana";
    s.marks = 91;
    display(s);
    return 0;
}

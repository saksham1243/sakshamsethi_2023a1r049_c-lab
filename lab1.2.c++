//1.2
//analyze and design classes for a student management system
//to create a student class, its costructor, destructor and member function.
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {
        cout << "Student " << name << " created" << endl;
    }
    ~Student() {
        cout << "Student " << name << " destroyed" << endl;
    }
    void displayInfo() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    string name;
    int age;
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    Student student(name,age);
    student.displayInfo();
    return 0;
}
//2.2
//write a c++ program to add the details of a student using a parameterized constructor.
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Student details added successfully!" << endl;
    }
    void displayInfo() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    string studentName;
    int age;
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter student age: ";
    cin >> age;
    Student student(studentName, age);
    student.displayInfo();
    return 0;
}

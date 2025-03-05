//3.1
//to update the details of a student using a member function of student class.
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    string grade;
public:
    // Constructor to initialize student details
    Student(string n, int a, string g) {
        name = n;
        age = a;
        grade = g;
    }
    // Function to update student details
    void updateDetails(string newName, int newAge, string newGrade) {
        name = newName;
        age = newAge;
        grade = newGrade;
        cout << "Student details after updating:\n";
    }
    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Grade: " << grade << "\n";
    }
};
int main() {
    // Creating a Student object
    Student student1("John Doe", 18, "12th\n");
    // Displaying initial details
    student1.displayDetails();
    // Updating student details
    student1.updateDetails("Jane Smith", 19, "College Freshman\n");
    // Displaying updated details
    student1.displayDetails();
    cout<<"student details updated succefully:\n\n";
    return 0;
}
//3.2
//to delete the details of a student using member function of student class.
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    string grade;
public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();  // To clear the newline character from buffer
        cout << "Enter Grade: ";
        getline(cin, grade);
    }
    // Function to display student details
    void displayDetails() {
        if (name.empty()) {
            cout << "\nNo student details available (Deleted).\n";
        } else {
            cout << "\nStudent Details:\n";
            cout << "Name: " << name << "\n";
            cout << "Age: " << age << "\n";
            cout << "Grade: " << grade << "\n";
        }
    }
    // Function to delete student details
    void deleteDetails() {
        name = "";
        age = 0;
        grade = "";
        cout << "\nStudent details deleted successfully!\n";
    }
};
int main() {
    Student student1;
    // Taking input from user
    student1.inputDetails();
    // Displaying entered details
    student1.displayDetails();
    // Asking user if they want to delete the details
    char choice;
    cout << "\nDo you want to delete student details? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        student1.deleteDetails();
    }
    // Displaying details after deletion (if deleted)
    student1.displayDetails();
    return 0;
}
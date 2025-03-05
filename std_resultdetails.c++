//Q7
/*write a C++ program to create a class for student to get and print details of a student. Following are the details of  a student:
student_id,name,branch,sub1_marks,sub2_marks,sub3_marks,sub4_marks,sub5_marks
write member function to calculate percentage,class(dist,first,second,pass)of student*/
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int student_id;
    string name;
    string branch;
    int sub1_marks;
    int sub2_marks;
    int sub3_marks;
    int sub4_marks;
    int sub5_marks;
public:
    // Function to get student details
    void getDetails() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cout << "Enter Name: ";
        cin.ignore(); // To ignore the newline character left by previous input
        getline(cin, name);
        cout << "Enter Branch: ";
        getline(cin, branch);
        cout << "Enter Marks for Subject 1: ";
        cin >> sub1_marks;
        cout << "Enter Marks for Subject 2: ";
        cin >> sub2_marks;
        cout << "Enter Marks for Subject 3: ";
        cin >> sub3_marks;
        cout << "Enter Marks for Subject 4: ";
        cin >> sub4_marks;
        cout << "Enter Marks for Subject 5: ";
        cin >> sub5_marks;
    }
    // Function to print student details
    void printDetails() {
        cout << "\nStudent ID: " << student_id << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Marks in Subject 1: " << sub1_marks << endl;
        cout << "Marks in Subject 2: " << sub2_marks << endl;
        cout << "Marks in Subject 3: " << sub3_marks << endl;
        cout << "Marks in Subject 4: " << sub4_marks << endl;
        cout << "Marks in Subject 5: " << sub5_marks << endl;
    }
    // Function to calculate percentage
    float calculatePercentage() {
        int total_marks = sub1_marks + sub2_marks + sub3_marks + sub4_marks + sub5_marks;
        return (total_marks / 5.0); // Assuming each subject is out of 100 marks
    }
    // Function to determine class based on percentage
    string determineClass(float percentage) {
        if (percentage >= 75) {
            return "Distinction";
        } else if (percentage >= 60) {
            return "First Class";
        } else if (percentage >= 50) {
            return "Second Class";
        } else if (percentage >= 40) {
            return "Pass Class";
        } else {
            return "Fail";
        }
    }
};
int main() {
    Student student;
    student.getDetails(); // Get student details
    student.printDetails(); // Print student details
    float percentage = student.calculatePercentage(); // Calculate percentage
    cout << "Percentage: " << percentage << "%" << endl;
    string studentClass = student.determineClass(percentage); // Determine class
    cout << "Class: " << studentClass << endl;
    return 0;
}
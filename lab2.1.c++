//2.1
//write a c++ program to allocate appropriate access specifiers to data members of student and course class along with justification 
//in comments.
#include <iostream>
#include <string>
using namespace std;
class Course {
private:
    string courseName; // Private: Only accessible within the class to maintain encapsulation
    int courseID;      // Private: Prevents external modification
protected:
    int duration; // Protected: Can be accessed by derived classes
public:
    Course(string name, int id, int dur) : courseName(name), courseID(id), duration(dur) {}  
    void displayCourse() { // Public: Accessible to everyone
        cout << "Course ID:" << courseID << ", \nCourse Name:" << courseName << ", \nDuration: " << duration << " months" << endl;
    }
};
class Student {
private:
    string studentName; // Private: Ensures data integrity and prevents direct modifications
    int studentID;      // Private: Unique identifier, should not be changed externally
protected:
    string department; // Protected: Can be accessed by subclasses like GraduateStudent
public:
    Student(string name, int id, string dept) : studentName(name), studentID(id), department(dept) {}  
    void displayStudent() { // Public: Allows displaying student details
        cout << "\nStudent ID:" << studentID << ", \nName: " << studentName << ", \nDepartment: " << department << endl;
    }
};
int main() {
    Course course("Computer Science", 101, 4);
    Student student("Saksham", 2023001, "Engineering");
    course.displayCourse();
    student.displayStudent();   
    return 0;
}
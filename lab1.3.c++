//1.3
//to create a course class, its constructor, destructor and member function
#include <iostream>
#include <string>
using namespace std;
class Course {
private:
    string courseName;
    string courseCode;
public:
    Course(string name, string code) : courseName(name), courseCode(code){
        cout << "Course " << courseName << " (" << courseCode << ") created." << endl;
    }
    ~Course() {
        cout << "Course " << courseName << " (" << courseCode << ") destroyed." << endl;
    }
    void displayInfo() {
        cout << "\nCourse Details:" << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
    }
};
int main() {
    string name, code;
    cout << "Enter course name: ";
    getline(cin, name);
    cout << "Enter course code: ";
    getline(cin, code);
    Course course(name, code);
    course.displayInfo();
    return 0;
}
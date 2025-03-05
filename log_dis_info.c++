/*write a c++ program to create a ckass with function name login() and display_info,login() function will accept pin(default value 123)
from user as parameter and display_info() function will accept name, regno, marks,percentage and grade from the user as parameter 
and display all information entered by user on screen with welcome message*/
// #include<iostream>
#include<iostream>
using namespace std;
class program {
private:
    string name = "abc";
    string regno = "R121";
    int marks = 111;
    float percentage = 66.8;
    char grade = 'B';
public:
    // login function accepts pin, and checks if it's correct
    void login(int pin) {
        if(pin == 123) {  // Use '==' to check equality
            cout << "Login successful\n";
            display_info(name, regno, marks, percentage, grade);  // Call display_info with parameters
        }
        else {
            cout << "Incorrect pin......Login failed\n";
        }
    }
    // display_info function to display user information
    void display_info(string name, string regno, int marks, float percentage, char grade) {
        cout << "\nInformation entered by the user is:\n";
        cout << "Name: " << name << "\n";
        cout << "Registration Number: " << regno << "\n";
        cout << "Marks: " << marks << "\n";
        cout << "Percentage: " << percentage << "\n";
        cout << "Grade: " << grade << "\n";
    }
};
int main() {
    int pin1;
    cout << "Enter your pin: ";
    cin >> pin1;  // Take the pin from the user
    program obj;  // Create an object of the program class
    obj.login(pin1);  // Call the login function with the pin entered by the user
    return 0;
}
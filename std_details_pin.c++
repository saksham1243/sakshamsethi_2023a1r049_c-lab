//student details using pin
#include <iostream>
using namespace std;
class Program {
private:
    string name = "abc";
    string regno = "R121";
    int marks = 111;
    float percentage = 66.8;
    char grade = 'B';
public:
    void display_info() {
        cout << "\nInformation entered by the user:\n";
        cout << "Name: " << name << endl;
        cout << "Registration number: " << regno << endl;
        cout << "Marks: " << marks << endl;
        cout << "Percentage: " << percentage << endl;
        cout << "Grade: " << grade << endl;
    }
    void login(int pin) {
        if (pin == 123) {
            cout << "Login successful.\n";
            display_info();
        } else {
            cout << "Login failed.\n";
        }
    }
};
int main() {
    int pin;
    cout << "Enter your PIN: ";
    cin >> pin;
    Program obj;
    obj.login(pin);
    return 0;
}

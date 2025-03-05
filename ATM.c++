//Q6
/*wap to demonstrate ATM money withdrawl process by taking following private data members:
account no., balance
the withdrawl function should return remaining balance to the user and should deduct withdrawl amount from balance.
if withdrawl amount > balance print appropriate message on screen (not enough balance)
the deposit function should return updated balance to user.*/
#include <iostream>
using namespace std;
class ATM {
private:
    int accountNo;
    double balance;
public:
    // Constructor to initialize account
    ATM(int accNo, double initialBalance) {
        accountNo = accNo;
        balance = initialBalance;
    }
    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Not enough balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        }
    }
    // Function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Updated balance: " << balance << endl;
    }
    // Function to show balance
    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};
int main() {
    int accNo;
    double initialBalance;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;
    ATM myAccount(accNo, initialBalance);
    int choice;
    double amount;
    do {
        cout << "\nATM Menu:\n1. Withdraw\n2. Deposit\n3. Show Balance\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            myAccount.withdraw(amount);
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            myAccount.deposit(amount);
            break;
        case 3:
            myAccount.showBalance();
            break;
        case 4:
            cout << "Exiting ATM. Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
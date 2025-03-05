#include <iostream>
#include <string>
using namespace std;
class BillingApp {
private:
    string product_name;
    double price;
public:
    BillingApp(string product_name, double price) {
        this->product_name = product_name;
        this->price = price;
    }
    void discount() const {
        double discountedPrice = price * 0.9;
        cout << "\nProduct Name: " << product_name << endl;
        cout << "Original Price: $" << price << endl;
        cout << "Discounted Price (10% off): $" << discountedPrice << endl;
    }
};
int main() {
    string name;
    double price;
    cout << "Enter product name: ";
    getline(cin, name);
    cout << "Enter product price: $";
    cin >> price;
    BillingApp product(name, price);
    product.discount();
    return 0;
}
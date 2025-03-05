//write a c++ program to demonstrate implementation of array using direct initialization method
// #include <iostream>
// using namespace std;
// int main() {
//     // Direct initialization of an integer array
//     int numbers[5] = {10, 20, 30, 40, 50};
//     // Displaying the array elements
//     cout << "Array elements: ";
//     for (int i = 0; i < 5; i++) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
#include<iostream>
using namespace std;
class program{
    private : int adv[5]={1,2,3,4,5};
    int weak[5]={6,7,55,88,9};int i;
    public : void display()
    {
        cout<<"list of advanced learners \t";
        for(i=0;i<5;i++){
            cout<<adv[i]<<"\t";
        }
        cout<<"list of weak learners \t";
        for(i=0;i<5;i++){
            cout<<weak[i]<<"\t";
        }
    }
};
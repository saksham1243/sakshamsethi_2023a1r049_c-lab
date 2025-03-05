// Q3
/*WAP to display addition, subtration, multiplication adn division of two integers on screen
declare class calculation
declare data member num1 and num2 in private section
write member function for initialize num1 and num2
write member function for each operation*/
#include<iostream>
using namespace std;
class operations{
    private : float num1, num2;
    public : void addition()
    {
        cout<<"num1=";
        cin>>num1;
        cout<<"num2=";
        cin>>num2;
        cout<<"the addition of two numbers are:" <<num1 +  num2<< endl;
    }
    public : void subtraction()
    {
        cout<<"the subtraction of two numbers are:" <<num1 -  num2<< endl;
    }
    public : void multiplication()
    {
        cout<<"the multiplication of two numbers are:" <<num1 *  num2<< endl;
    }
    public : void division()
    {
        if (num2 !=0)
        {
        cout<<"the division of two numbers are:" <<num1 /  num2<< endl;
        }
        else
        {
            cout<<"error";
        }

    }
};
int main(){
    operations obj;
    obj.addition();
    obj.subtraction();
    obj.multiplication();
    obj.division();
    return 0;
}
//write a program to create a class with name MyApp and with functions name, Accept() and Display(), Accept() function will accept
// email and password from user and Display() function will display the information entered by the user on screen.
/*
//case1
#include<iostream>
using namespace std;
class MyApp
{
    private : string email,password;
    public : void Accept()
    {
        cout<<"enter ur email";
        cin>>email;
        cout<<"\n enter ur password";
        cin>>password;
    }
    public : void Display()
    {
        cout<<"\ninformation entered by the user is";
        cout<<"\n email= "<<email<<" \n password is="<<password;
        email="abc@gmail.com";
        password="123";
    }
};
int main(){
    MyApp obj;
    obj.Accept();
    obj.Display();
    return 0;

}*/

//case 2
#include<iostream>
using namespace std;
class MyApp
{
    public : void Accept(string email, string password)//formal paramters
    {
        cout<<"enter ur email";
        cin>>email;
        cout<<"\n enter ur password";
        cin>>password;
    }
    /*public : void Display()
    {
        cout<<"\ninformation entered by the user is";
        cout<<"\n email= "<<email<<" \n password is="<<password;
    }*/
};
int main(){
    MyApp obj;
    string email, password;
    cout<<"\nenter your email";
    cin>>email;
    cout<<"\nenter your password";
    cin>>password;
    obj.Accept(email,password);//actual parameters
    return 0;

}
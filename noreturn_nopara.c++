//Program to demonstarte the working of function with no return type and no parameter.
#include<iostream>
using namespace std;
class ATM_App{
    public: void welcome()
    {
        cout<<"Welcome to ATM";
    }
    private : int pin;
    public : string validate()
    {
        cout<<"\n Enter Your pin";
        cin>>pin;
        if(pin ==123){
            return "True";
        }
        else{
            return"false";
        }
    }
    private : float wamt;
    public : float withdraw(float Bamt)
    {
        cout<<"\n Enter Amount u want to withdraw";
        cin>>wamt;
        if(wamt>Bamt)
        {
            cout<<"\n Insufficient Balance";
        }
        else{
            return Bamt-wamt;
        }
    }
    public : void Display_Balance(float amt)
    {
        cout<<"\n Your Balance is"<<amt;

    }
};
int main(){
    ATM_App obj;
    string res;
    float res1;
    float amt1 = 10000.50;
    obj.welcome();
    res=obj.validate();
    if(res=="Type"){
        cout<<"\n Login Succesful";
        res1 = obj.withdraw(amt1);
        obj.Display_Balance(res1); 
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// class program{
//     public : int a;
//     program(int b){
//     a=b;
// }
// void display(){
//    cout<<"value of a is"<<a;
// }
// };
// void modify(program obj2)


// #include<iostream>
// using namespace std;
// class program{
//     public : int a;
//     program(int b){
//         a=b;
//     }
//     void display(){
//         cout<<"value of a is"<<a;
//     }
// };
// void modify(program &obj2)//obj2 reference is used as parameter to modify function(any change inside this function will modify 
// //original object)
// {
//     obj2.a=20;
//     //any change made by object2 will affect object 1 value
// }
// int main(){
//     program obj1(10);
//     obj1.display();
//     modify(obj1);
//     obj1.display();
// }
// /*in call by refrence ,any change inside the function accepting object as parametre will modify the original object*/

#include<iostream>
using namespace std;
class bankapp{
    private : 
        int accountNumber;
        double accountBalance;
    public : 
    bankapp(int accNum,double accBal){
    accountNumber = accNum;
    accountBalance = accBal;
    }
    void display(){
    cout<<"account number:"<<accountNumber<<endl;
    cout<<"account balance: "<<accountBalance<<endl;
    }
    void updatedAmmount(bankapp obj){
        double amount;
        cout<<"enter amount to add:";
        cin>>amount;
        obj.accountBalance += amount;
        cout<<"updtaed balance: "<<obj.accountBalance<<endl;
    }
};
int main(){
    int accNum;
    double accBal;
    cout<<"enter account number:";
    cin>>accNum;
    cout<<"enter initial account balance: ";
    cin>>accBal;
    bankapp userAccount(accNum,accBal);
    cout<<"\ninitial account details:\n";
    userAccount.display();
    cout<<"\nupdated balance:\n";
    userAccount.updatedAmmount(userAccount);
    cout<<"final account details:\n";
    userAccount.display();
    return 0;
}
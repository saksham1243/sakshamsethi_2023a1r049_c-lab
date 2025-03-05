//a
//write a c++ program to demonstrate initialization of array of objects.
#include<iostream>
using namespace std;
class Book_records{
    private : int BookNo; string BookName;
    public : Book_records(int B, string N){
    BookNo = B;
    BookName = N;
}
public : void display(){
    cout<<"\n book number is: "<<BookName<<"\t Book Name is"<<BookName;
}
};
int main(){
    Book_records obj[5]={{1,"CPP"},{2,"java"},{3,"C#"},{4,"PHP"},{5,"python"}};
    int i;
    for(i=0;i<5;i++){
        obj[i].display();
    }
}
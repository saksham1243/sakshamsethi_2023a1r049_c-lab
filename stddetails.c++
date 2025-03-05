// Q5
/*wap to create a class for a student to get and print details of  a student.
following are the details of the student:
stud id, name,sem, bracnch*/
#include<iostream>
using namespace std;
class Info{
    private : string student_id, name, sem, branch;
    public : void info(){
        cout<<"enter the the student id:";
        cin>>student_id;
        cout<<"enter the name of the student:";
        cin>>name;
        cout<<"enter the sem in which student is studying:";
        cin>>sem;
        cout<<"enter the branch of the student:";
        cin>>branch;
    }
    void display(){
        cout<<"\nstudent_id:"<<student_id<< endl;
        cout<<"name:"<<name<< endl;
        cout<<"sem:"<<sem<< endl;
        cout<<"branch:"<<branch<< endl;
    }
};
int main(){
    Info obj;
    obj.info();
    return 0;
}

//program to create a class with name product_info and with a function with name
// Welcome_message, this function on execution , will display a message on screen , "Welcome to MyStore"
#include<iostream>
using namespace std;
class program_Info
{
    public : void Welcome_Message(){
        cout<<"Welcome to MyStore";
    }
};
int main()
{
    program_Info obj;
    obj.Welcome_Message();
    return 0;   
}
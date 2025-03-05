//Q4
/*wap to find the area of the circle=pi*r*r where pi=3.14(using class and object)*/
#include<iostream>
using namespace std;
class Area{
    private : float pi,r;
    public : void area()
    {
        cout<<"enter the radius of the circle";
        cin>>r;
        float pi=3.14;
        cout<<"the area of circle is="<<pi*r*r<< endl;
    }
};
int main(){
    Area obj;
    obj.area();
    return 0;
}
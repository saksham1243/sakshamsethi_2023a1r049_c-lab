//Q2
/*wap to print the area of a rectangle by creating a class named 'area' having two functions. First function named as 'setDim' takes
the length and bredth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle.
length and breadth of the rectangle are entered through keyboard.*/
#include <iostream>
using namespace std;
class area
{
    private : float length,breadth;
    public : void setDm(float l, float b){
        length = l;
        breadth = b;
    }
        float getArea(){
            return length * breadth;
    }
};
int main(){
    float len, brd;
    area rect;
    cout<<"enter length of the rectangle";
        cin>>len;
        cout<<"enter breadth of the rectangle";
        cin>>brd;
        //cout<<"area of rect is:";
        rect.setDm(len, brd);
        cout << "The area of the rectangle is: " << rect.getArea() << endl;
        return 0;
}
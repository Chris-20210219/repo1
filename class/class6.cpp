#include<iostream>
using namespace std;
class Box
{
    double width;
public:
   friend void printWidth(Box box);  //Box的友元函数
   void setWidth(double wid);

};
void Box::setWidth(double wid)
{
    width = wid;
}
void printWidth(Box box) //printWidth()不是任何类的成员
{
    cout<<"Box of width: "<<box.width<<endl;//printWidth()是Box的友元，故可以直接该类的任何成员
}
int main()
{
    Box box;
    box.setWidth(10.2);
    printWidth(box);
    return 0;
}

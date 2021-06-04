#include<iostream>
using namespace std;
class Box  //c++ 面向对象  类的关键字：class 类名：BOX
{ 
    public:    //访问修饰符,关键字确定类成员的访问属性
      double length;    //变量
      void setWidth(double wid);
      double getWidth(void); //实际操作中，私有区域定义数据，公有区域定义相关函数，以便在类的外部也可以调用这些函数
    private:
      double width;
};
double Box::getWidth(void)
{
    return width;
}
void Box::setWidth(double wid)
{
    width = wid;
}
int main () 
{
    Box box;
    box.length=1.5; // 不使用成员函数设置长度，因为length是公有的
    cout << "Length of box: "<<box.length<<"m"<<endl;
    box.setWidth(5.2);   //width 是私有的必须使用成员函数设置宽度
    cout<<"width of box: "<<box.getWidth()<<endl;
}

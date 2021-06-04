#include<iostream>
using namespace std;
class Line
{
    public:
       void setLength(double len);
       double getLength(void);
       Line();      //构造函数声明  造函数可用于为某些成员变量设置初始值，构造函数也可以带有参数Line(double len)。这样在创建对象时就会给对象赋初始值
       ~Line();     //析构函数声明
    private:
       double length;
};

//成员函数定义，包括构造函数
Line::Line(void)
{
    cout<<"Object is being created"<<endl;
}
Line::~Line(void)
{
    cout<<"Object is being deleted"<<endl;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line;
    //cout<<"line of length: "<<endl;
    line.setLength(12.0);
    cout<<"line of length: "<<line.getLength()<<endl;

}
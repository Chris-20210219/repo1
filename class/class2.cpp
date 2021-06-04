#include<iostream>
using namespace std;
class Box
{
    protected:
       double width;
};
/*成员变量或函数与私有成员十分相似，但有一点不同，protected（受保护）成员在派生类（即子类）中是可访问的*/
//SmallBox为Box的子类
class SmallBox:Box
{
    public:
       void setSmallWidth(double wid); //子类成员函声明
       double getSmallWidth(void);

};

// 子类函数定义
double SmallBox::getSmallWidth(void)
{
    return width;
}
void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}

int main()
{
    SmallBox box;
    
    box.setSmallWidth(5.5);

    cout<<"box of width: "<<box.getSmallWidth()<<endl;

    return 0;



}

 
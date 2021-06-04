#include<iostream>
using namespace std;
class Box  //c++ 面向对象  类的关键字：class 类名：BOX
{ 
    public:    //访问修饰符,关键字确定类成员的访问属性
      double length;    //变量
      double breadth;
      double heigth; 
      /*1.成员函数来访问类的成员，而不是直接访问这些类的成员
        2.成员函数可以定义在类的内部，也可以单独适用范围解析运算符::外部定义*/
      double get(void)         
      { 
          return length * breadth * heigth;
      }
      void set(double len,double bre,double hei)
      {
        length = len;
        breadth = bre;
        heigth = hei;  
      }
};    //  } 后面加;表示类结束

// 成员函数定义，使用范围解析运算符::在外部定义
/*double Box::get(void)      // 范围解析运算符 :: ,在 :: 运算符之前必须使用类名
{
    return length * breadth * heigth;
}
void Box::set(double len,double bre,double hei )
{
    length = len;
    breadth = bre;
    heigth = hei;
}*/
int main()    //主函数
{
    Box Box1; // 创建一个对象， 声明对象Box1,类型为Box
    Box Box2;
    Box Box3;
    double volume=0.0; //用于存储体积

    //公有的访问属性可以直接给变量赋值，私有的需借助set定义

    //box1 详述
    Box1.length=5.0;   //调用成员函数是在对象上使用点运算符（.），这样它就能操作与该对象相关的数据
    Box1.breadth=6.0;  //不使用成员函数设置长度，因为 length,breadth,heigth 是公有的
    Box1.heigth=2.0;

    //box1的体积
    volume = Box1.length * Box1.breadth * Box1.heigth;
    cout <<"Box1的体积： "<<volume<<endl;

    //box2 详述
    Box2.length=3.0;
    Box2.breadth=4.0;
    Box2.heigth=1.5;

    //box2 体积

    volume = Box2.length * Box2.breadth *Box2.heigth;
    cout << "Box2的体积： "<<volume <<endl;

    //box3 详述

    Box3.set(10.0,2.0,1.0);    //调用该对象的成员函数
    volume = Box3.get();        // 调用该对象的成员函数
    cout << "Box3的体积： "<<volume <<endl;

    return 0;


}
#include <iostream>
 
using namespace std;
 
/*class Line
{
   public:
      int getLength( void );
      Line( int len );             // 简单的构造函数
      Line( const Line &obj);      // 拷贝构造函数
      ~Line();                     // 析构函数
 
   private:
      int *ptr;
};
 
// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
 
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}
 
Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}
 
void display(Line obj)
{
   cout << "line 大小 : " << obj.getLength() <<endl;
}
 
// 程序的主函数
int main( )
{
   Line line(10);
 
   display(line);
 
   return 0;
}*/
int main() {
//1、指针的定义
int a = 10; //定义整型变量a
//指针定义语法： 数据类型 * 变量名 ;
int * p;
//指针变量赋值
p = &a; //指针指向变量a的地址
cout << &a << endl; //打印数据a的地址
cout << p << endl; //打印指针变量p
//2、指针的使用指针变量和普通变量的区别
/*普通变量存放的是数据,指针变量存放的是地址
指针变量可以通过" * "操作符，操作指针变量指向的内存空间，这个过程称为解引用
总结1： 我们可以通过 & 符号 获取变量的地址
总结2：利用指针可以记录地址
总结3：对指针变量解引用，可以操作指针指向的内存
7.3 指针所占内存空间
提问：指针也是种数据类型，那么这种数据类型占用多少内存空间？
示例：
//通过*操作指针变量指向的内存*/
cout << "*p = " << *p << endl;
//system("pause");
return 0;
}
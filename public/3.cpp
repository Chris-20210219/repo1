#include <iostream>
#include <stdlib.h>
using namespace std;
class BOX
{
  private:
        
    double breadth;
  public:
        double length;
        double heigth;
        
        //成员函数声明
        
        void setLength(double len);
        void setHeigth(double hei);
        void setBreadth(double bre);
        double getVolume(void);
        double getBreadth(void);
       

};

   //成员函数定义
 double BOX::getVolume(void)

{
   return length * breadth * heigth;
}
double BOX::getBreadth(void)
{
    return breadth;

}
void BOX::setLength(double len)
{
    length = len;
}
void BOX::setBreadth(double bre)
{
   breadth = bre;
}

void BOX::setHeigth(double hei)
{
    heigth = hei;
}

int main( )
{
    BOX box;
    double volume=0.0;

    box.setBreadth(16.0);
   cout << "breadth of box= "<< box.getBreadth()<<endl;
    box.length=10.0;
    box.heigth=11.0;
    volume=box.getVolume();


    cout<< "volume of box= "<<volume<<endl;

    return 0;

    system("pause");



}

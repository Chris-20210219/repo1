#include<iostream>
#include<stdlib.h>
using namespace std;
class BOX
{
  //private:
        
    /* data */
  public:
        double length;
        double heigth;
        double breadth;
        //成员函数声明
        void setLength(double len);
        void setHeigth(double hei);
        void setBreadth(double bre);
        double getVolume(void);

};

   //成员函数定义
 double BOX::getVolume(void)

{
   return length*breadth*heigth;
}
void BOX::setLength(double len)
{
    length=len;
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
    box.breadth=16.0;
    box.length=10.0;
    box.heigth=5.0;
    volume =box.getVolume();

    cout<< "volume of box= "<<volume<<endl;

    system("pause");



}

#include <iostream>
#include <iomanip>
#define PI 3.1415
using namespace std;
class Figure
{
    private : double radius;
    public :
        Figure(double r){ radius = r; }
        double get_r(){return radius;}
    virtual double area() = 0;
    virtual double volume() = 0;
};
class Sphere : public Figure
{
    public:
    Sphere(double r):Figure(r){}
    double area(){return 4*get_r()*get_r()*PI;}
    double volume(){return 4*get_r()*get_r()*get_r()*PI/3;}
};
class Column : public Figure
{
    private :  double high;
    public:
        Column(double r,double h):Figure(r){ high = h;}
        double get_high(){return high;}
    double area(){return (2*PI*get_r()*get_r()+2*get_r()*PI*get_high());}
    double volume(){return get_r()*get_r()*PI*get_high();}
};
void fun(Figure & a)
{
    cout<<fixed<<setprecision(3)<<a.area()<<"     "<<a.volume()<<endl;
}
int main()
{
    Sphere m(2);
    cout<<"球体的表面积和体积分别为："<<endl;
    fun(m);
    Column n(2,3);
    cout<<"圆柱体的表面积和体积分别为："<<endl;
    fun(n);
    return 0;
}


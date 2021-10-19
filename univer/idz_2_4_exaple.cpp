#include <iostream>
#include <math.h>
#include <cstdlib>
class rectangle
{
 double a, b;
public:
 rectangle (double x=0, double y=0);
 rectangle (rectangle& r);
 ~rectangle ();
 void set_sides (double x, double y) ;
 double get_side_a();
 double get_side_b();
 double P();
 double S();
 double R();
 bool operator== (rectangle r);
 rectangle operator= (rectangle r);
 friend std::ostream &operator << (std::ostream &stream, rectangle &r);
 friend std::istream &operator >> (std::istream &stream, rectangle &r);
};
void menu(void);
main()
{
 menu();
 system("pause");
 return 0;
}
void menu()
{
 using namespace std;
 rectangle r1(10,7), r2=r1, r3;
 char menu;
 do
 {
 getchar();
 system("cls");
 cout<<"r1="<<r1<<"\t\t"<<"r2="<<r2<<"\t\t"<<"r3="<<r3<<"\n\n";
 cout<<"1 - Assignement r3 r1\n";
 cout<<"2 - Input r2\n";
 cout<<"3 - Input r3\n";
 cout<<"4 - Set side r1 5x5\n";
 cout<<"5 - Get side r2\n";
 cout<<"6 - Perimeter\n";
 cout<<"7 - Area\n";
 cout<<"8 - Radius\n";
 cout<<"9 - ==\n";
 cout<<"0 - Exit\n";
 menu=getchar(); getchar();
 switch(menu)
 {
 case '1': r3=r1; break;
 case '2': cin>>r2; break;
 case '3': cin>>r3; break;
 case '4': r1.set_sides(5,5); break;
 case '5': cout<<"a="<<r2.get_side_a()<<"\tb="<<r2.get_side_b()<<'\n';
 break;
 case '6': cout<<"P(r1)="<<r1.P()<<"\nP(r2)="<<r2.P();
 cout<<"\nP(r3)="<<r3.P()<<"\n";
 break;
 case '7': cout<<"S(r1)="<<r1.S()<<"\nS(r2)="<<r2.S();
 cout<<"\nS(r3)="<<r3.S()<<"\n";
 break;
 case '8': cout<<"R(r1)="<<r1.R()<<"\nR(r2)="<<r2.R();
 cout<<"\nR(r3)="<<r3.R()<<"\n";
 break;
 case '9': cout<<"r1=r2 - "<<(r1==r2)<<"\nr3=r2 - "<<(r3==r2);
 cout<<"\nr1=r3 - "<<(r1==r3)<<"\nr1=r1 - "<<(r1==r1)<<"\n";
 }
 }
 while (menu!='0');
}
rectangle::rectangle (double x, double y): a(x), b(y)
{
 if (a<0 || b<0) b=a=0;
 std::cout << "Constructor\n";
}
rectangle::rectangle (rectangle& r): a(r.a), b(r.b)
{
 std::cout << "Copy constructor\n";
}
rectangle::~rectangle ()
{
 std::cout << "destructor\n";
}
void rectangle::set_sides (double x, double y)
{
 a=x; b=y;
 if (a<0 || b<0) b=a=0;
 std::cout << "set_sides\n";
}
double rectangle::get_side_a()
{
 std::cout << "get_side_a\n";
 return a;
}
double rectangle::get_side_b()
{
 std::cout << "get_side_b\n";
 return b;
}
double rectangle::P()
{
 std::cout << "perimeter\n";
 return 2*(a+b);
}
double rectangle::S()
{
 std::cout << "area\n";
 return a*b;
}
double rectangle::R()
{
 std::cout << "radius\n";
 return sqrt(a*a+b*b)/2;
}
bool rectangle::operator== (rectangle r)
{
 return a==r.a && b==r.b || a==r.b && b==r.a;
}
rectangle rectangle::operator= (rectangle r)
{
 a=r.a; b=r.b;
 std::cout << "assignment\n";
}
std::ostream &operator << (std::ostream &stream, rectangle &r)
{
 stream << "(" << r.a << " x " << r.b << ")";
 return stream;
}
std::istream &operator >> (std::istream &stream, rectangle &r)
{
 std::cout << "a=";
 stream >> r.a;
 std::cout << "b=";
 stream >> r.b;
 return stream;
}

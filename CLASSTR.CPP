#include <iostream.h>
#include <conio.h>

class rectangle
{
private:
int len, br;

public:
rectangle(int l,int b){
len=l;
br=b;
}
void getdata()
{
cout<<endl<<"Enter the length and breadth";
cin>>len>>br;
}
void setdata(int l, int b)
{
len=l;
br=b;
}
void displaydata()
{
cout<<endl<<"length="<<len;
cout<<endl<<"breadth="<<br;
}
void areaperi()
{
int a,p;
a=len*br;
p=2*(len+br);
cout<<endl<<"area="<<a;
cout<<endl<<"perimeter="<<p<<endl;
}
};
int main()
{
clrscr();
rectangle r1(1,2),r2(2,2),r3(2,4);

r1.displaydata();
r2.displaydata();
r3.displaydata();

r1.setdata(40,50);
r1.displaydata();
r1.areaperi();

r2.setdata(8,9);
r2.displaydata();
r2.areaperi();

r3.getdata();
r3.displaydata();
r3.areaperi();

getch();
return 0;
}
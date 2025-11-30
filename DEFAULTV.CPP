#include <iostream.h>
#include <conio.h>

int sum(int n1, int n2, int n3=0, int n4=0);
int main()
{
clrscr();
int s1,s2,s3;
s1=sum(10,20);
s2=sum(10,20,30);
s3=sum(10,20,30,40);
cout<<s1<<endl<<s2<<endl<<s3<<endl;
getch();
return 0;
}

int sum(int n1, int n2, int n3, int n4)
{
return (n1+n2+n3+n4);
}

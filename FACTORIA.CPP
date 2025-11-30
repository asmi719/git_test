#include <iostream.h>
#include <conio.h>

int factorial(int n){
if(n==0||n==1)
return 1;
else
return n*factorial(n-1);
}

void main(){
int num;
clrscr();
	cout <<"Enter the number: ";
	cin >>num;

	if(num<0)
	cout <<"The number is negative and do not exist."<<endl;
	else
	cout <<"The positive number is "<<num<<" and its factorial is "<< factorial(num)<<endl;
getch();
}
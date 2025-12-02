#include <iostream.h>
#include <conio.h>

void calculate(int num1,int num2,int operation);

void main()
{
clrscr();
	char op[20];
	int operation;
	int num1, num2;


	cout <<"Enter the first number: ";
	cin >>num1;
	cout <<"Enter the second number: ";
	cin >>num2;
	cout <<"Press" <<endl;
	cout <<"1.addition" <<endl;
	cout <<"2.substract" <<endl;
	cout <<"3.multiply" <<endl;
	cout <<"4.divide" <<endl;
	cin >>operation;

	calculate(num1,num2,operation);

getch();
}

void calculate(int num1, int num2, int operation){
if(operation==1)
{
	cout <<"Result: ";
	cout <<num1+num2;
}
else if(operation==2)
{
	cout <<"Result: ";
	cout <<num1-num2;
}
else if(operation==3)
{
	cout <<"Result: ";
	cout <<num1*num2;
}
else if(operation==4)
{
	cout <<"Result: ";
	if(num2==0){
	cout <<"undefined.";
	}
	else{
	cout <<num1/num2;
	}
}
else{
	cout <<"Invalid input.";
}
}



















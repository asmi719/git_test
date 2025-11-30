#include <stdio.h>
#include <conio.h>
int main(int argc,char **argv)
{
	int num;

	clrscr();

	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0){
	printf("%d is a even number.");
	}
	else{
	printf("%d is a odd number.");
	}

	getch();

	return 0;
}
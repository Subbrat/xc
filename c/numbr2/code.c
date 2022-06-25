#include<stdio.h>
int main ()
{
	int a,b,c,d;
	float sum,sub,mul,div;
	printf("Enter first number	");
	scanf("%d",&a);
	printf("Enter second number	");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a%b;
	printf("\nThe summation is:	%f",sum);
	printf("\nThe subtraction is:	%f",sub);
	printf("\nThe multiple is:	%f",mul);
	printf("\nThe division is:	%f",div);
	
		if(a>b)
		{
			printf("\nFirst number is grater than second number");
			
		}
		else 
		{
			printf("\nSecond number is grater than first number");
		}
	printf("\n\nEnter 1 for another calculation !");
	scanf("%d",&a);
	if (a==1)
	{
		main ();
	}
	return 0;
}
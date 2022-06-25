#include<stdio.h>
int main ()
{	
	int a,b,c;
	printf("Enter first number			");
	scanf("%d",&a);
	printf("Enter second number			");
	scanf("%d",&b);
	printf("Enter third number			");
	scanf("%d",&c);
	if(a>b)
		{
			if(a>c)
			{
				printf("the grater number is:%d		",a);
			}	
			
		}
	else 
	{
		if (b>c)
		{
			printf("the grater number is:%d		",b);
		}
		else{
			printf("the grater number is:%d		",c);
		}
	}
	printf("\n\n\nEnter 1 to Check another !\nOr 0 to exit !");
	scanf("%d",&a);
	if (a==0)
	{
		return 0;
	}
	if(a==1)
	{
		main();
	}
}
#include<stdio.h>
int main ()
{
	int a;
	printf("\n\nEnter any number:	");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("\nYou have entered number:	%d",a);
		printf("\nIt is an even number !");
	}
	else
	{
		printf("\nYou have entered number:	%d",a);
		printf("\nIt is an odd number !");
	}

		printf("\nEnter 1 to test another !\nElse any other to exit !	");
		scanf("%d",&a);

		if (a==1)
		{
			main ();
		}
		else
		{
			return 0;
		}
}
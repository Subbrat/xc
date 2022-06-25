#include<stdio.h>
int main ()
{
	int a,b,c,d;
	a=123;
	b=000;
	scanf("%d",&c);
	scanf("%d",&d);
	if (c==a || d==b)
	{
		printf("logged in");
	}

	else
	{
		printf("denied");

	}
	return 0;
}
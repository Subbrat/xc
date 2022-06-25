#include <stdio.h>
int main ()
{
	long int n,rev,rem, a;
	rev=0;
	printf("enter a number:	");
	scanf("%d",&n);
	
	while (n!=0)
	{
			rem=n%10;
			rev=rev*10+rem;
			n/=10;
			
	}
	printf("\nreversed number:	%d",rev);
	printf("\nenter 1 to enter another number or 0 to exit	");
	scanf("%d",&a);
	if ( a == 1 ){
	main ();
	}

	else if( a==0 )
	{
	return 0;
	}
	else 
	{
	return 0;
	}	
	
}
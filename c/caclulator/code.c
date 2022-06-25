#include<stdio.h>
int main ()
{
	char op;
	float n1,n2,n3;
	printf("enter first operand:	");
	scanf("%f",&n1);
	printf("enter any operator:	");
	scanf("%s",&op);
	printf("enter second operand:	");
	scanf("%f",&n2);
	switch (op)
	{
		case '+':
		printf("\nResult=%f",n1+n2);
		break;

		case '-':
		printf("\nResult=%f",n1-n2);
		break;

		case '*':
		printf("\nResult=%f",n1*n2);
		break ;

		case '/':
		printf("\nResult=%f",n1/n2);
		break;

	default:
	printf("\ninvalid input !\nCalculation terminated E ");
	break ;

	}
	puts("\n\nenter 1 for another calculation");
	scanf("%f",&n1);
	if (n1==1)
	{
		main ();
	}
	return 0;




}
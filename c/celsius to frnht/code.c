#include <stdio.h>
int main()
{
	float frh,cel;
	printf("CELSIUS TO FARENHEIT CONVERTER \n\n\n");
	printf("INPUT TEMPERATURE IN CELSIUS:	");
	scanf("%f",&cel);
	frh=cel*9.0/5.0+32;
	printf("\nTHE TEMP IN CELSIUS IS:	%f",cel);
	printf("\nTHE TEMP IN FARENHEIT IS:	%f",frh);
		printf("\n\nEnter 1 for another !");
	scanf("%f",&frh);
	if (frh==1)
	{
		main ();
	}
	return 0;
}
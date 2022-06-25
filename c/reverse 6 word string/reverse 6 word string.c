#include <stdio.h>  
#include <string.h>  
int main()  
{  
int a=2;
   	char str1[40];
	char str2[40];
	char str3[40];
	char str4[40];
	char str5[40];
	char str6[40];
    printf (" \nEnter a string	");  
    scanf ("%s", str1);
    scanf ("%s", str2);  
    scanf ("%s", str3);
    scanf ("%s", str4);
    scanf ("%s", str5);
    scanf ("%s", str6);


      
   	printf ("\n%s ", strrev(str6));
	printf ("%s ", strrev(str5));
    	printf ("%s ", strrev(str4));
    	printf ("%s ", strrev(str3));
    	printf ("%s ", strrev(str2));
    	printf ("%s ", strrev(str1));  

    scanf ("%d",&a);
	if ( a == 1)
    {
        main ();
    }
        else
        {
            return 0;
            
        }
}  
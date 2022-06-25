#include <stdio.h>
int main()
{
    /* syntax
    for ( value initialisation; condition check wrt initialisation; increment/ decrement wrt initialisation )
        {
            statements for execution4
            
            
            for 1 value change :: 1 loop 
                    until the condition check becomes false ! >> loop exit !!!
            
            
            
            
            
            ?? for ++ and or -- one value +/ -
                        after var ie. X++ :: first print then value change 
                        before var ie. ++X :: first value change then print 
                        
                        
        }
    
    
    */
    
    for ( int a = 2 ; a >= 0 ; a-- ){
        printf("\n%d",a);
    }
    
    return 0;
}

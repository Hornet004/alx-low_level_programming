#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    
    for(i = 48; i < 58; i++)
    {
        for(n = 49; n < 58; n++)
        {
            putchar(i);
            putchar(n);
            if((i == 56) && (n == 57))
            {
                exit(0);
            }
            putchar(',');
            putchar(' ');
            
            
            
        }
        /**
         * 
            * for(j = 0; j <= 9; j++)
            *
            *k = (j += i)
            *putchar(k);
        * 
        **/
    }
    putchar('\n');
    return 0;
}

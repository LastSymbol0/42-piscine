#include<stdio.h>

void ft_putchar(char c)
{
        putchar(c);
}
int main()
{

	int i, j, k;

    	for (i = 48; i <= 57; i++)
    	{
       		 for (j = i+1; j <= 57; j++)
       		{
            		for (k = j+1; k <= 57; k++)
	    		{
				if( k != 50 )
				{
					 ft_putchar(44);
				}
                		ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);

            		}
        	}
	}


	return 0;
}


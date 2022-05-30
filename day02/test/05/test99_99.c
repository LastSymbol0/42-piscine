#include<stdio.h>

void ft_putchar(char c)
{
        putchar(c);
}
int main()
{

        int i, j, k, h;

        for (i = 48; i <= 57; i++)
        {
                 for (j = 48; j <= 57; j++)
                {
                        for (k = 48; k <= 57; k++)
                        {
         			 for (h = 48; h <= 57; h++)
                        	{
					if(i != k && j != h)
					{
						if( i < k )
						{	
                               			ft_putchar(44);
                               			ft_putchar(32);
            	                   		ft_putchar(i);
						ft_putchar(j);
                        	               	ft_putchar(32);
                                	       	ft_putchar(k);
						ft_putchar(h);
						}
					}

                        	}


                        }
                }
        }

        return 0;
}


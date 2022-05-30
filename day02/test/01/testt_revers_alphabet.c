#include<stdio.h>

void ft_putchar(char c)
{


	putchar(c);


}

int main()
{
	int x = 'z';
	while( x >= 'a')
	{
       		ft_putchar(x);
        	x--;
	}

return 0;
}

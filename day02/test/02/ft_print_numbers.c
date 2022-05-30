#include<stdio.h>

void ft_putchar(char c)
{

	putchar(c);

}
int main()
{	
	int x = '0';
	while( x <= '9')
	{
        	ft_putchar(x);
        	x++;
	}
return 0;
}

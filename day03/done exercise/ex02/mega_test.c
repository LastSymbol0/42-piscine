#include<stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int a = 32;
	int b = 44;

	printf("%i %i \n", a, b);


	ft_swap(&a, &b);

	printf("%i %i \n", a, b);

	return 0;
}

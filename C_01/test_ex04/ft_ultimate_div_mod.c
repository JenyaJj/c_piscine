#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b; // temp = 15 / 3 = 5
	*b = *a % *b; // *b = 15 mod 3 = 0
	*a = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
}*/

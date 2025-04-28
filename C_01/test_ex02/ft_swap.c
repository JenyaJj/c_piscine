#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a; //temp = 5
	*a = *b; //a = 1
	*b = temp;
//	printf("%d%d", *a, *b);
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 1;
	ft_swap(&a, &b);
	printf("%d%d", a, b);
	return (0);
}*/

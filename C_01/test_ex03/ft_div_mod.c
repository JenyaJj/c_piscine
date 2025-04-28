#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d/r%d/r%d/r%d", a, b, div, mod);
	return (0);

}*/

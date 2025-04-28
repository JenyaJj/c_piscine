#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = size - 1;
	j = 0;
	while (i >= (size/2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j++;
		i--;
	}
	for (i = 0; i < size; i++) 
	{
		printf("%d ", tab[i]);
	}
    printf("\n");

//printf("%d%d%d%d", array);
}

int	main(void)
{
	int	array[] = {0, 1, 2, 3, 5};
	int	size;

	//array = {0, 1, 2, 3};
	size = 5;
	ft_rev_int_tab(array, size);
	return (0);
}


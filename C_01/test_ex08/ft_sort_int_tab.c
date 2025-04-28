#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	y;

	x = 0;
	y = 0;
	size--;
	while (x < size)
	{
		while (y < size)
		{
			if (tab[y] > tab[y+1])
			{
				temp = tab[y];
				tab[y] = tab[y+1];
				tab[y+1] = temp;
			}
			y++;
		}
		y = 0;
		x++;
	}
}

int	main(void)
{
	int	array[] = {2, 3, -10, -4};
	int	size = 4;
	int	i;

	ft_sort_int_tab(array, size);
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return (0);


}

void	ft_putchar(char z);

void	x_1(int x, int y)
{
	int	count_y;

	count_y = 1;
	while (count_y <= y)
	{
		if (count_y == 1)
			ft_putchar('/');
		else if (count_y < y)
			ft_putchar('*');
		else
			ft_putchar('\\');
		count_y++;
		ft_putchar('\n');
	}	
//	count_y++;
}

void	y_1(int x, int y)
{
        int     count_x;

        count_x = 1;
        while (count_x <= x)
        {
                if (count_x == 1)
                        ft_putchar('/');
                else if (count_x < x)
                        ft_putchar('*');
                else
                        ft_putchar('\\');
		count_x++;
        }
      //  count_x++;
}

void	rush(int x, int y)
{ 
	int	count_x;
	int	count_y;

	count_x = 1;
	count_y = 1;


	if (x == 1)
		x_1(x, y);
	else if (y == 1)
		y_1(x, y);
	else
		while (count_y <= y)
		{
			while (count_x <= x)
			{
				if (count_x == 1 && count_y == 1 || count_x == x && count_y == y)
					ft_putchar('/');
				else if (count_x == x && count_y == 1 || count_x == 1 && count_y == y )
					ft_putchar('\\');
				else if (count_x < x && count_y < y && count_x!= 1)
				       ft_putchar(' ');
				else
					ft_putchar('*');
			count_x++;	
			}
			count_y++;
			ft_putchar('\n');
			count_x = 1;
		}
	//count_y++;
}


/*


				if ((count_x == 1 && count_y == 1) || (count_x == x && count_y == y && y != 1 && x != 1))
		//	if ((count_x == count_y == 1 || 
				ft_putchar('/');
			else if ((count_x == x && count_y == 1) || (count_x == 1 && count_y == y))
				ft_putchar('\\');
			else if ( ( (count_x != 1 || count_x != x) && (count_y == 1 || count_y == y)) || ((count_x == 1 || count_x == x) && (count_y != 1 || count_y != y)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			count_x++;
		}
		ft_putchar('\n');
		count_y++;
		count_x = 1;
	}*/
	

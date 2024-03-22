#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
int main(void)
{
	int nb = 2;
	int power = 3;
	int	n = ft_recursive_power(nb, power);
	printf("%i", n);
}
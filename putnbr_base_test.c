#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	putnbr_base(long int nbr, char *base, int base_size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	// base binaria
	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
	putnbr_base(47, "01", 2);
	ft_putchar('\n');
	printf("Esperado: 101111\n");
	putnbr_base(47, "\\/", 2);
	ft_putchar('\n');
	printf("Esperado: /\\////\n");
	// base 5
	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
	putnbr_base(36, "01345", 5);
	ft_putchar('\n');
	printf("Esperado: 131\n");
	putnbr_base(36, "sd2ek", 5);
	ft_putchar('\n');
	printf("Esperado: d2d\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
	putnbr_base(INT_MIN, "0123456789", 10);
	ft_putchar('\n');
	printf("Esperado: -2147483648\n");
	putnbr_base(INT_MIN, ",.;\\][{}@#", 10);
	ft_putchar('\n');
	printf("Esperado: -;.]}]@\\{]@\n");
	// base 16
	printf("Bases 16, n = -65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
	putnbr_base(-65040, "0123456789ABCDEF", 16);
	ft_putchar('\n');
	printf("Esperado: -FE10\n");
	putnbr_base(-65040, "jdlskmnMKZxVuzfa", 16);
	ft_putchar('\n');
	printf("Esperado: -afdj\n");
	return (0);
}
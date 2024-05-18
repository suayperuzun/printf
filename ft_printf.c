/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:58:58 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/18 16:05:44 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdbool.h>
#include <unistd.h>

int	ft_putlstr_fd(char *s, int fd)
{
	if (s == NULL)
		return (write(1, "(null)", 6));
	else
		return (write(fd, s, ft_strlen(s)));
}

int	ft_putptr(void *ptr)
{
	uintptr_t	val;
	int			i;
	int			digit;
	bool		leading;
	int			count;

	leading = true;
	count = 2;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	val = (uintptr_t)ptr;
	ft_putstr_fd("0x", 1);
	i = 1;
	while (i < 16)
	{
		digit = (val >> (60 - 4 * i)) & 0xF;
		if (digit != 0)
			leading = false;
		if (!leading || i == 0)
			count += ft_putnbr_base(digit, "0123456789abcdef");
		i++;
	}
	return (count);
}

int	ft_putlnbr_fd(int n, int fd, char format)
{
	int		count;
	long	nbrx;

	if (n < 0 && format == 'u')
		nbrx = 4294967296 + n;
	else
		nbrx = n;
	count = 0;
	if (nbrx < 0)
	{
		if (nbrx == -2147483648)
			return (write(fd, "-2147483648", 11));
		nbrx = -nbrx;
		ft_putchar_fd('-', fd);
		count++;
	}
	if (nbrx >= 10)
		count += ft_putlnbr_fd(nbrx / 10, fd, format);
	ft_putchar_fd(nbrx % 10 + '0', fd);
	count++;
	return (count);
}

int	ft_print_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1), 1);
	else if (format == 's')
		return (ft_putlstr_fd(va_arg(args, char *), 1));
	else if (format == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (format == 'd')
		return (ft_putlnbr_fd(va_arg(args, int), 1, format));
	else if (format == 'i')
		return (ft_putlnbr_fd(va_arg(args, int), 1, format));
	else if (format == 'u')
		return (ft_putlnbr_fd(va_arg(args, int), 1, format));
	else if (format == 'x')
		return (ft_putnbr_xx(va_arg(args, int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_xx(va_arg(args, int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar_fd('%', 1), 1);
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (-1);
			count += ft_print_format(*(str), args);
		}
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (count);
}

// int ft_printf(const char *str, ...)
// {
//     va_list args;
//     int count = 0;
//     int formatted_output_length;
//     bool errorflag = false;

//     if (str == NULL)
//         return (-1);

//     va_start(args, str);

//     while (*str != '\0')
//     {
//         if (*str == '%')
//         {
//             str++;
//             if (*str == '\0') {  // Check if the '%' is the last character
//                 errorflag = true;
//                 break ;
//             }
//             formatted_output_length = ft_print_format(*str, args);
//             if (formatted_output_length == -1)
//                 errorflag = true;
//             else
//                 count += formatted_output_length;
//         }
//         else
//         {
//             if (write(1, str, 1) == -1) {
//                 errorflag = true;
//                 break ;
//             }
//             count++;
//         }
//         str++;
//     }

//     va_end(args);

//     if (errorflag)
//         return (-1);

//     return (count);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int count;
// 	char c = -2147483840;
// 	//char c = 50;
// 	char *s = NULL;
// 	char *p = &c;
// 	int d = -2147483648;
// 	int i = 012;
// 	int u = 99;
// 	int x = 160;
// 	int X = 16702650;

// 	count = ft_printf("Here is 21 characters\n");
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%c\n", c);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%s\n", s);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%p\n", (void *)p);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%d\n", d);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%i\n", i);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%u\n", u);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%x\n", x);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%X\n", X);
// 	ft_printf("Output ft_printf: %d\n", count);

// 	count = ft_printf("%%\n");
// 	ft_printf("Output ft_printf: %d\n", count);

// 	//////////////////////////////////////////////////
// 	printf("\n\n");
// 	count = printf("Here is 21 characters\n");
// 	printf("Output printf: %d\n", count);

// 	count = printf("%c\n", c);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%s\n", s);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%p\n", (void *)p);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%d\n", d);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%i\n", i);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%u\n", u);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%x\n", x);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%X\n", X);
// 	printf("Output printf: %d\n", count);

// 	count = printf("%%\n");
// 	printf("Output printf: %d\n", count);

// 	return (0);
// }
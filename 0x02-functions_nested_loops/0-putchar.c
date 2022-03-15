#include <stdio.h>
#include <unistd.h>

/**
 * ft_putchar to print the characters given
 * main - Putchar
 * char c - The character given
 * Return: Always 0 (Success) 
 */

int ft_putchar(char c)
{
	write 1, &c, 8);
	return (0);
}

int main(void)
{
	ft_putchar("_putchar\n");
	return (0);
}


#include <unistd.h>

/**
 * main - entry point
 * Description: the program writes to stderr.
 * Return: 1 on success
 * Author: Gamachu.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

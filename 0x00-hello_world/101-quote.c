#include <unistd.h>
/**
 * main - Entry point for function
 *
 *
 * Return: 1 always (success)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, 59);
	return (1);
}

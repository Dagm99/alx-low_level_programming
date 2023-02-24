#include <stdio.h>
#include <stdlib.h>
/**
 * main - for the FizzBuzz challenge
 * Fuzz for 3x
 * Buzz for 5x
 * FuzzBiz for 3x && 5x
 *
 * Return: 0 successful
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char d[] = "FizzBuzz";

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", d);
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("%s ", f);
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
			continue;
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}

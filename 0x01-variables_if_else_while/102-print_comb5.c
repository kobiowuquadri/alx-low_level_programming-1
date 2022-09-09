#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int unit;
	int t;
	int u;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (units = '0'; units <= '9'; units++)
		{
		 	for (t = tens; t <= '9'; t++) /*print second of pair*/
			{
				for (u = units + 1; u <= '9'; u++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(u);

					if (!((tens == '9' && unit == '8') &&
					      (t == '9' && u == '9')))
					{
						putchar(',');  /* inserting commas */
						putchar(' ');
					} /* end of IF statement */
				}  /* end of last FOR loop */
				u = '0';  /* initialization of u in the second to last loop */
			}  /* end of  second to last loop */
		}   /* end of the second loop */
	}    /* end of  the nested loop */
	putchar('\n');

	return (0);
} /* end of  main */
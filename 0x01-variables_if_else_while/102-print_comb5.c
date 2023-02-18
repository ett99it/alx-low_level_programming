#include <stdio.h>


int main(void)
{
int i, x, y, z, op1, op2;

i = x = y = z = 48;
while (z < 58)
{
	y = 48;
	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			i = 48;
			while (i < 58)
			{
				op1 = (z * 10) + y;
				op2 = (x * 10) + i;
				if (op1 < op2)
				{
					putchar(z);
					putchar(y);
					putchar(' ');
					putchar(x);
					putchar(i);
					if (z == 57 && y == 56 && x == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			x++;
		}
		y++;
	}
	z++;
}
putchar('\n');
return (0);
}

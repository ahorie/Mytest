#include <stdio.h>

int main()
{
	int x;
	int n = 10;
	int z;

	n++;
	++n;

	x = n++;
	z = ++n;

	printf("x is %i.\n", x);
	printf("z is %i.\n", z);

	return 0;
}

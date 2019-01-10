#include <stdio.h>
#include <math.h>

int main()
{
	int currentYear;
	printf("What is the current year?");
	scanf("%d", &currentYear);

	if (currentYear % 400 == 0)
	}
		printf("%d is a leap year.\n", currentYear);

	return 0;
}


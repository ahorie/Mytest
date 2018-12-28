#include <stdio.h>

int main()
{	
	char February;
	printf("If this year is leap year, enter 1.  "
			"If not, enter any integer: ");
	scanf("%c", &February);

	int days = (February == '1') ? 29 : 28;
	printf("Number of days in February = %d\n", days);

	return 0;
}

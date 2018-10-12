
#include <stdio.h>

int main()
{
	int i, j;
	printf("   |");
	for (i = 1; i <= 9; i++)
		printf("%3d", i);

	printf("\n - + --------------------------- \n");
	for (i = 1; i <= 9; i++) {
		printf("%2d |", i);
		for (j = 1; j <= 9; j++)
			printf("%3d", i * j);
		putchar('\n');
	}
	system("pause");
	return 0;

}
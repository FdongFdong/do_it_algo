#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	int num;
	int h, n;
	int i, j;
	printf("직사각형을 출력합니다\n");
	printf("높이 : ");
	scanf("%d", &h);
	printf("너비 : ");
	scanf("%d", &n);
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("*");
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}
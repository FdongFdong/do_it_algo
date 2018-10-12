#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	int num;
	int i, j;
	printf("사각형을 출력합니다\n");
	printf("입력할 수 : ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("*");
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}
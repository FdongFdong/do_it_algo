#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	int num;
	int i, j;
	printf("�簢���� ����մϴ�\n");
	printf("�Է��� �� : ");
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
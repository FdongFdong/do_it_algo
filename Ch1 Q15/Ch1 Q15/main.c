#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	int num;
	int h, n;
	int i, j;
	printf("���簢���� ����մϴ�\n");
	printf("���� : ");
	scanf("%d", &h);
	printf("�ʺ� : ");
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
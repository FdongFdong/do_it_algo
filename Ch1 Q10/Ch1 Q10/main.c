//�� ���� A,B�� ������ �Է��ϰ� B -A�� ����ϴ� ���α׷��� �ۼ��ϼ���
//��, ���� B�� �Է��� ���� A ���ϸ� B�� ���� �ٽ� �Է��ϼ���
#include <stdio.h>

int main()
{
	int a, b;
	printf("a�� �� :");
	scanf("%d", &a);

	while (1)
	{
		printf("b�� �� :");
		scanf("%d", &b);
		if (a < b) {
			break;
		}
		printf("a ���� ū ���� �Է��ϼ��� ");
	}
	printf("b - a �� %d �Դϴ�.", b - a);
	system("pause");
	return 0;
}
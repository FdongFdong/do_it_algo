//�� ���� A,B�� ������ �Է��ϰ� B -A�� ����ϴ� ���α׷��� �ۼ��ϼ���
//��, ���� B�� �Է��� ���� A ���ϸ� B�� ���� �ٽ� �Է��ϼ���
#include <stdio.h>

int main()
{
	int n;
	int digits = 0; /* �ڸ��� */

	do {
		printf("���� ���� : ");
		scanf("%d", &n);
	} while (n <= 0);

	while (n > 0) {
		n /= 10; /* x�� 10���� �����ϴ�. */
		digits++;
	}

	printf("�� ���� %d �ڸ��Դϴ�.\n", digits);

	system("pause");
	return 0;
}
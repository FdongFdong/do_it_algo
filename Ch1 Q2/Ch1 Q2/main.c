//�� ���� �ּڰ��� ���ϴ� min3 �Լ�
#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	if (min>b) min = b;
	if (min>c) min = c;
	return min;
}
int main()
{
	printf("min3(2, 3, 1) = %d", min3(2, 3, 1));
	system("pause");
	return 0;
}

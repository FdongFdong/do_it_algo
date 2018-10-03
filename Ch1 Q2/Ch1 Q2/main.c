//세 값의 최솟값을 구하는 min3 함수
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

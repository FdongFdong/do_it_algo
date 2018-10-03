//네 값의 최솟값을 구하는 min4 함수
#include <stdio.h>

int min4(int a, int b, int c, int d)
{
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	if (min > d)min = d;
	return min;
}
int main()
{
	printf("min4(2, 3, 1,4) = %d", min4(2, 3, 1, 4));
	system("pause");
	return 0;
}

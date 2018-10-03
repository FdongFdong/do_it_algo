#include <stdio.h>
int max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max)max = d;
	return max;
}
int main()
{
	printf("max4(1,20,7,4) = %d",max4(1,20,7,4));
	system("pause");
	return 0;
}
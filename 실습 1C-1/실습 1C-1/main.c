#include <stdio.h>
int mid3(int a, int b, int c)
{
	if (a >= b)
	{
		if (b >= c)
		{
			return b;
		}
		else if (a >= c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else if (a > c)
	{
		return a;
	}
	else if (b > c)
	{
		return c;
	}
	else
	{
		return b;
	}
}
int main()
{
	int a = 2;
	int b = 3;
	int c = 1;

	printf("%d ",mid3(a, b, c));
	system("pause");
	return 0;
}
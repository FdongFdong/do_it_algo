//두 변수 A,B에 정수를 입력하고 B -A를 출력하는 프로그램을 작성하세요
//단, 변수 B에 입력한 값이 A 이하면 B의 값을 다시 입력하세요
#include <stdio.h>

int main()
{
	int n;
	int digits = 0; /* 자릿수 */

	do {
		printf("양의 정수 : ");
		scanf("%d", &n);
	} while (n <= 0);

	while (n > 0) {
		n /= 10; /* x를 10으로 나눕니다. */
		digits++;
	}

	printf("이 수는 %d 자리입니다.\n", digits);

	system("pause");
	return 0;
}
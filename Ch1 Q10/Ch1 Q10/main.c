//두 변수 A,B에 정수를 입력하고 B -A를 출력하는 프로그램을 작성하세요
//단, 변수 B에 입력한 값이 A 이하면 B의 값을 다시 입력하세요
#include <stdio.h>

int main()
{
	int a, b;
	printf("a의 값 :");
	scanf("%d", &a);

	while (1)
	{
		printf("b의 값 :");
		scanf("%d", &b);
		if (a < b) {
			break;
		}
		printf("a 보다 큰 값을 입력하세요 ");
	}
	printf("b - a 는 %d 입니다.", b - a);
	system("pause");
	return 0;
}
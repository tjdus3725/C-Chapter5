#include <stdio.h>

int main(void)
{
	//숫자 두개 준비, 0으로 초기화
	int num = 0;
	int num1 = 0;

	//숫자입력 받고
	printf("숫자 1입력: ");
	scanf_s("%d", &num);
	printf("숫자 2입력: ");
	scanf_s("%d", &num1);

	//사칙연산 각각 출력
	printf("덧셈 출력: %d\n", num + num1);
	printf("뺄셈 출력: %d\n", num - num1);
	printf("곱셈 출력: %d\n", num * num1);
	printf("나눗셈 출력: %d\n", num / num1);
	return 0;
}
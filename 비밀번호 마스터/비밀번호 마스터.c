#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void intro(void);
void ending(int);
int randomnumber(int);
int showQuestion(int level, int num1, int num2);

int main(void) {
	//변수선언, 초기화
	
	int num1, num2;
	int level = 1;
	int answer = -1;
	int count = 0;
	srand(time(NULL));
	
	intro();
	//무한 루프 : 입력, 맞는지 틀린지 확인, 종료조건 확인
		//메뉴를 출력
		//입력받기
		//종료조건이면, break
		//맞췄으면 success 출력, 다시 반복
		//틀리면 fail출력 break
	
	while (1)
	{
		num1 = randomnumber(level);
		num2 = randomnumber(level);
		answer = showQuestion(level, num1, num2);

		if (answer == -1)
		{
			printf("프로그램을 종료합니다.");
			break;
		}

		else if (answer == num1 * num2)
		{
			printf("success\n\n");
			level++;
		}

		else {
			printf("fail\n\n");
			break;
		}
	}
	
	//몇개 맞췄는지 출력하고 종료
	ending(level);
	
	return 0;
}
void intro(void) {

}

void ending(int s)
{
	printf("맞춘 갯수: %d", s - 1);
}

int randomnumber(int ㅣ){
	return rand() % (ㅣ * 9) + 1;
}

int showQuestion(int ㅣ, int num1, int num2) {
	int answer;

	printf("%2d 단계\n", ㅣ);
	printf("%d x %d = ?\n", num1, num2);
	printf("정답을 입력하세요(-1 입력 시 종료됩니다.): ");
	scanf_s("%d", &answer);

	return answer;
}
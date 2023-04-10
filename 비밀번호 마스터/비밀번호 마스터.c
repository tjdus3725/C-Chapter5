#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void intro(void);
void ending(int);
int randomnumber(int);
int showQuestion(int level, int num1, int num2);

int main(void) {
	//��������, �ʱ�ȭ
	
	int num1, num2;
	int level = 1;
	int answer = -1;
	int count = 0;
	srand(time(NULL));
	
	intro();
	//���� ���� : �Է�, �´��� Ʋ���� Ȯ��, �������� Ȯ��
		//�޴��� ���
		//�Է¹ޱ�
		//���������̸�, break
		//�������� success ���, �ٽ� �ݺ�
		//Ʋ���� fail��� break
	
	while (1)
	{
		num1 = randomnumber(level);
		num2 = randomnumber(level);
		answer = showQuestion(level, num1, num2);

		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�.");
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
	
	//� ������� ����ϰ� ����
	ending(level);
	
	return 0;
}
void intro(void) {

}

void ending(int s)
{
	printf("���� ����: %d", s - 1);
}

int randomnumber(int ��){
	return rand() % (�� * 9) + 1;
}

int showQuestion(int ��, int num1, int num2) {
	int answer;

	printf("%2d �ܰ�\n", ��);
	printf("%d x %d = ?\n", num1, num2);
	printf("������ �Է��ϼ���(-1 �Է� �� ����˴ϴ�.): ");
	scanf_s("%d", &answer);

	return answer;
}
#include <stdio.h>

int main(void)
{
	//���� �ΰ� �غ�, 0���� �ʱ�ȭ
	int num = 0;
	int num1 = 0;

	//�����Է� �ް�
	printf("���� 1�Է�: ");
	scanf_s("%d", &num);
	printf("���� 2�Է�: ");
	scanf_s("%d", &num1);

	//��Ģ���� ���� ���
	printf("���� ���: %d\n", num + num1);
	printf("���� ���: %d\n", num - num1);
	printf("���� ���: %d\n", num * num1);
	printf("������ ���: %d\n", num / num1);
	return 0;
}
#include <stdio.h>

int adding(int);
int facto(int);
int fibo(int);

int main(void) {
	int n;

	printf("������ ��ȣ�� �Է�: ");
	scanf_s("%d", &n);

	printf("�������� a_%d�� ���� %d�Դϴ�.\n", n, adding(n));
	printf("���丮�� a_%d�� ���� %d�Դϴ�.\n", n, facto(n));
	printf("�Ǻ���ġ ���� a_%d�� ���� %d�Դϴ�.\n", n, fibo(n));


	return 0;
}
 
int adding(int num) {  //����Լ�
	if (num == 1) return 1;
	else return (adding(num - 1) + 2);
}

int facto(int num) {  //����Լ�
	if (num == 1) return 1;
	else return num * facto(num - 1);
}

int fibo(int num) {  //����Լ�
	if (num == 1 || num == 2) return 1;
	else return (fibo(num - 1) + fibo(num - 2));
}
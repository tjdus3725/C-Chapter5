#include <stdio.h>
#include "function.h"

int main(void)
{
	//���� �ΰ� �غ�, 0���� �ʱ�ȭ
	int num1 = 0;
	int num2 = 0;

	//�����Է� �޴� �Լ�
	num1 = showMenu(1);	
	num2 = showMenu(2);

	//��Ģ���� ���� ���
	p("����", num1 + num2);
	p("����", num1 - num2);
	p("����", num1 * num2);
	p("������", num1 / num2);

	return 0;
}
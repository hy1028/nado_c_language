#include <stdio.h>

int main_assign()
{
	int *numPtr;		// ������ ���� ����
	int num1 = 10;		// ������ ������ �����ϰ� 10 ����

	numPtr = &num1;		// num1�� �޸� �ּҸ� ������ ������ ����

	*numPtr = 20;		// ������ �����ڷ� �޸� �ּҿ� �����Ͽ� 20�� ����

	printf("%d\n", *numPtr);	// 20: ������ �����ڷ� �޸� �ּҿ� �����Ͽ� ���� ������
	printf("%d\n", num1);		// 20: ���� num1�� ���� �ٲ�

	return 0;
}
#include <stdio.h>

int main(void)
{
	int nInput = 0;
	printf("������ �Է��ϼ���.: ");

	scanf_s("%d", &nInput); // �� �ڵ�� 0�� �Է¹��� �� �־� �ſ� �ɰ��� ������ �߻���ų �� ����!
	printf("��: %d\n", 10 / nInput);
	return 0;
}
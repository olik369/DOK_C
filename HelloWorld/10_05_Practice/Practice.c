#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("�� ������ �Է��ϼ���.: ");
	scanf_s("%d%d", &x, &y);

	printf("AVG : %.2f", (x + y) / 2.0);
	return 0;
}
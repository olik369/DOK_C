#include <stdio.h>

int main(void)
{
	int inputSec = 0;

	printf("��(Second)�� �������·� �Է����ּ���: ");
	scanf_s("%d", &inputSec);
	
	printf("%02d:%02d:%02d\n",
		inputSec / 3600,
		(inputSec % 3600) / 60,
		inputSec % 60);
	return 0;
}
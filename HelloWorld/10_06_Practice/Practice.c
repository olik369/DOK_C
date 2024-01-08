#include <stdio.h>

int main(void)
{
	int inputSec = 0;

	printf("초(Second)를 정수형태로 입력해주세요: ");
	scanf_s("%d", &inputSec);
	
	printf("%02d:%02d:%02d\n",
		inputSec / 3600,
		(inputSec % 3600) / 60,
		inputSec % 60);
	return 0;
}
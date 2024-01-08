#include <stdio.h>

int main(void)
{
	int nInput = 0;
	printf("정수를 입력하세요.: ");

	scanf_s("%d", &nInput); // 이 코드는 0을 입력받을 수 있어 매우 심각한 오류를 발생시킬 수 있음!
	printf("몫: %d\n", 10 / nInput);
	return 0;
}
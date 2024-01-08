#include <stdio.h>

int main(void)
{
	int nResult = 0;

	nResult = 3 / 4; // 소수부분 절사됨
	printf("nResult : %d\n", nResult - 5);
	return 0;
}
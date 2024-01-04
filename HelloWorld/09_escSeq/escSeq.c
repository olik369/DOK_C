#include <stdio.h>

int main(void)
{
	int x = 10;

	putchar('B');
	putchar('\n');
	printf("%c\n", 'A');
	printf("%c\n", 65); // ASCII 코드로 65는 A를 의미함

	printf("x는 %d 입니다.\n", x);

	printf("%s\n", "Hello, World!");
	return 0;
}
#include <stdio.h>

int main(void)
{
	int x = 10;

	putchar('B');
	putchar('\n');
	printf("%c\n", 'A');
	printf("%c\n", 65); // ASCII �ڵ�� 65�� A�� �ǹ���

	printf("x�� %d �Դϴ�.\n", x);

	printf("%s\n", "Hello, World!");
	return 0;
}
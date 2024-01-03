#include <stdio.h>

int main(void)
{
	char ch = 0;

	/*
	* I/O버퍼는 기본적으로 Queue 형태로 되어있음
	*/
	ch = getchar(); // I/O 버퍼에서 한글자를 가져와라
	putchar(ch);
	putchar('Z');

	return 0;
}
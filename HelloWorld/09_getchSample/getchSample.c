#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch = 0;
	// 사용자에게 전달할 메세지(문자열) 출력
	printf("아무 키나 누르면 다음으로 넘어갑니다. \n");
	// 사용자로부터 키보드 입력을 한번 받는다. 사용자가 입력한 값은 표시되지 않습니다.
	// _getch() 함수가 반환하면 이를 ch변수에 저장한다.
	ch = _getch(); // 만약 _getche를 쓰면 내가 입력한것이 표시가 됨

	// 사용자가 입력한 문자를 출력한다.
	printf("입력한 키는 ");
	putchar(ch);
	printf("입니다.\n");
	return 0;
}
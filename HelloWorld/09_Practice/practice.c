#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d%*c", &nAge);

	printf("�̸��� �Է��ϼ��� : ");
	gets_s(szName, sizeof(szName));

	printf("����� ���̴� %d���̰� �̸��� \'%s\' �Դϴ�.\n", nAge, szName);

	return 0;
}
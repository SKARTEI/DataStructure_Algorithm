#include <stdio.h>

void main()
{
	int ii, length = 0;
	char str[50];
	
	printf("\n");
	printf("���ڿ��� �Է��ϼ���. : ");

	gets(str);

	printf("\n�Էµ� ���ڿ��� \n \"");

	for (ii = 0; str[ii]; ii++)
	{
		printf("%c", str[ii]);
		length += 1;
	}

	printf("\" \n�Դϴ�.");
	printf("\n\n�Էµ� ���ڿ��� ���� = %d \n", length);

	getchar();
}
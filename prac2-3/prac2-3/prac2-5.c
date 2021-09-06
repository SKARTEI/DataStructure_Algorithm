#include <stdio.h>

void main()
{
	int ii, length = 0;
	char str[50];
	
	printf("\n");
	printf("문자열을 입력하세요. : ");

	gets(str);

	printf("\n입력된 문자열은 \n \"");

	for (ii = 0; str[ii]; ii++)
	{
		printf("%c", str[ii]);
		length += 1;
	}

	printf("\" \n입니다.");
	printf("\n\n입력된 문자열의 길이 = %d \n", length);

	getchar();
}
#include <stdio.h>

void main()
{
	int c, C, K;
	char student[2][3][20];

	for (c = 0; c < 2; c++)
	{
		printf("학생 %d의 이름 : ", c + 1);
		gets(student[c][0]);
		printf("\n학생 %d의 학과 : ", c + 1);
		gets(student[c][1]);
		printf("\n학생 %d의 학번 : ", c + 1);
		gets(student[c][2]);
	}

	for (c = 0; c < 2; c++)
	{
		printf("\n\n학생 %d", c + 1);
		for (C = 0; C < 3; C++)
		{
			printf("\n\t");
			for (K = 0; student[c][C][K] != '\0'; K++)
				printf("%c", student[c][C][K]);
		}
	}
}
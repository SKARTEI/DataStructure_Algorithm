#include <stdio.h>

void main()
{
	int c, C, K;
	char student[2][3][20];

	for (c = 0; c < 2; c++)
	{
		printf("�л� %d�� �̸� : ", c + 1);
		gets(student[c][0]);
		printf("\n�л� %d�� �а� : ", c + 1);
		gets(student[c][1]);
		printf("\n�л� %d�� �й� : ", c + 1);
		gets(student[c][2]);
	}

	for (c = 0; c < 2; c++)
	{
		printf("\n\n�л� %d", c + 1);
		for (C = 0; C < 3; C++)
		{
			printf("\n\t");
			for (K = 0; student[c][C][K] != '\0'; K++)
				printf("%c", student[c][C][K]);
		}
	}
}
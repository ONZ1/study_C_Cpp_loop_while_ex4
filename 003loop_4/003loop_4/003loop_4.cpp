#include <stdio.h>

int main(void) {

	/*
	2-3

	*****
	****
	***
	**
	*
	*
	**
	***
	****
	*****

	*/
	printf("\n[¹®Á¦2-3]\n");

	int starloop3 = 5;

	while (starloop3 > 0)
	{
		int b = 0;
		while (b < starloop3)
		{
			printf("*");
			b++;
		}
		printf("\n");
		starloop3--;
	}

	while (starloop3 < 5)
	{
		int b = 0;
		while (b <= starloop3)
		{
			printf("*");
			b++;
		}
		printf("\n");
		starloop3++;
	}
	return 0;
	fgetc(stdin);
}
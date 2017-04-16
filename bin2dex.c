#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int dec;
char bin[1024];
double sum = 0;


int main()
{
	int i, j;
	
	printf("Input binary number:\t");
	gets(bin);


	// Main calculate process
	int len = strlen(bin);

	for (i = 0; i < len; i++)
	{
		int n = bin[len - i - 1] - '0';

		if ((n != 0) && (n != 1))
		{
			printf("ILLEGAL INPUT!");
			return -1;
		}
		else
		{
			sum += n * pow(2, len - i - 1);
		}
	}


	printf("Converted decimal is: %d", (int)sum);

	return 0;
}
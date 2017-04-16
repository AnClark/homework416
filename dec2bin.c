#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int dec;
char bin_rev[1024]={'\0'};

int main()
{
	int i=0, j;

	printf("Input decimal number:\t");
	scanf("%d", &dec);

	while (dec > 0 && dec / 2 >= 0)
	{
        bin_rev[i++] = '0' + dec % 2;
	    dec /= 2;
	}


    printf("Result in binary:\t");
    for(i=strlen(bin_rev)-1; i>=0; i--)
        putchar(bin_rev[i]);

	return 0;
}
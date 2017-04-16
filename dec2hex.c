#include<stdio.h>
#include<string.h>

int dec;
const char* hex_dict="0123456789abcdef";
char hex_rev[256];

int main()
{
	int i=0;
	
	printf("Input a decimal number:\t");
	scanf("%d", &dec);
	
	while(dec > 0 && dec / 16 >= 0)
	{
		hex_rev[i++] = hex_dict[ dec % 16 ];
		dec /= 16;
	}
	
	printf("Result in hex: \t");
	for(i=strlen(hex_rev)-1; i>=0; i--)
		putchar(hex_rev[i]);
		
	return 0;
}

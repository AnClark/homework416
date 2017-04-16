#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 借助字符串建立十六进制组成数的字典。巧妙利用char
// array的索引实现十进制与十六进制单位数之间的转换
const char *hex_dict = "0123456789abcdef";
char hex[256];
int dec;

int main()
{
	int i, j, n;
	int sum = 0;
	printf("Input hex number:\t");
	gets(hex);

	int len = strlen(hex);
	for (i = len - 1; i >= 0; i--)
	{
		char substr[1];
		sprintf(substr, "%c", hex[i]);

		n = strstr(hex_dict, substr) - hex_dict;
		// printf("%d\t", n);
		if (n > 15)
		{
			printf("\nINVALID INPUT!!!\n");
			return -1;
		}

		sum += (int)n *pow(16, i);

	}

	printf("Converted decimal is: %d\n", sum);

	return 0;
}
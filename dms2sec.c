#include<stdio.h>
#include<stdlib.h>

int h,m,s;
int sum=0;

int main()
{
	
	printf("Input hour, minute, second respectively:\n");
	scanf("%d%d%d", &h,&m,&s);
	
	if(h >= 60 || m >= 60 || s >= 60){
		printf("INVALID INPUT!\n");
		return -1;
		
		}
	//printf
	
	//Hour
	sum += h*60*60;
	//Minute
	sum += m*60;
	//Second
	sum += s;
	
	printf("Result: %d second(s)", sum);
	
	return 0;
	}
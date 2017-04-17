#include<stdio.h>
#include<stdlib.h>

int sec;
int h,m,s;

int main()
{
	printf("Input second:");
	scanf("%d", &sec);
	
	h = sec / 3600;
	sec = sec % 3600;
	
	m = sec / 60;
	sec = sec % 60;
	
	s = sec;
	
	printf("Converted time params:\n");
	printf("Hour:\t%d\n", h);
	printf("Minute:\t%d\n", m);
	printf("Second:\t%d\n", s);
	
	
	return 0;
	
}
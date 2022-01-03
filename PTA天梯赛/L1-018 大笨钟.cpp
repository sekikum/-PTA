#include<stdio.h>
#include<string.h>
int main()
{
	// 8·Ö 
	/*
	char time[10];
	int hour, minute;
	scanf("%s", time);
	hour = (time[0] - '0') * 10 + time[1] - '0';
	minute = (time[3] - '0') * 10 + time[4] - '0';
	if(0 <= hour && 12 > hour) 
	{
		printf("Only %s.  Too early to Dang.", time);
		return 0;
	}
	else if(hour == 12 && time == 0) 
		{
			printf("Only %s.  Too early to Dang.", time);
			return 0;
		}
		 else if(time > 0) printf("Dang");
		 for(int i = 0; i < hour - 12; i++)
		 {
		 	printf("Dang");
		 }
	*/
	
	// 10·Ö 
	int a, b;
	scanf("%d:%d", &a, &b);
	if(a < 12 || (a == 12 && b == 0)) printf("Only %02d:%02d.  Too early to Dang.", a, b);
	else if(b > 0) printf("Dang");
	for(int i = 0; i < a - 12; i++)
	{
		printf("Dang");
	}
} 

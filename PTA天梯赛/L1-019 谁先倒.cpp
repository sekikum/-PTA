#include<stdio.h>
int main()
{
	int beer1, beer2;	//���� 
	scanf("%d%d", &beer1, &beer2);
	int n;	//���� 
	scanf("%d", &n);
	int a1[101], a2[101];	//����������
	int b1[101], b2[101];	//����������
	int count1 = 0, count2 = 0;	//��ľ���
	int sum;
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &a1[i], &b1[i], &a2[i], &b2[i]);
		sum = a1[i] + a2[i];
		if(b1[i] == sum && b2[i] != sum) count1++;
		if(b1[i] != sum && b2[i] == sum) count2++;		
//		printf("%d  %d\n", count1, count2);
		if(count1 > beer1)
		{
			printf("A\n%d", count2);
			break;
		} 
		if(count2 > beer2)
		{
			printf("B\n%d", count1);
			break;
		}
	} 
}
	
/* ����
1 1
6
8 10 9 12
5 10 5 10
3 8 5 12
12 18 1 13
4 16 12 15
15 1 1 16


2 2
7
8 10 9 12
5 10 5 10
3 8 5 12
12 18 1 13
4 16 12 15
3 8 5 12
15 1 1 16
*/
	


/*
	Name: chapter6_1
	Copyright: tamttug
	Date: 01-11-21 10:24
	Description: �Լ��� �⺻  
*/


#include<stdio.h>

void PrintSumAndProduct(int a,int b)
{
	printf("%d + %d =%d\n",a,b,a+b);
	printf("%d * %d =%d\n",a,b,a*b);
}

int main(void)
{
	int x,y;
	
	PrintSumAndProduct(10,20);
	
	printf("������ �Է��ϼ���: ");
 	scanf("%d %d",&x,&y);
	 
	PrintSumAndProduct(x,y);
	 
	return 0;
}

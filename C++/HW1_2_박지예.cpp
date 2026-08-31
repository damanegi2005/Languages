#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void me(void);
int main(void)
{
	me();
	int a;
	printf("Enter the height of the triangle: ");
	scanf("%d", &a);
	if (a >= 1 && a <= 20) //조건 만족시
	{
		for (int i=1;i <= a;i++) //일단 행 개수
		{
			for (int k = 1;k <= a-i;k++) //앞 빈칸 개수는 a-i
				printf(" ");
			for (int k = 1;k <= 2*i-1;k++) //별 개수
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else //범위 밖
		printf("잘못된 입력입니다");
}


void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
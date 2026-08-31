#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void me(void);
int main(void)
{
	me();
	int a, b; 
	printf("사각형의 가로와 세로 길이를 입력: ");
	scanf("%d%d", &a, &b); //가로세로 입력받기
	if ((a >= 2 && a <= 50) && (b >= 2 && b <= 50)) //범위설정
	{
		for (int i = 1;i <= a;i++) //첫째줄
		{
			printf("*");
		}
		for (int i = 1;i <= (b - 2);i++) //가운데부분
		{
			printf("\n*");
			for (int k = 1;k <= (a - 2);k++) //공백 표현
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
		for (int i = 1;i <= a;i++) //마지막줄
		{
			printf("*");
		}
	}
	else //범위밖일때
		printf("잘못된 입력입니다");
}
void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
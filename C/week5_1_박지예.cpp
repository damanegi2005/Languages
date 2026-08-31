#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
	printf("1~10사이의 수를 입력하세요\n");
	int a;
	int m = 1, i=1; //초기화 필수
	scanf("%d", &a); //수 담기
	if (a >= 1 && a <= 10) //범위체크 우선
		{
			for (i = 1;i <= a;i++) //for문사용
			{
				m = m * i; //m 공간에 하나씩 추가
				printf("%d! = %d\n", i, m);
			}
		}
	else //범위 밖일때
		printf("범위 밖의 수입니다");
}
	

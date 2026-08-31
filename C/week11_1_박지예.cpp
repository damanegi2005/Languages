#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PRNT printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
int myPow(int,int); //프로토타입
int main(void)
{
	PRNT //중요!!!!!!
	int a, b;
	while (1)
	{
		printf("0 이상의 정수 두 개를 입력하세요\n");
		scanf("%d%d", &a, &b);
		if (a >= 0 && b >= 0) //범위맞으면 반복 그만
		{
			printf("%d의 %d승은 %d입니다", a, b, myPow(a,b)); //인자 두개 넣기!!
			break;
		}
	}
}
int myPow(int a, int b) //재귀함수는 매우 간단
{
	if (a == 0) return 0;
	else if (b == 0) return 1;
	else return a * myPow(a,b - 1);
}

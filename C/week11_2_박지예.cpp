#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PRNT printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
int main(void)
{
	PRNT
	srand(time(NULL)); //실행때마다 seed 바꿔야함
	printf("<뽑기>\n"); 
	for (int i = 0; i < 3; i++) //중첩반복
	{
		for (int k = 0; k < 5; k++)
		{
			printf("[%2d]",(k+5*i)); //가독성위해 %2d
		}
		printf("\n");
	}
	int result[15]; //배열 선언
	for (int i = 0; i < 15; i++)
	{
		result[i] = rand() % 2; //배열에 값 채우기
	}
	while (1)
	{
		int n;
		char c;
		printf("번호를 선택하세요<0~14>: ");
		scanf("%d", &n);
		if (n > 14 || n < 0) //범위 밖일때
		{
			printf("범위 밖의 값입니다\n");
			printf("계속하시겠습니까?<y/n>: ");
			scanf(" %c", &c);
			printf("\n");
			if (c != 'y') //y말고 다른거 입력하면 멈춤
				break;
			continue;
		}
		if (result[n] == 0) printf("꽝! 다음 기회에...\n"); //결과알려주기
		else if (result[n] == 1) printf("당첨!\n");
		printf("계속하시겠습니까?<y/n>: ");
		scanf(" %c", &c); //buffer 문제 해결
		printf("\n");
		if (c != 'y')
			break;
	}
	printf("<정답>\n"); //마지막 정답 출력
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("[%d]", result[k+5*i]); 
		}
		printf("\n");
	}
}
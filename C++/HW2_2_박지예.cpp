#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //rand, srand
#include<time.h> //time()
void me(void);
int main(void)
{
	me();
	srand(time(NULL)); //실행마다 seed 바뀌도록
	while (true) //정상값 받을때까지 계속 받기
	{
		int n, a, b, c, d;
		printf("카드를 뽑는 횟수(1~100000000, 종료시 0 입력) :");
		scanf("%d", &n);
		if (n == 0) //0받으면 종료
		{
			printf("프로그램 종료");
			break;
		} 
		if (n < 1 || n>100000000) //잘못된범위면 다시받아
		{
			printf("잘못된 범위\n");
			continue;
		}
		a = rand() % n +1; //a값 구할때 
		b = rand() % (n - a) + 1; //b값 구할때
		c = rand() % (n - a - b) + 1; //c값 구할떄
		d = n - a - b - c; //d값 구할때
		printf("- Diamond: %d회, 비율: %.2lf%\n", a, (float)a / (float)n * 100); //형변환 꼭 필요
		printf("- Spade: %d회, 비율: %.2lf%\n", b, (float)b / (float)n * 100);
		printf("- Heart: %d회, 비율: %.2lf%\n", c, (float)c / (float)n * 100);
		printf("- Clover: %d회, 비율: %.2lf%\n", d, (float)d / (float)n * 100);
	}
}

void me(void) //자기소개함수 정의
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> //기본 내제
void math(int, int);  // math 함수 반환값 없음
void me(void); //자기소개
int main(void)
{
	me();
	int x = 100, y = 100;
	while ((x<1 || x>9)||(y<1 || y>9)) //계속반복
	{
		printf("밑수와 지수를 입력해주세요: ");
		scanf("%d%d",&x,&y);

	}
	printf("\n<결과>\n");
	math(x, y); //math 함수 실행
}
void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
void math(int x, int y) //math 함수 정의
{
	for (int i = 1;i <= y;i++)
	{
		printf("%d ^ %d = %.f\n", x, i, pow(x,i)); //pow 사용
	}
}
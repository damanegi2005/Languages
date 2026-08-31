#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
	int a; //a int 지정
	printf("<미세먼지 측정>\n미세먼지 지수를 입력해주세요:");
	scanf("%d", &a); //미세먼지 지수 입력받기
		if (a < 0) //잘못된 값
		printf("잘못 입력하셨습니다");
	else //올바른 범위 내
	{
		if (a <= 30)// 미세먼지 좋을 때
			printf("미세먼지: 좋음");
		else if (a <= 80) //else if구문사용
			printf("미세먼지: 보통");
		else if (a <= 150)
			printf("미세먼지: 나쁨");
		else //모든 경우 다 불만족 하는 경우
			printf("미세먼지: 매우나쁨");
	}
}

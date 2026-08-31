#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	printf("학과:사이버보안\n학번:2467013\n이름:박지예\n"); //학과학번이름
	int a, b, c; //정수 선언
	printf("정수 3개를 입력하세요\n");
	scanf("%d%d%d", &a, &b, &c); //입력받기
	printf("세 정수:%d,%d,%d\n", a, b, c);
	printf("세 정수의 합:%d\n", a + b + c); //세 정수 합
	printf("세 정수의 평균:%.2lf\n", ((float)a +(float) b + (float)c) / 3); //세 정수 곱
}

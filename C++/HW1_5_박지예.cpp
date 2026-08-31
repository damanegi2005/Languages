#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void me(void);
double add(double, double);  //계산 수행하는 함수 4개
double sub(double, double);
double mult(double, double);
double div(double, double);
int main(void)
{
	me();
	double x,y;
	char w;
	printf("\n<사칙연산 계산기>\n");
	while (1) //일단 무한반복
	{
		printf("\n사칙연산식 입력(두 수가 모두 0인경우 종료)\n");
		scanf("%lf%c%lf", &x, &w, &y);//이런식으로 입력받기!!
		if (x == 0 && y == 0) //둘다 0이면 종료
			break;
		switch (w) //조건문
		{
		case '+':printf("%.2lf %c %.2lf = %.2lf", x, w, y, add(x, y)); //함수 반환값을 넣기
			break;
		case '-':printf("%.2lf %c %.2lf = %.2lf", x, w, y, sub(x, y));
			break;
		case '*': printf("%.2lf %c %.2lf = %.2lf", x, w, y, mult(x, y));
			break;
		case '/': printf("%.2lf %c %.2lf = %.2lf", x, w, y, div(x, y));
			break;
		default: printf("Wrong Input"); //다른 기호 나올때
			break;
		}
	}
	printf("프로그램 종료"); //마지막에 종료 문자
	
}


void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
double add(double x, double y) //더하기 함수
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double mult(double x, double y)
{
	return x* y;
}
double div(double x, double y)
{
	return x / y;
}
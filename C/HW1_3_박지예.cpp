#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void me(void);
int main(void)
{
	me();
	int a, b, c,k;
	printf("이차방정식: ax^2+bx+c=0\n2차방정식의 계수 a,b,c를 입력하세요: ");
	scanf("%d%d%d", &a, &b, &c);
	int D = b*b - 4 * a * c; //판별식
	double x1, x2;
	if (D > 0) //근 두개
	{
		x1 = (( - b + sqrt(b*b - 4 * a * c)) / (2* a)); //b제곱 표현주의
		x2 = ((-b - sqrt(b*b - 4 * a * c)) / (2* a)); //근 두개니까 각각
		printf("근이 2개 존재: %.2lf / %.2lf", x1, x2);
	}
	else if (D == 0) //중근 가질때
	{
		x1 = ((-b + sqrt(b*b - 4 * a * c)) / (2*a));
		printf("근이 1개 존재: %.2lf", x1);
	}
	else //허근 가질때
	{
		printf("근이 존재하지 않습니다");
	}
}


void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
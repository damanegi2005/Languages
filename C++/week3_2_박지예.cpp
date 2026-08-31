#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	printf("===\n학과:사이버보안\n학번:2467013\n이름:박지예\n===\n\n"); //학과학번이름
	int m, a, b, c, d; // 변수 선언
	printf("금액입력(10~10000):");
	scanf("%d", &m);
	printf("금액은 %d원입니다.\n\n<동전개수>\n", m); //기본정보
	a = m / 500; //500원 개수
	b = (m%500) / 100; //100원 개수
	c = (m%500%100) / 50; //50원 개수
	d = (m%500%100%50) / 10; //10원 개수
	printf("500원: %d개\n100원: %d개\n50원: %d개\n10원: %d개\n최소 동전개수:%d개", a, b, c, d, a + b + c + d);
}


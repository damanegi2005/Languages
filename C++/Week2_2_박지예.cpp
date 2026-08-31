#include<stdio.h>
int main(void)
{
	printf("=======\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n========\n"); //학과 이름
	double m = 3.0e-23; //물 질량
	int q = 950; //쿼드당
	int w = 1000; // 얼마있는지
	printf("물분자 질량: %.1eg\n물1쿼트: %dg\n\n", m, q); //기본정보
	printf("%d쿼트의 물은 %dg이고 %.2e개 혹은 %.0lf개의 물분자가 있습니다.", w, q * w, q*w/m,q*w/m); //계산결과
}


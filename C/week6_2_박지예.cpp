#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> //기본 내제
void me(void); //자기소개
int length(int, int); //필요한 함수 소개
int area(int, int,int,int);
int perimeter(int,int,int,int);
int main(void)
{
	me();
	int a = -1, b = -1, c = -1, d = -1; //초기화
	while (1) //범위 맞도록
	{
		printf("(x1,y1) 좌표입력:");
		scanf("%d%d", &a, &b);
		if (a >= 0 && b >= 0)
			break;
		printf("x1,y1은 양수입니다.\n");
		
	}
	while (1)
	{
		printf("(x2,y2) 좌표입력: ");
		scanf("%d%d", &c, &d);
		if (c >= 0 && d >= 0)
			break;
		printf("x2,y2은 양수입니다.\n");
	}
	printf("(x1,y1)=(%d,%d), (x2,y2)=(%d,%d)\n", a, b, c, d); //값들 출력
	printf("직사각형의 너비는 %d입니다\n직사각형의 높이는 %d입니다\n", length(a,c), length(b,d));
	printf("직사각형의 면적은 %d입니다\n", area(a,b,c,d));
	printf("직사각형의 둘레는 %d입니다\n", perimeter(a, b, c, d));
}
void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
int length(int x,int y) //길이함수 정의
{
	int l = abs(x - y); //절댓값은 abs
	return l;
}
int area(int x, int y,int z,int r) //넓이함수 정의
{
	int ar = abs(x - z)*abs(y-r);
	return ar;
}
int perimeter(int x,int y,int z,int r) //둘레함수 정의
{
	int peri = (2*abs(x - z)) + (2*abs(y-r));
	return peri;
}
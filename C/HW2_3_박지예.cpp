#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void viewSeats(int(*p)[7], int, int); //viewSeats 선언
void me(void);
int main(void)
{
	me();
	int seats[5][7]; //기본 seats배열 선언
	int (*p)[7] = seats; //p 배열포인터에 seats넣기
	int a, b;
	for (int i = 0;i < 5;i++) //다 0으로 초기화, 중첩for문
	{
		for (int k = 0;k < 7;k++)
		{
			p[i][k] = 0;
		}
	}
	printf("행/열| 0    1    2    3    4    5    6    \n---------------------------------------\n"); 
	for (int j = 0; j < 5;j++) //첨에 기본좌석 중첩 for문으로 출력, 행
	{
		printf("    %d| ", j); //행번호
		for (int i = 0;i < 7;i++) //각 열
		{
			printf("%d", p[j][i]);
			printf("    "); 
		}
		printf("\n"); //줄띄워야함
	}
	while (1)
	{
		printf("빈 좌석을 선택해주세요. (빈 좌석-0/예약된 좌석-1/종료 9 9 입력) ");
		scanf("%d%d", &a, &b);
		if (a == 9 && b == 9) //9 9받으면 프로그램 끝
			break;
		viewSeats(p,a,b); //함수호출!!
	}
}
void viewSeats(int (*p)[7], int a, int b) //인자 3개, 배열포인터로 보내야해
{
	p[a][b] = 1; //배열포인터를 그냥 배열로 써.. 신기하다
	printf("행/열| 0    1    2    3    4    5    6    \n---------------------------------------\n");
	for (int j = 0; j < 5;j++) //행을 j로 함
	{
		printf("    %d| ", j);
		for (int i = 0;i < 7;i++) //열을 p로 함..머쓱
		{
			printf("%d", p[j][i]);
			printf("    ");
		}
		printf("\n"); //한 행마다 줄띄기~
	}
	
}
void me(void) //자기소개 함수
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
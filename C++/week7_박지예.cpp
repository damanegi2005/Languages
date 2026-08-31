#define _CRT_SECURE_NO_WARNINGS
#define NUM 10
#include<stdio.h>
void me(void);

int main(void)
{
	me(); //자기소개
	int score[NUM];
	int a;
	while (1) //학생수 받기
	{
		printf("학생 수 입력(1~10): ");
		scanf("%d", &a);
		if (a >= 1 && a <= 10)
			break;
	}
	printf("\n학생수 %d명의 점수 입력(0~100)\n", a);
	for (int i = 0;i < a;i++) //학생들 점수 받기
	{
		printf("student %d:", i+1);
		scanf("%d", &score[i]);
		if (score[i] < 0 || score[i] > 100)	//범위 만족 못할시
		{
			i=i-1; //중요
			printf("Enter again(0~10)\n");
		}
	}
	printf("\n<학생 성적>\n"); //성적 차례대로 출력
	for (int i = 0;i < a;i++)
	{
		printf("student %d:%d\n", i + 1,score[i]); 
	}
	int sum=0, max=score[0], min=score[0]; //우선 첫 값 넣어두기
	float average;
	for (int i = 0;i < a;i++) //max랑 min 구하기
	{
		sum += score[i]; //합산
		if (score[i] > max)
			max = score[i];
		if (score[i] < min)
			min = score[i];
	}
	average = float(sum) / a; //float로 바꿔야!!!!
	printf("\n합계: %d\n평균: %.2f\n최고: %d\n최저: %d\n", sum, average, max, min);
}
void me(void)// 자기소개 함수 정의
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
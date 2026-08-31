#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 20
void me(void);
void input(int*, int); //필요한 함수들 prototype
void output(int*, int); //배열이 인자일때는 pointer
int sum(int*, int);
void average(int, int, double*);
void Maxmin(int*, int, int*, int*);

int main(void)
{
	me();
	int total,realNum,maxValue, minValue; //변수들 선언
	double avg=0;
	int score[SIZE]; 
	while (1) //학생수 받기
	{
		printf("점수 입력받을 학생 수는?(1~20): ");
		scanf("%d", &realNum);
		if (realNum >= 1 && realNum <= 20)
			break;
	}
	input(score,realNum); //input함수 호출
	printf("\n\n++++++++결 과++++++++\n");
	output(score,realNum); //output함수 호출
	total = sum(score,realNum); //sum함수 호출
	printf("\n합계:%d\n", total);
	average(realNum, total, &avg); //average함수 호출
	Maxmin(score, realNum, &maxValue, &minValue); //Maxmin함수 호출
}

//이제 함수들 정의
void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
void input(int score[], int realNum) //input함수 정의(반환값x)
{
	for (int i = 0;i < realNum;i++) //학생들 점수 받기
	{
		printf("학생%d:", i + 1);
		scanf("%d", &score[i]);
		if (score[i] < 0 || score[i] > 100)	//범위 만족 못할시
		{
			i = i - 1; //중요
			printf("다시 입력해주세요.\n");
		}
	}
}
void output(int score[], int realNum) //단순 출력하는 output함수 정의
{
	printf("학생 점수: ");
	for (int i = 0; i < realNum; i++)
		printf("%d ", score[i]);
}
int sum(int score[], int realNum) //total값 반환하는 sum함수 정의
{
	int total=0;
	for (int i = 0; i < realNum; i++)
		total += score[i];
	return total;
} 
void average(int realNum, int total, double *avg) //average함수 정의(반환x)
{
	*avg = double(total) / double(realNum);
	printf("평균: %.2lf\n", *avg);
}
void Maxmin(int score[], int realNum, int *maxValue, int*minValue) //마지막 최대최소함수 정의(반환x)
{
	int sum = 0;
	*maxValue = *minValue = score[0];
	for (int i = 0;i < realNum ;i++) //max랑 min 구하기
	{
		if (score[i] > *maxValue)
			*maxValue = score[i];
		if (score[i] < *minValue)
			*minValue = score[i];
	}
	printf("최대:%d\n최소:%d\n", *maxValue, *minValue);
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
struct student { //student 구조체 선언
	char ID[20]; //id 문자임!
	char name[20];
	int Kor;
	int Eng;
	int Math;
	int Sum;
	float Avg; //평균은 실수로
	char Grade;
};
void me(void);
int score_input(student*[]); //input함수선언
void compute_score(student*[], int); //계산함수 선언
char compute_grade(float); //학점함수 선언
void score_output(student*[], int, FILE*); //출력함수 선언

int main(void)
{
	me();
	struct student* stu[100] = { NULL }; //구조체 포인터
	FILE* fp;// 파일포인터 선언
	int cnt = 0;
	fopen_s(&fp,"student.xls", "w"); //file open
	cnt = score_input(stu); //input함수 실행
	compute_score(stu, cnt); //계산함수 실행
	score_output(stu, cnt, fp); //출력함수 실행
	fclose(fp);//파일닫기 중요
	printf("\"d:\\student.xls\"파일이 생성되었습니다\n");
	printf("프로그램종료\n");
}
void me(void) //자기소개 함수
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}

int score_input(student* stu[]) //인자 형식 잘봐
{
	int cnt; //학생수
	printf("학생은 몇명입니까? ");
	scanf("%d", &cnt);
	printf("%d명의 정보를 입력하세요.\n", cnt);
	for (int i = 0;i < cnt;i++) //한명씩 받기
	{
		stu[i] = (student*)malloc(sizeof(student)); //메모리 동적할당
		printf("ID:");
		scanf("%s",stu[i]->ID); //화살표로 받아야함. 온점안돼
		printf("이름:");
		scanf("%s", stu[i]->name); //이름 받기
		printf("국어:");
		scanf("%d", &stu[i]->Kor); //과목별 점수 받기
		if (stu[i]->Kor < 0 || stu[i]->Kor>100) //점수 범위 체크
		{
			printf("국어:");
			scanf("%d", &stu[i]->Kor);
		}
		printf("영어:"); //영어 입력받기
		scanf("%d", &stu[i]->Eng);
		if (stu[i]->Eng < 0 || stu[i]->Eng>100)
		{
			printf("영어:");
			scanf("%d", &stu[i]->Eng);
		}
		printf("수학:"); //수학 입력받기
		scanf("%d", &stu[i]->Math);
		if (stu[i]->Math < 0 || stu[i]->Math>100)
		{
			printf("수학:");
			scanf("%d", &stu[i]->Math); //math가리키는건 값이므로
		}
		printf("\n");
	}
	return cnt; //학생수 반환
}
void compute_score(student* stu[], int cnt) //인자형식
{
	for (int i = 0;i < cnt;i++) //전체학생수만큼 실행
	{
		stu[i]->Sum = stu[i]->Kor + stu[i]->Eng + stu[i]->Math; //Sum값 구하기
		stu[i]->Avg = (float)(stu[i]->Sum / 3); //Average값 구하기
		stu[i]->Grade=compute_grade(stu[i]->Avg); //Grade함수 호출
	}
}
char compute_grade(float Avg) //Grade구하는 함수
{
	if (Avg >= 90 && Avg <= 100) //90~100
		return 'A';
	else if (Avg >= 80 && Avg < 90) //80~90
		return 'B';
	else if (Avg >= 70 && Avg < 80) //70~80
		return 'C';
	else if (Avg >=60 && Avg < 70) //60~70
		return 'D';
	else
		return 'F';
}
void score_output(student* stu[],int cnt, FILE* fp) //출력함수 정의, 인자형식중요!!!
{
	printf("\n\n순번	ID	이름	국어	영어	수학	합계	평균	학점\n"); //일단 화면에 띄우기
	for (int i = 0;i < cnt;i++)
	{
		printf("%d	%s	%s	%d	%d	%d	%d	%.2f	%c\n", i + 1, stu[i]->ID, stu[i]->name, stu[i]->Kor, stu[i]->Eng, stu[i]->Math, stu[i]->Sum, stu[i]->Avg, stu[i]->Grade); //각각 값 대입
	}
	if (fp != 0) //파일 잘 열렸을때
	{
		fprintf(fp, "순번	ID	이름	국어	영어	수학	합계	평균	학점\n");
		for (int i = 0; i < cnt;i++) //학생수만큼 반복
		{
			fprintf(fp, "%d	%s	%s	%d	%d	%d	%d	%.2f	%c\n", i + 1, stu[i]->ID, stu[i]->name, stu[i]->Kor, stu[i]->Eng, stu[i]->Math, stu[i]->Sum, stu[i]->Avg, stu[i]->Grade); //fprintf 형식
		}
	}
	else //잘 안열릴떄
		printf("파일이 열리지 않습니다.");
}
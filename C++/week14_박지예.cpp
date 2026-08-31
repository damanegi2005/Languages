#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //까먹으면안됨
#include<string.h>
#define PRNT printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
typedef struct{ //강아지 구조체 선언
	char name[50];
	char type[50];
	int age;
} DOG; //DOG라는 이름으로 쓸거야
void main(void)
{
	PRNT
	FILE* f; //파일 포인터 선언
	int count = 0;
	fopen_s(&f, "dog.txt", "a"); //파일 열기
	DOG* arr[100] = {NULL}; //구조체포인터
	printf("강아지 이름, 종, 나이를 차례로 입력하세요(종료시 이름에 \"0\"입력)\n");
	while(true)
	{
		arr[count] = (DOG*)malloc(sizeof(DOG));
		printf("이름:");
		gets_s(arr[count]->name, 50); //이름 문자열 입력받기
		if (strcmp(arr[count]->name,"0")==0) break;
		printf("견종:");
		gets_s(arr[count]->type,50); //견종 문자열 입력받기
		printf("나이:");
		scanf("%d", &(arr[count]->age)); //나이는 scanf로 받기
		getchar(); //버퍼 비움
		fprintf(f, "%s %s %d\n", arr[count]->name, arr[count]->type, arr[count]->age);
		count++;
		printf("\n");
	}
	fclose(f); //닫기

	fopen_s(&f, "dog.txt", "r"); //열기(읽기모드)
	DOG dog; //구조체 따로 선언
	printf("나이가 3세 이하인 강아지\n\n이름   견종   나이\n");
	if (f != 0)
	{
		while(true)
		{
			if (feof(f)) break; //파일 끝이면 닫기

			fscanf(f, "%s", dog.name); //하나씩 정보 담기
			fscanf(f, "%s", dog.type);
			fscanf(f, "%d", &dog.age);

			if (dog.age <= 3) //3살 이하 출력
			{
				printf("%s   %s   %d\n", dog.name, dog.type, dog.age);
			}
		}
	}
	else
		printf("파일을 열 수 없습니다.");

	fclose(f);

}
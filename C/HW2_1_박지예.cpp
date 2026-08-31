#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //strlen 쓰기위해
void me(void);
int main(void)
{
	char string1[100], string2[100]; //문자열 선언
	me();
	printf("문자열을 입력하세요.\n");
	gets_s(string1, sizeof(string1)); //gets는 이제 더이상 안쓰임
	int i = 0;
	int s = strlen(string1); //문자열길이
	for (int i = 0;i<s;i++)
	{
		if (65 <= string1[i] && string1[i] <= 90) //조건 이런식으로 적는거 잊지마
		{
			string2[i] = string1[i] + 32; //원래가 대문자일때
		}
		else if (97 <= string1[i] && string1[i] <= 122)
		{
			string2[i] = string1[i] - 32; //원래가 소문자일떄
		}
		else
			string2[i] = string1[i]; //이외것들
	}
	string2[s] = '\0'; //이거필수!!!!!!!!

	printf("변경 전 문자열: %s\n변경 후 문자열: %s", string1, string2);
}
void me(void) //자기소개함수
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
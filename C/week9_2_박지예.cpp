#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void me(void);
int main(void)
{
	me();
	char final_S[100] = ""; //일차원으로 쓸거 선언
	char sentense[][30] = { "고향에 고향에 돌아와도/","그리던 고향은 아니러뇨/","산꿩이 알을 품고/","뻐꾸기 제철에 울건만,/" };
	for (int i = 0; i < sizeof(sentense) / sizeof(sentense[0]);i++)
		strcat(final_S, sentense[i]); //일차원으로 붙이기
	printf("    <고향>\n                          정지용\n\n");
	for (int i = 0; i < strlen(final_S);i++)
	{
		putchar(final_S[i]);
		if (final_S[i] == '/')//백슬레쉬 만나면 건너뛰기
		{
			printf("\n");
			continue;
		}
	}
	printf("\n[타자연습]\n\n"); //타자연습 시작
	for (int i = 0; i < sizeof(sentense) / sizeof(sentense[0]);i++) //한줄씩!
	{
		char inp[100]=""; //사용자 입력받을 배열
		char slash[100] = "/";
		puts(sentense[i]);
		gets_s(inp);
		if (strcmp(sentense[i],strcat(inp, slash)) == 0)
			printf("합격\n\n");
		else
			printf("불합격\n\n");
	}
}
void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void me(void);
int main(void)
{
	me();
	char arr1[100], arr2[100]; 
	char arr3[100] = ""; //초기화 해야함
	printf("문자열1 입력:\n");
	gets_s(arr1); //입력받기
	printf("문자열2 입력:\n");
	gets_s(arr2); //입력받기
	for (int i = 0;i < strlen(arr1); i++)
	{
		arr3[i] = arr1[i]; //새로운 문자열에 arr1추가
	}
	for (int i = 0; i < strlen(arr2); i++)
	{
		arr3[i+ strlen(arr1)] = arr2[i]; //arr2도 추가
	}
	printf("합쳐진 문자열:\n%s", arr3);

}
void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
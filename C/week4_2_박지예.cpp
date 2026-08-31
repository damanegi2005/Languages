#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
	int a;
	printf("Choose the month you like.\n");
	scanf("%d", &a); //입력받기
	switch (a) //switch구문 사용
	{
		case 3:
		case 4:
		case 5:
			printf("You like spring."); //3,4,5월
			break; //브레이크 필요
		case 6:
		case 7:
		case 8:
			printf("You like summer."); //6,7,8월
			break;
		case 9:
		case 10:
		case 11:
			printf("You like fall.");// 9,10,11월
			break;
		case 12:
		case 1:
		case 2:
			printf("You like winter."); //1,2,12월
			break;
		default: //그 외
			printf("Wrong output");
	}

}
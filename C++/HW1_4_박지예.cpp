#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void me(void);
void show_menu(void); 
int func_order(int);// 반환값 있음
int main(void)
{
	me();
	int n,sum,k;
	sum = 0; //총 가격 담을것
	do //do while 반복문
	{
		show_menu();
		printf("선택: ");
		scanf("%d", &n);
		sum+=func_order(n); //총가격에 계속 더해

	} while (n != 0);
	printf("총 %d원 입니다. 얼마를 내시겠습니까? ",sum);
	scanf("%d", &k);
	if (k > sum) //마지막에 출력할 것
		printf("거스름돈은 %d원 입니다.", k - sum);
	else
		printf("%d원을 더 내세요", sum - k);

}
void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
void show_menu(void) //단순히 메뉴 보이는 함수
{
	printf("\n===메뉴선택===\n1.김밥   1500\\\n2.떡볶이 3000\\\n3.음료수  700\\\n0.종료\n==========\n");
}
int func_order(int n) //적당한 값을 반환해주는 함수, 변수와 반환값 있음
{
	switch(n)
	{
	case 1: 
		printf("김밥을 선택하셨습니다");
		return 1500;
		break;
	case 2:
		printf("떡볶이을 선택하셨습니다");
		return 3000;
		break;
	case 3:
		printf("음료수을 선택하셨습니다");
		return 700;
		break;
	case 0:
		return 0; //언제나 반환값 있어야함!!! 주의
		break;
	default:
		printf("잘못 입력하셨습니다.다시 입력해주세요");
		return 0;
	}
}
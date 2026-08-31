#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
	int s=0,a = 1; //s는 총가격 담는
	while (1) //무한루프 사용
	{
		printf("===메뉴===\n1.햄버거: 4000원\n2.콜라: 2000원\n3.치킨: 3000원\n=======\n메뉴를 선택하세요(주문종료시 0입력):");
		scanf("%d", &a); //입력받기
		if (a == 0) //0일땐 종료
		{
			printf("프로그램을 종료합니다");
			break; //if break는 종료하는거
		}
		else
		{
			switch (a) //a값에 따라 나오도록 switch문
			{
			case 1:
				printf("햄버거를 주문하셨습니다\n\n");
				s += 4000;
				break; //그다음 case 실행안하도록
			case 2: 
				printf("콜라를 주문하셨습니다\n\n");
				s += 2000;
				break;
			case 3:
				printf("치킨을 주문하셨습니다\n\n");
				s += 3000;
				break;
			default: //이외의 값이 입력될 경우
				printf("잘못된 주문입니다\n\n");
			}
		
		}
	}
	printf("총금액:%d\n맛있게 드세요~", s); //마무리
}

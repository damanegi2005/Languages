#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define PRNT printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
float ave(int*,int);
int main(void)
{
	PRNT //매크로로 학번이름 호출. ;필요없엉
	while (1)
	{
		int num;
		int* arr = NULL; //중요
		printf("그룹인원은 몇명입니까?(0~100)\n");
		scanf("%d", &num);
		if (num > 100 || num < 0) //학생수 범위밖일떄
		{
			printf("인원은 0에서 100 까지입니다.\n\n");
			continue;
		}
		else if (num == 0) //학생수 0이면 종료
		{
			printf("프로그램을 종료합니다.");
			break;
		}
		else
		{
			arr = (int*)malloc(sizeof(int) * num); //메모리 동적할당
			printf("그룹멤버의 나이를 입력하세요(0~120)\n");
			for (int i = 0;i<num;i++)
			{
				scanf("%d", &arr[i]); //학생수만큼 나이 받기
				if (arr[i] > 120 || arr[i] < 0)
				{
					printf("나이는 0에서 120 사이입니다.\n");
					i--; //이거두 중요
					continue;
				}
			}
			printf("그룹멤버의 평균 나이는 %.2f입니다.\n\n", ave(arr, num));
			free(arr); //free시켜주는거 필수
			arr = NULL;
		}
	}

}
float ave(int *arr,int num) //평균 가져다오는 함수
{
	int sum = 0;
	for (int i = 0;i<num;i++)
	{
		sum += arr[i];
	}
	return (float)sum / (float)num;
}


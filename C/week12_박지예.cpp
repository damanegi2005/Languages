#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include<stdio.h>
#include<string.h> //strcmp를 위해
void me(void);
struct employee { //구조체 
	char name[30];
	int position;
	int salary;
};
typedef struct employee employee;
void nameinput(employee *, int*); //구조체인데 배열이니까 포인터임!
void input(employee *,int);
void output(employee *,int);
float average(employee *,int,int);

int main(void) {
	me();
	employee worker[SIZE]; //woker은 구조체변수이자 배열!!!!!!!!!!wow
	int number;
	nameinput(worker, &number); //nameinput함수 호출
	input(worker, number); //input함수 호출
	printf("\n<결   과>\n");
	output(worker, number); //output함수 호출
	printf("\n사원급 월급 평균:%.2f", average(worker, 1, number)); //평균들 출력
	printf("\n대리급 월급 평균:%.2f", average(worker, 2, number));
	printf("\n과장급 월급 평균:%.2f\n", average(worker, 3, number));
	return 0;
}


void me(void)
{
	printf("=====\n학과:사이버보안학과\n학번:2467013\n성명:박지예\n=====\n");
}
void nameinput(employee *worker, int* num) //몇명인지는 주소로 해야함
{
	*num = 0;
	int i = 0;
	printf("<직원이름입력>(종료시 \"0\"입력)\n"); //큰따옴표 
	while(1) //이름 계속 추가 
	{
		worker[i];
		printf("직원이름: ");
		scanf(" %[^\n]s", &worker[i].name);
		int n = strcmp(worker[i].name, "0"); //strcmp 사용
		if (n == 0) //0 입력하면 종료
			break;
		(*num)++;
		i++;
	}
}
void input(employee *worker, int number)
{
	printf("\n<직원 직급, 직원월급입력>");
	for (int i = 0;i < number;i++)
	{
		printf("\n직원이름:%s", worker[i].name);
		printf("\n직원직급(1.사원 2.대리 3.과장) ");
		scanf("%d", &worker[i].position);
		if (worker[i].position > 3 || worker[i].position < 1) //범위밖이면 다시 입력받도록
		{
			i--;
			continue;
		}
		printf("직원월급(단위:만원): ");
		scanf("%d", &worker[i].salary);
	}
}
void output(employee *worker, int number)
{
	const char* post;
	printf("이름      직급      월급\n");
	for (int i = 0; i < number;i++)
	{
		switch (worker[i].position) { //switch로 숫자를 글자로 바꾸기
		case 1:
			post = "사원";
			break;
		case 2:
			post = "대리";
			break;
		default:
			post = "과장";
		}

		printf("%-10s%-7s%7d\n", worker[i].name, post, worker[i].salary); //왼쪽정렬이면 -사용
	}
}
float average(employee *worker,int post, int number)
{
	float average;
	int sum = 0, count = 0;
	for(int i=0;i<number;i++)
	{
		if (worker[i].position == post) //해당 post면 sum에 추가!!
		{
			sum += worker[i].salary;
			count ++;
		}
	}
	return (float)sum/count; //c언어는 이렇게 
}
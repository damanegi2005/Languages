#include <iostream>
using namespace std;
struct info
{
	char name[50];//이름
	int kor;//국어
	int eng;//영어
	int math;//수학
	int sum;//합계
	float ave;//평균
};
void con(info*, int n); //conclusion 함수

int main() {
	cout << "=====\n학과: 사이버보안\n학번: 2467013\n이름: 박지예\n=====\n";
	
	cout << "학생 이름과 각 과목점수 입력\n";
	info students[3] = {}; //일단 초기화
	for (int i = 0;i < 3;i++) {
		cout << "\n이름: ";
		cin >> students[i].name; //이름 받기
		cout << "국어: ";
		cin >> students[i].kor; //국어점수
		cout << "영어: ";
		cin >> students[i].eng; //영어점수
		cout << "수학: ";
		cin >> students[i].math; //수학점수
		students[i].sum = students[i].kor + students[i].eng + students[i].math; //합
		students[i].ave = float(students[i].sum) / 3.0; //평균
	}
	con(students, 3); //함수호출!!
}
void con(info* students, int n) {
	cout << "\n이름	국어	영어	수학	합계	평균	\n";
	int kormax=0,engmax=0,mathmax = 0; //초기화
	int kormin=100,engmin=100,mathmin = 100;
	for (int i = 0;i < 3;i++) {
		if (kormin > students[i].kor) kormin = students[i].kor; //과목별 비교 (최소)
		if (engmin > students[i].eng) engmin = students[i].eng;
		if (mathmin > students[i].math) mathmin = students[i].math;
		if (kormax < students[i].kor) kormax = students[i].kor; //최대
		if (engmax < students[i].eng) engmax = students[i].eng;
		if (mathmax < students[i].math) mathmax = students[i].math;
		printf("%s	%d	%d	%d	%d	%.2f\n",students[i].name, students[i].kor, students[i].eng, students[i].math, students[i].sum, students[i].ave); //기본정보 출력
	}
	printf("과목avg	%.2f	%.2f	%.2f\n", (float)(students[0].kor + students[1].kor + students[2].kor) / 3, (float)(students[0].eng + students[1].eng + students[2].eng) / 3, (float)(students[0].math + students[1].math + students[2].math) / 3); //과목별 avg
	printf("최고	%d	%d	%d\n",kormax,engmax,mathmax); //최대출력
	printf("최저    %d	%d	%d\n",kormin, engmin, mathmin);//최소출력
}

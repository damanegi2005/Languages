#include <iostream>
#include<string.h>
using namespace std;

class Person { //클래스 정의
	int id;
	double score;
	string name;
	static double sum; //학점 합계 저장
	static int num;// 학생 수 저장
public:
	void show() { cout << id << ' ' << name << ' ' << score << endl; } //show함수
	static double avgcom() { return sum / num; } //평균반환함수
	Person(int id = 1, string name = "Tom", double score = 3.5) { //생성자(하나로 다 표현)
		this->id = id;
		this->name = name;
		this->score = score;
		sum += this->score; //합계 저장
		num += 1; //사람수 저장
	}
	~Person() { cout << this->name << "삭제\n"; } //소멸자
};
double Person::sum = 0; //static 변수 잊지않고 정의
int Person::num = 0;

int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	Person tom, jane(2, "Jane"), john(3, "John", 2.5);//객체 3명 정의
	tom.show(); //각각 정보 보이기
	jane.show();
	john.show();
	cout << "average: " << Person::avgcom() << endl; //avgcom 호출하여 평균 보이기
}
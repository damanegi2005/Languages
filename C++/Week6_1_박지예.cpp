#include <iostream>
using namespace std;

class ArrayUtil { //클래스 정의
public: //public에 둬야해
	static double sum[5], big[5];
	static void intToDouble(int s1[], double s2[], int size) { //int->double
		for (int i = 0;i < size;i++) {
			s2[i] = s1[i]; //이거 순서 중요
		}
	}
	static void doubleToInt(double s1[], int s2[], int size) { //double->int
		for (int i = 0;i < size;i++) {
			s2[i] = s1[i];
		}
	}
	static void arraySum(double s1[], double s2[], int size) { //두 원소 합 저장하기
		for (int i = 0;i < size;i++) {
			sum[i] = s1[i] + s2[i];
		}
	}
	static void arrayBig(double s1[], double s2[], int size) { //두 원소 중 큰거
		for (int i = 0;i < size;i++) {
			big[i] = (s1[i] > s2[i]) ? s1[i] : s2[i];
		}
	}
};

double ArrayUtil::sum[5]; //중요!! static 변수 밖에서 꼭 정의
double ArrayUtil::big[5];

int main() { 
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	int x[] = { 1,6,2,5,7 };
	double y[5], z[] = { 9.9,4.5,7.3,6.7,5.6 }; //y는 비움

	ArrayUtil::intToDouble(x, y, 5);
	for (int i = 0;i < 5;i++) cout << y[i] << ' '; //바뀐 y배열 출력
	cout << endl;

	ArrayUtil::doubleToInt(z, x, 5);
	for (int i = 0;i < 5;i++) cout << x[i] << ' '; //바뀐 x배열 출력
	cout << endl;

	cout << "합계" << endl;
	ArrayUtil::arraySum(y, z, 5);
	for (int i = 0;i < 5;i++) cout << ArrayUtil::sum[i] << ' '; //sum 배열 출력
	cout << endl;

	cout << "큰 수" << endl;
	ArrayUtil::arrayBig(y, z, 5);
	for (int i = 0;i < 5;i++) cout << ArrayUtil::big[i] << ' '; //big 배열 출력
	cout << endl;
}
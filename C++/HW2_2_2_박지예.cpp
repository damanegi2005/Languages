// 연산자 오버로딩. 외부함수로 선언 후 friend로 가져오기 (헷갈린다..)
#include<iostream>
#include<string>
using namespace std;

class Matrix {
public:
	int arr[3];
	Matrix() {} //기본 생성자도 만들어줘야함!
	Matrix(int a, int b, int c) { //생성자
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
	}
	void show() {  //출력함수
		cout << "Matrix = {" << arr[0] << ' ' << arr[1] << ' ' << arr[2] << "}";
	}
	friend void operator>>(Matrix &t, int (&x)[3]); //friend로 가져오기.
	friend void operator<<(Matrix &t, int (&y)[3]);
};
void operator>>(Matrix &t, int (&x)[3]) { //줄 때 matrix의 객체 한개만!!
	x[0] = t.arr[0]; //그 객체의 멤버변수가 arr임. 그래서 t.arr 
	x[1] = t.arr[1];
	x[2] = t.arr[2];
}
void operator<<(Matrix &t, int (&y)[3]) {
	t.arr[0] = y[0];
	t.arr[1] = y[1];
	t.arr[2] = y[2];
}

int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	Matrix a(4, 3, 2), b;
	int x[3], y[3] = { 1,2,3 };
	a >> x; // a의 각 원소를 배열 x에 복사
	b << y; //배열 y의 각 원소를 b의 각 원소에 복사
	for (int i = 0;i < 3;i++)
		cout << x[i] << ' ';
	cout << endl;
	b.show();
}
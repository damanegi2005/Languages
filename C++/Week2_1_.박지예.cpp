#include <iostream>
using namespace std;

void func1(int *a, int size); //func1 프로토타입
void func2(int n); //func2 프로토타입

int main() {
	cout << "=====\n학과: 사이버보안\n학번: 2467013\n이름: 박지예\n=====";
	int n;
	int a[10]; //수 담을 배열 선언
	while (true) { //범위 내ㅐ 갯수 받을때까지 반복
		cout << "\n이진수 변환을 원하는 수는 몇개?(1~10): ";
		cin >> n; 
		if (n > 0 && n < 11)break; //범위 만족하면 break
		cout << "수의 범위는 1부터 10까지입니다\n";
	}
	for (int i = 0;i < n;i++) { //정수 입력받기
		cout << i+1 << "번째 정수(0~100) 입력: ";
		cin >> a[i]; //배열에 하나씩 넣기
		if (a[i] > 100 || a[i] < 0) { //만약 범위 밖일때
			i--;
			cout << "(0 이상의 정수를 입력하세요)\n";
			continue;
		}
	}
	func1(a, n); //func1 호출
	
}

void func1(int* a, int size) { //넘기기. 반복문
	for (int i = 0;i < size;i++)
	{
		func2(a[i]); //func2 호출
	}
}

void func2(int n) { // 정수 하나에대한 이진 출력. 
	int bin[8] = {}; //이진담을 배열
	int i = 0;
	cout << n << "의 이진표현: ";
	while (true) { //계속 반복
		if (n <= 0) break;
		bin[i] = n % 2;
		n = n / 2;
		i++;
	}
	
	for (int i = 0;i < 8;i++) //이진수 출력 부분
	{
		cout << bin[7-i]; //거꾸로 출력
	}
	cout << "\n";
}
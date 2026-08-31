#include<iostream>
#include<string>
using namespace std;
template<class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& reSize) {
	T* n = new T[sizeSrc];//새 배열 동적할당!!!!!! 그래야 리턴 가능.(참조로 하면 ㄱㄴ하긴함)
	reSize = 0;//겹치는거 개수

	//x하나씩 돌며 그 안에서 y 하나씩 도는데 하나도 안겹쳣으면 n에 넣어, 
	for (int i = 0;i < sizeSrc;i++) {
		bool found = false; //bool값 이용. 전체 돌때까지 false면 그때 추가!
		for (int k = 0;k < sizeMinus;k++) {
			if (src[i] == minus[k]) {
				found = true; //같은거 발견시 bool값 바꾸고 for문 나감.
				break;
			}
		}
		if (!found) {
			n[reSize] = src[i]; //오 인덱스는 reSizse!! 다른거 있을때마다 1씩 추가되니
			reSize++;
		}
	}
	return n;
}

int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	cout << "배열 x에서 배열 y를 빼기" << endl;
	int x[] = { 1,2,3,4,6,7 };
	cout << "배열 x: ";
	for (int i = 0;i < 6;i++)
		cout << x[i] << ' ';
	cout << endl;
	int y[] = { -3,4,10,1,0,3,6 };
	cout << "배열 y: ";
	for (int i = 0;i < 7;i++)
		cout << y[i] << ' ';
	cout << endl;
	int retSize;
	int* p = remove(x, 6, y, 7, retSize); //remove함수
	cout << "배열 x-y: ";
	if (retSize == 0) {
		cout << "남은 원소 없음" << endl;
		return 0;
	}
	else {
		for (int i = 0;i < retSize;i++)
			cout << p[i] << ' ';
		cout << endl;
		delete[] p;
	}
	cout << endl;
}
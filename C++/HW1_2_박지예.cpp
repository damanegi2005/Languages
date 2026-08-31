#include <iostream>
#include <string>
using namespace std;

class ArrayUtil {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* c=new int[size*2]; //이거 delete 
		for (int i = 0;i < size;i++) { //배열복사 c=s1 (x)
			c[i] = s1[i];
		}
		for (int i = 0;i < size;i++) {
			c[i + size] = s2[i];
		}
		return c;
	}
	static int* remove(int s1[],int s2[], int size, int& reSize) { //지우는 함수
		for (int i = 0;i < size;i++) {
			for (int k = 0;k < size;k++) {
				if (s1[i] == s2[k]){
					s1[i] = 0;
					reSize--;
					break;
				}
			}
		}
		int* newarray = new int[reSize];
		int j=0;
		for (int i = 0;i < size;i++) {
			if (s1[i] != 0) newarray[j++] = s1[i];
		}
		return newarray;
	
	}
}; //만약 같으면 


int main() {
		cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
		int n;
		cout << "정수배열크기 : ";
		cin >> n;
		int* s1 = new int[n]; //배열동적할당 
		int* s2 = new int[n];
		int &reSize = n;
		cout << "Input " << n << " integers for Array A\n"; //A배열 입력받기
		for (int i = 0;i < n;i++) {
			cin >> s1[i];
		}
		cout << "Input " << n << " integers for Array B\n"; //B배열 입력받기
		for (int i = 0;i < n;i++) {
			cin >> s2[i];
		}
		cout << "<배열 A와 B를 합친 배열>\n";
		int* a = ArrayUtil::concat(s1, s2, n); //헐 여기 s1[]아니고 s1이네. 
		for (int i = 0;i <(n * 2);i++) {
			cout << a[i]<<" ";
		}
		int* b = ArrayUtil::remove(s1, s2, n, reSize); //새 원소 출력
		cout << "\n<배열 A원소에서 배열 B 원소를 뺸 배열(원소: " << reSize << "개)>\n";
		for (int i = 0;i < reSize;i++) {
			cout << b[i] << " ";
		}

		delete[]s1; //delete 필요
		delete[]s2;
		delete[] b;
	}



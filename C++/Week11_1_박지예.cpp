//#include<iostream>
//using namespace std;
//int* concat(int a[], int sizea, int b[], int sizeb) {
//	try {
//		if (sizea == 0 || sizeb == 0) { throw "배열 크기 오류"; }
//		else if (sizea > 6 || sizeb > 7) { throw "배열 크기 오류"; }
//	}
//	int k = sizea + sizeb;
//	int n[k] = {};
//	for (int i = 0;i < sizea;i++) {
//		n[i] = a[i];
//	}
//	for (int i = 0;i < sizeb;i++) {
//		n[i + sizea] = b[i];
//	}
//}
//void print(int*a, int) {
//	for (int i = 0;i < sizeof(a);i++) {
//		cout << a[i];
//	}
//}
//int main() {
//	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
//	int x[] = { 1,2,3,4,5 };
//	int y[] = { 10,20,30,40,50,60 };
//	int a, b;
//	cout << "배열 x: ";
//	print(x, 5);
//	cout << "배열 y: ";
//	print(y, 6);
//	try {
//		cout << "\nconcat할 x 배열 원소 수: ";
//		cin >> a;
//		cout << "concat할 y 배열 원소 수: ";
//		cin >> b;
//		int* p = concat(x, a, y, b);
//		for (int n = 0;n < a + b;n++) cout << p[n] << ' ';
//		cout << endl;
//		delete[]p;
//
//	}
//	catch (const char* failCode) {
//		cout << "오류 내용: " << failCode << endl;
//	}
//	catch(exception) {
//		cout << " exception 오류 발생" << endl;
//	}
//	catch (...) {
//		cout << "알 수 없는 오류 발생" << endl;
//	}
//}
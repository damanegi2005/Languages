#include<iostream>
#include<string>
using namespace std;

class Shape { //부모클래스 (추상클래스임)
protected:
	string name;
	int width;
	int height;
public:
	virtual ~Shape() {};
	virtual double getArea() = 0; //순수 가상 함수
	virtual string getName() { return name; }
};

class Oval :public Shape { //추상클래스 상속받을 때 추상클래스 안되려면 다 재정의. 
public:
	Oval(string a, int b, int c) { //생성자
		name = a;
		width = b;
		height = c;
	}
	double getArea() { return (3.14 * width * height) / 4; } //오버라이딩. 
};
class Rectangle : public Shape { //사각형
public:
	Rectangle(string a, int b, int c) {
		name = a;
		width = b;
		height = c;
	}
	double getArea() { return width * height; }
};
class Triangle : public Shape { //삼각형
public:
	Triangle (string a, int b, int c) {
		name = a;
		width = b;
		height = c;
	}
	double getArea() { return (width * height) / 2; }
};
int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	Shape* p[3]; //shape 클래스 포인터 배열
	p[0] = new Oval("빈대떡", 20, 30); //업캐스팅. 하나씩 생성됨
	p[1] = new Rectangle("토스트", 10, 15);
	p[2] = new Triangle("피자", 20, 30);
	for (int i = 0;i < 3;i++) {
		cout << p[i]->getName() << " 넓이: " << p[i]->getArea() << endl; //동적바인딩
	}
	for (int i = 0;i < 3;i++) delete p[i]; //하나씩 삭제
}
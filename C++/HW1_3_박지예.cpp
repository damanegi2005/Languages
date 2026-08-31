#include <iostream>
#include <string>
using namespace std;

class Book {
	char* title; 
	int price;
public:
	Book(const char* title, int price) { //인자있는 생성자
		int len = strlen(title) + 1;
		this->title = new char[len];
		strcpy_s(this->title, len, title);
		this->price = price;
	} 
	Book() :Book("모름", 0) {} //인자없는 생성자. 위임생성자
	Book(const Book& c) { //복사 생성자 왜 다 this->아니야???????? c에서 복사하는듯
		title = new char[strlen(c.title) + 1];
		strcpy_s(title, strlen(c.title) + 1, c.title);
		price = c.price;
	}
	~Book() { delete[] title; } //소멸자

	void set(const char* title, int price) { //set 함수
		delete[] this->title;
		this->title = new char[strlen(title) + 1];
		strcpy_s(this->title, strlen(title) + 1, title);
		this->price = price;
	}
	void show() {
		cout << title << ' ' << price << "원" << endl;
	}
}; //얘네 다 대박


void main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	Book cpp("CPP", 15000);
	Book java = cpp; //이때 복사생성자 호출되나.
	Book python;
	java.set("JAVA", 12000);
	cpp.show();
	java.show();
	python.show();
}
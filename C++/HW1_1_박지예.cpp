#include <iostream>
#include <string>
using namespace std;

class Time {
	int hour, minute;
public:
	static bool isValid(int hour, int minute) { //시간 범위 맞는지 체크
		if ((hour >= 0 && hour <= 23) && (minute >= 0 && minute <= 59)) return true;
		else return false;
	} //static임
	void setTime(int hour, int minute) {
		if (isValid(hour, minute) == true) { //true면 값 저장
			this->hour = hour;
			this->minute = minute;
		}
	}
	int getTime(char ch) { //걍 정수값 반환
		if (ch == 'H' || ch == 'h') return this->hour;
		else if (ch == 'M' || ch == 'm') return this->minute;
		}
};

void main() {
	Time t; //객체 생성
	int hour, minute;
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	cout << "Hour: ";
	cin >> hour;
	cout << "Minute: ";
	cin >> minute;
	if (Time::isValid(hour, minute) == true) { //static 호출
		t.setTime(hour, minute);
		cout << t.getTime('h') << ":" << t.getTime('m'); //시간 출력
	}
	else {
		cout << "Wrong input";
	}
	}
#include<iostream>
#include<map> //map 이용
#include<string>
using namespace std;

int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	map<string, string> dic; //map 객체 만들기
	cout << "<이름과 password 관리 프로그램>\n";
	while (true) { //계속반복
		int n;
		cout << "1. insertion  2. search  3. delete  4. exit: ";
		cin >> n;
		cin.ignore(1); //숫자입력 후 엔터 지우기
		if (n == 1) { //insertion 
			string name, pw;
			cout << "이름: ";
			getline(cin, name);
			cout << "password: ";
			getline(cin, pw);
			dic[name] = pw; //dic에 쌍 추가!!!!!!!
		}
		if (n == 2) { //search
			string name, pw;
			cout << "찾을 이름은? ";
			getline(cin, name);
			if (dic.find(name) == dic.end()) cout << "해당 이름 없음\n"; //if문 작성방법
			else {
				while (true) {
					cout << "password는? ";
					getline(cin, pw);
					if (dic.at(name) == pw) { //at로 원소 탐색
						cout << "통과!\n";
						break;
					}
					cout << "실패\n";
				}
			}
		}
		if (n == 3) { //deletion
			cout << "삭제할 이름은? ";
			string name;
			getline(cin, name);
			if (dic.find(name) == dic.end()) cout << "해당 이름 없음\n"; 
			else dic.erase(name); //erase함수
		}
		if (n == 4) { //exit
			break;
		}
		
	}
	cout << "이름\t비밀번호\n";
	auto prints = [](string a, string b) {cout << a << "\t" << b << endl;};
	for (auto it = dic.begin(); it != dic.end();it++) { //이상한 긴 선언대신 auto
		prints(it->first, it->second); //first, second 사용
	}
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book { //클래스 정의
	int year;
	 string title;
	 string author;
public:
	 Book(int n, string t, string a) { //생성자. 대입
		this->year = n;
		this->title = t;
		this->author = a;
 }
	int getyear() { return year; } //getter
	 string gettitle() { return title; } //getter
	string getauthor() { return author; } //getter
};

int main() {
		cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	vector<Book> v; //벡터 객체 생성
	int number = 0; //count하는 변수
	while (true) {
	int n;
	string t;
	string a;
	cout << "책 정보 입력(연도가 -1이면 입력 종료)\n";
	cout << "year: ";
	cin >> n; //년도 넣기
	cin.ignore(1); //중요!!!!!!!! 엔터 지우는거
	if (n == -1) break; //-1이면 입력종료
	cout << "title: ";
	 getline(cin, t); //제목 넣기
	cout << "author: ";
	getline(cin, a); //저자 넣기
	v.push_back(Book(n, t, a)); //헐 이렇게 객체 추가!!!!
	number++;
 }
	cout << "<전체 책 리스트>\n"; //전체 책 리스트 출력
	for (int i = 0; i < v.size(); i++) { //size함수 사용
		cout << "year: " << v[i].getyear() << " title: " << v[i].gettitle() << " author: " << v[i].getauthor() << endl;
	}
	cout << "저장된 책 수: " << number << endl << endl;

	cout << "검색할 저자명: ";
	string search;
	getline(cin, search);
	bool authoryes = false; //기본 bool값 false로 지정
	for (auto it = v.begin(); it != v.end(); it++) { //iterator로 찾기
	if (it->getauthor()==search) //비교하기
	 {
		cout << it->getyear() << " " << it->gettitle() << " " << it->getauthor() << endl;
		authoryes = true; //bool을 true로 바꾸기
		break;
	}
 }
	if (!authoryes) { cout << "해당 저자 없음"; } //만약 아직 false면 출력

	cout << "검색할 년도: ";
	int searchyear;
	bool yearyes = false;
	 cin >> searchyear;
	 for (auto y :v) { //범위지정 for문 사용!!!!!!!
		 if (y.getyear() == searchyear) {
			 cout << y.getyear() << " " << y.gettitle() << " " << y.getauthor();
			 yearyes = true; //bool값
			 break;
		 }
 }
	 if (!yearyes) cout << "해당 연도 없음";
}



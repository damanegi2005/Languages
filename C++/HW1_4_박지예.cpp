#include <iostream>
#include <string>
using namespace std;

class StudentInformation { //이름과 id
	string name;
	string id;
public:
	void displayID(void) { cout << this->name << "\t" << this->id << "\t"; }
	void idinput(string name, string id) { this->name = name; this->id = id; }
	void setID(string id) { this->id = id; }
	void setName(string name) { this->name = name; }
	string getName(void) { return this->name; }
	string getID(void) { return this->id; }
	
};

class StudentScore :public StudentInformation { //상속, public으로!!
	int korean;
	int math;
	int english;
	int sum;
	double avg;
public:
	void displayScore() { 
		this->displayID();
		cout << this->korean << "\t" << this->math << "\t" << this->english << "\t" << this->sum << "\t" << this->avg<<"\n";
	}
	void scoreInput(int korean, int english, int math){
		this->korean = korean;
		this->english = english;
		this->math = math;
	}
	void setSum(void){
		this->sum = (this->korean + this->math + this->english);
	}
	void setAvg(void) { this->avg = this->sum / float(3); } //형변환 필요
};

void arrayInput(StudentScore* ss, int num) { //정보 입력함수
	for (int i = 0;i < num;i++) {
		cout << "ID: ";
		string id;
		cin >> id;
		ss[i].setID(id);

		cout << "Name: ";
		string name;
		cin >> name;
		cin.ignore(); //빈칸처리
		ss[i].setName(name);
		cout << "Korean: ";
		int korean;
		cin >> korean;
		cout << "Math: ";
		int math;
		cin >> math;
		cout << "English: "; 
		int english;
		cin >> english;
		ss[i].scoreInput(korean, math, english);
		cout << endl;
	}
	

}
void arrayOutput(StudentScore* ss, int num) { //정보 출력함수
	cout << "\nName	ID	KOREAN	MATH	ENGLISH	SUM	AVG\n";
	for (int i = 0;i < num;i++) {
		ss[i].displayScore();
	}
}
void arrayCompute(StudentScore* ss, int num) { //합계,평균 계산
	for (int i = 0;i < num;i++) {
		ss[i].setSum();
		ss[i].setAvg();
	}
}


void main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	int num;
	cout << "Number of students : ";
	cin >> num;
	StudentScore* ss = new StudentScore[num]; //객체 동적 배열 생성
	arrayInput(ss, num);
	arrayCompute(ss, num);
	arrayOutput(ss, num);
	delete[]ss;
}
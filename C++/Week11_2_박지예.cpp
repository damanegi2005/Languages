#include<iostream>
#include<cstdlib> //rand(), srand() 포함하는 헤더파일
#include<ctime> //time() 포함하는 헤더파일
using namespace std;

class Game { //Game 클래스
	int rsp_you, rsp_cmp; //0,1,2
	int you = 0, cmp = 0; //이긴횟수 저장 변수
public:
	void play() { //play() 멤버함수
		while (1) { //무한 반복
			try {
				cout << "가위(0), 바위(1), 보(2) :";
				cin >> rsp_you;
				if (rsp_you < 0 || rsp_you>2) { throw "잘못된 입력"; } //예외처리
				rsp_cmp = rand() % 3; //컴퓨터는 random
				writeOutput(rsp_you, rsp_cmp);
				if (you == 3 || cmp == 3) { cout << "Game finished\n"; break; } //break 조건
			}
			catch (const char* f) { cout << "예외발생: " << f << "\n"; }
		}
	}

void writeOutput(int n1, int n2) { //n1은 you가 선택한 값, n2는 computer가 선택한값
		switch (n1) { //숫자를 가위바위보로 바꾸기(you)
		case 0:
			cout << "You: 가위\n"; //switch case 
			break;
		case 1:
			cout << "You: 바위\n";
			break;
		case 2:
			cout << "You: 보\n";
			break;
		}
		switch (n2) { //숫자를 가위바위보로 바꾸기 (computer)
		case 0:
			cout << "computer: 가위\n";
			break;
		case 1:
			cout << "computer: 바위\n";
			break;
		case 2:
			cout << "computer: 보\n";
			break;
		}
		if ((n1 == 0 && n2 == 1) || (n1 == 1 && n2 == 2) || (n1 == 2 && n2 == 0)) { //컴퓨터가 이긴 경우
			cmp++; //1증가
			cout << "Winner: computer\n";
		}
		else if ((n1 == 1 && n2 == 0) || (n1 == 2 && n2 == 1) || (n1 == 0 && n2 == 2)) { //내가 이긴경우
			you++; //1증가
			cout << "Winner: you\n";
		}
		else { cout << "Tie\n"; } //무승부
		cout << "You(" << you << ")  Computer(" << cmp << ")\n";
	}
};
int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	Game g; //객체 생성
	g.play();
}
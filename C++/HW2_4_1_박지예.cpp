//vector 사용
#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

class Student {
	string id;
	string name;
public:
	Student(string a, string b) { id = a;name = b; }
	string getId() { return id; }
	string getName() { return name; }
};

int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	cout << "Input ID and name\n";
	vector<Student> v; //아 Student 객체를 저장하니까!!!
	while (1) {
		string id, name;
		cin >> id >> name;
		if (id == "0" && name == "0") break; //헐 작은따옴표 안돼
		Student a(id, name);
		v.push_back(a);
	}
	cout << "\n<Student LIst>\n";
	string idofmax, idofmin, nameofmax, nameofmin; //사람들 이름
	int maxname = v.at(0).getName().size(); //가장 긴 이름 길이
	int minname = maxname; //가장 짧은 이름 길이
	for (auto mem : v) {
		cout << mem.getId() << "\t" << mem.getName() << endl; //아 private이였구나. 그리고 mem은 객체 그자체구나
		if (mem.getName().size() > maxname) {
			maxname = mem.getName().size(); //헐 string은 strlen 못쓰네. 길이갱신
			idofmax = mem.getId();
			nameofmax = mem.getName();
		}
		if (mem.getName().size() < minname) {
			minname = mem.getName().size();
			idofmin = mem.getId();
			nameofmin = mem.getName();
		}
	}
	cout << "학생 수: " << v.size() << endl;
	cout << "<가장 긴 이름을 가진 학생>\n";
	cout << "ID: " << idofmax  << " Name: " << nameofmax;
	cout << "\n<가장 짧은 이름을 가진 학생>\n";
	cout << "ID: " << idofmin << " Name: " << nameofmin;
	
}
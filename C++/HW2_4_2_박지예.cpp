//map 사용
#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

int main() {
	cout << "=====\n학과:사이버보안\n학번:2467013\n이름:박지예\n=====\n";
	cout << "Input ID and name\n";
	map<string, string> dic;
	while (1) {
		string id, name;
		cin >> id >> name;
		if (id == "0" && name == "0") break; //헐 작은따옴표 안돼
		dic[id] = name;
	}

	cout << "\n<Student LIst>\n";
	string idofmax, idofmin, nameofmax, nameofmin; //사람들 이름
	int maxname = 0; //가장 긴 이름 길이
	int minname = 10000000; //가장 짧은 이름 길이
	for (auto it = dic.begin();it != dic.end();it++) {
		cout << it->first << "\t" << dic[it->first]<<endl; //first 쓰네???
		if (dic[it->first].length() > maxname) {
			maxname = dic[it->first].length(); //value는 dic[it->first]로 사용.
			idofmax = it->first;
			nameofmax = dic[it->first];
		}
		if (dic[it->first].length() < minname) {
			minname = dic[it->first].length();
			idofmin = it->first;
			nameofmin = dic[it->first];
		}
	}

	cout << "학생 수: " << dic.size() << endl;
	cout << "<가장 긴 이름을 가진 학생>\n";
	cout << "ID: " << idofmax << " Name: " << nameofmax;
	cout << "\n<가장 짧은 이름을 가진 학생>\n";
	cout << "ID: " << idofmin << " Name: " << nameofmin;
}
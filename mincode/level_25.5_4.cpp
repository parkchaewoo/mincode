//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//
//	vector<string> v;
//	while (true) {
//		int idx = str.find('.');
//		v.push_back(str.substr(0, idx));
//		if (idx == str.npos) break;
//		str = str.substr(idx + 1);
//	}
//	int day = 0;
//	int month = 0;
//	//cout << v[2].size();
//	if (v[2].size() == 2) {
//		if (v[2] == "XX") day = 31;
//		else if (v[2][0] == 'X') day = 3;
//		else if (v[2][1] == 'X') day = 10;
//		else day = 1;
//	}
//	else {
//		if (v[2] == "X") day = 9;
//		else day = 1;
//	}
//
//	if (v[1].size() == 2) {
//		if (v[1] == "XX") month = 2;
//		else if (v[1][0] == 'X') month = 1;
//		else if (v[1][1] == 'X') month = 1;
//		else month = 1;
//	}
//	else {
//		if (v[1] == "X") month = 9;
//		else day = 1;
//	}
//	cout << month << ' ' << day << endl;
//	cout << month * day << endl;
//
//	return 0;
//}
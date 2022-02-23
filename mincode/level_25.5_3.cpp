//#include<iostream>
//#include<string>
//using namespace std;
//int buffer[200] = { 0 };
//
//bool AI(string str) {
//	//1
//	if (str.find("bad") != str.npos) return false;
//	if (str.find("no") != str.npos) return false;
//	if (str.find("puck") != str.npos) return false;
//	//2
//	if (str.find("______") != str.npos) return false;
//	//3,4 init;
//	for (int i = 0; i < str.size(); i++) buffer[str[i]]++;
//	//3
//	for (int i = 'A'; i <= 'Z'; i++) {
//		if (buffer[i] > 5) return false;
//	}
//	for (int i = 'a'; i <= 'z'; i++) {
//		if (buffer[i] > 5) return false;
//	}
//	//4
//	for (int i = '0'; i <= '9'; i++) {
//		if (buffer[i] >= 1) return false;
//	}
//	return true;
//}
//
//int main() {
//	string str;
//	cin >> str;
//	if (AI(str)) cout << "pass" << endl;
//	else cout << "fail" << endl;
//
//}
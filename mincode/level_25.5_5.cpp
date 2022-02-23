//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int findIntToCharIndex(string str) {
//	for (int i = 0; i < str.size() - 1; i++) {
//		if (isdigit(str[i]) && isalpha(str[i+1])) return i + 1;
//	}
//	return -1;
//}
//int findCharToIntIndex(string str) {
//	for (int i = 0; i < str.size() - 1; i++) {
//		if (isalpha(str[i]) && isdigit(str[i + 1])) return i + 1;
//	}
//	return -1;
//}
//
//int main() {
//	string str;
//	cin >> str;
//	str += 'A';
//	vector<string> v;
//	while (true) {
//		int checkPoint = findIntToCharIndex(str);
//		//cout << str << endl;
//		if (checkPoint == -1) break;
//		v.push_back(str.substr(0, checkPoint));
//		str = str.substr(checkPoint);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		//cout << v[i] << endl;
//		int checkPoint = findCharToIntIndex(v[i]);
//		//cout << checkPoint << endl;
//		cout << v[i].substr(0, checkPoint) << '#' << stoi(v[i].substr(checkPoint))+17<<endl;
//	}
//}
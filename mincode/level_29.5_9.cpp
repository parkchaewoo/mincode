//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string str1, str2;
//	cin >> str1 >> str2;
//	if (str1.size() > str2.size()) {
//		string buffer = str2;
//		str2 = str1;
//		str1 = buffer;
//	}
//
//	for (int i = str1.size(); i > 0; i--) {
//		for (int j = 0; j <= str2.size() - i; j++) {
//			string buffer = str1.substr(j, i);
//			int idx = str2.find(buffer);
//			if (idx != str2.npos) {
//				cout << buffer << endl;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
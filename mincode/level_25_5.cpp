//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	str += '|';
//	while (true) {
//		int idx = str.find('|');
//		if (idx == str.npos) break;
//		string buffer = str.substr(0, idx);
//		//cout << buffer << endl;
//		int checkPoint = buffer.find('@');
//		int endPoint = buffer.find('.');
//		cout << "[#" << buffer.substr(0, checkPoint) << "] " << buffer.substr(checkPoint + 1,endPoint-checkPoint-1) << endl;
//		str = str.substr(idx + 1);
//	}
//}
//#include<iostream>
//#include<string>
//using namespace std;
//
//const int branch = 2, level = 3;
//char name[branch] = { 'W','L' };
//char path[level] = { 0 };
//
//string winCount(char path[3]) {
//	string str = "(";
//	char winCnt = '0';
//	char loseCnt = '0';
//	for (int i = 0; i < 3; i++) {
//		if (path[i] == 'W') {
//			str += "��";
//			winCnt++;
//		}
//		if (path[i] == 'L') {
//			str += "��";
//			loseCnt++;
//		}
//	}
//	//cout << winCnt << ' ' << loseCnt << endl;
//	str += ')';
//	string result = "";
//	if (winCnt == '0') {
//		result += loseCnt;
//		result += "��";
//	}
//	else if (loseCnt == '0') {
//		result += winCnt;
//		result += "��";
//	}
//	else {
//		result += winCnt;
//		result += "��";
//		result += loseCnt;
//		result += "��";
//	}
//	//cout << result << endl;
//	return result + str;
//}
//void sol(int nowLevel) {
//	if (nowLevel >= level) {
//		cout << winCount(path)<<endl;
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		path[nowLevel] = name[i];
//		sol(nowLevel + 1);
//		path[nowLevel] = 0;
//	}
//}
//
//int main() {
//	sol(0);
//
//	return 0;
//}
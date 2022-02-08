//#include<iostream>
//using namespace std;
//
//int branch = 3;
//int level;
//int cnt = 0;
//char name[] = { 'A','B','C' };
//char path[10] = { 0 };
//
//bool isSame(char path[10], int level) {
//	for (int i = 1; i < level; i++) {
//		if (path[i] != path[i - 1]) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void sol(int nowLevel) {
//	if (nowLevel >= level) {
//		if (isSame(path, level)) {}
//		else cnt++;
//		
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		path[nowLevel] = name[i];
//		sol(nowLevel + 1);
//	}
//}
//
//int main() {
//	cin >> level;
//	sol(0);
//	cout << cnt << endl;
//	return 0;
//}
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
//
//#include<iostream>
//using namespace std;
//
//int branch = 3, level;
//char name[] = { 'A','B','C' };
//char path[10] = { 0 };
//int cnt = 0;
//
//void show() {
//	for (int i = 0; i < level; i++) {
//		cout << path[i] << ' ';
//	}
//	cout << endl;
//}
//
//
//bool isNotSame(char path[10], int level) {
//	if (level <= 2) return true;
//	for (int i = 2; i < level; i++) {
//		if ((path[i] == path[i - 1]) && (path[i - 1] == path[i - 2])) return false;
//	}
//	return true;
//}
//
//
//void chocolate(int nowLevel) {
//	if (nowLevel >= level) {
//		if (isNotSame(path,nowLevel)) {
//			cnt++;
//			//show();
//		}
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		path[nowLevel] = name[i];
//		chocolate(nowLevel + 1);
//		path[nowLevel] = 0;
//	}
//}
//
//int main() {
//	cin >> level;
//	chocolate(0);
//	cout << cnt << endl;
//	return 0;
//}
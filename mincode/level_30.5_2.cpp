//#include<iostream>
//using namespace std;
//
//int branch = 2, level;
//char path[10] = { 0, };
//char name[] = { 'o' ,'x' };
//
//void sol(int nowLevel) {
//	if (nowLevel >= level) {
//		for (int i = 0; i < level; i++) cout << path[i];
//		cout << endl;
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		path[nowLevel] = name[i];
//		sol(nowLevel + 1);
//		path[nowLevel] = 0;
//	}
//}
//int main() {
//	cin >> level;
//	sol(0);
//
//	return 0;
//}
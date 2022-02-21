//#include<iostream>
//
//using namespace std;
//
//const int branch = 4, level = 3;
//int used[branch] = { 0 };
//char path[level ] = { 0 };
//char name[branch] = { 0 };
//
//void sol(int nowLevel) {
//	if (nowLevel >= level) {
//		for (int i = 0; i < level; i++) {
//			cout << path[i];
//		}
//		cout << endl;
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		if (used[i] == 1) continue;
//		used[i] = 1;
//		path[nowLevel] = name[i];
//		sol(nowLevel + 1);
//		used[i] = 0;
//		path[nowLevel] = 0;
//	}
//}
//
//int main() {
//	for (int i = 0; i < branch; i++) {
//		cin >> name[i];
//	}
//	sol(0);
//	return 0;
//}
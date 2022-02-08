//#include<iostream>
//using namespace std;
//
//int branch = 4;
//int level = 4;
//int cnt = 0;
//char path[10] = { 0 };
//char name[4] = { 0 };
//
//void sol(int nowLevel) {
//	if (nowLevel >= level) {
//		cnt++;
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		if (nowLevel != 0) {
//			if (name[i] == 'B' && path[nowLevel - 1] == 'T') continue;
//			if (name[i] == 'T' && path[nowLevel - 1] == 'B') continue;
//		}
//		
//		path[nowLevel] = name[i];
//		sol(nowLevel + 1);
//	}
//}
//
//int main() {
//	for (int i = 0; i < branch; i++) {
//		cin >> name[i];
//	}
//	sol(0);
//	cout << cnt << endl;
//	return 0;
//}
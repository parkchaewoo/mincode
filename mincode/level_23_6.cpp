//#include<iostream>
//#include<math.h>
//#include<cstring>
//using namespace std;
//
//char name[5] = {0};
//int branch = 5; int level = 4;
//char path[10] = { 0 };
//int cnt = 0;
//
//void sol(int nowLevel) {
//
//	if (nowLevel >= level) {
//		cnt++; 
//		return;
//	}
//
//
//	for (int i = 0; i < branch; i++) {
//		if (nowLevel != 0) {
//			if ((abs(name[i]) - abs(path[nowLevel - 1])) > 3) continue;
//			if ((abs(name[i]) - abs(path[nowLevel - 1])) < -3) continue;
//		}
//		path[nowLevel] = name[i];
//		sol(nowLevel + 1);
//	}
//}
//
//
//int main(void) {
//	for (int i = 0; i < branch; i++) {
//		cin >> name[i];
//	}
//	sol(0);
//	cout << cnt;
//
//	return 0;
//}
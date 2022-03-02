//#include<iostream>
//using namespace std;
//
//int branch, level = 3;
//int cnt = 0;
//int used[10] = { 0, };
//void sol(int nowLevel) {
//	if (nowLevel >= level) {
//		cnt++;
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		if (used[i] == 1) continue;
//		used[nowLevel] = 1;
//		sol(nowLevel + 1);
//		used[nowLevel] = 0;
//	}
//}
//
//int main() {
//	cin >> branch;
//	sol(0);
//	cout << cnt << endl;
//
//	return 0;
//}
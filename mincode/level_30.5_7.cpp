//#include<iostream>
//using namespace std;
//int arr[5] = { 0 };
//int branch = 5, level = 5;
//int path[5] = { 0, };
//int used[5] = { 0, };
//int sum = 0;
//int cnt = 0;
//
//void sol(int nowLevel) {
//	for (int i = 0; i < 5; i++) {
//		sum += path[i];
//	}
//	if (sum >= 10 && sum <= 20) { 
//		for (int i = 0; i < 5; i++) cout << path[i] << ' ';
//		cout << "    "<< sum<<endl;
//		cnt++; 
//	}
//	sum = 0;
//
//	if (nowLevel >= level) {
//		
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		if (used[i] == 1) continue;
//		used[i] = 1;
//		path[nowLevel] = arr[i];
//		sol(nowLevel + 1);
//		used[i] = 0;
//		path[nowLevel] = 0;
//	}
//}
//
//int main() {
//	for (int i = 0; i < 5; i++) cin >> arr[i];
//	sol(0);
//	cout << cnt << endl;
//	return 0;
//}
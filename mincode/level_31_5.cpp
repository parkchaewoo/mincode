//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//vector<int> v;
//vector<int>path;
//int used[10] = { 0 };
//int small = 1000000;
//int sum = 0;
//int branch, level = 3;
//
//void DFS(int nowLevel) {
//	if (nowLevel >= level) {
//		for (int i = 0; i < 3; i++) {
//			sum *= 10;
//			sum += path[i];
//		}
//		//cout << sum << endl;
//		if (sum >= 100) {
//			if (sum < small) small = sum;
//		}
//		sum = 0;
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		if (used[i] == 1) continue;
//		path.push_back(v[i]);
//		used[i] = 1;
//		DFS(nowLevel + 1);
//		path.pop_back();
//		used[i] = 0;
//
//	}
//}
//
//int main() {
//	cin >> branch;
//	for (int i = 0; i < branch; i++) {
//		int input;
//		cin >> input;
//		v.push_back(input);
//	}
//
//	DFS(0);
//
//	cout << small << endl;
//
//	return 0;
//}
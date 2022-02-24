//#include<iostream>
//
//using namespace std;
//
//int map[101][101] = { 0 };
//int n;
//int used[101] = { 0 };
//
//void dfs(int now) {
//	cout << now << ' ';
//	
//	for (int to = 0; to < n; to++) {
//		if (map[now][to] == 0) continue;
//		if (used[to] != 0) continue;
//
//		used[to] = 1;
//		dfs(to);
//		used[to] = 0;
//
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//	used[0] = 1;
//	dfs(0);
//}
//#include<iostream>
//using namespace std;
//
//int map[6][6] = {
//	0, 0, 1, 0, 1, 1,
//	1, 0, 0, 1, 0, 0,
//	0, 0, 0, 0, 1, 0,
//	1, 0, 0, 0, 0, 0,
//	1, 0, 0, 0, 0, 0,
//	0, 0, 0, 0, 0, 0,
//};
//int from, desitination;
//int cnt = 0;
//int minCnt = 1000000;
//int used[10] = { 0 };
//
//
//void dfs(int now) {
//	//cout << now << ' ';
//	if (now == desitination - 1) {
//		if (cnt < minCnt) minCnt = cnt;
//		return;
//	}
//
//	for (int to = 0; to < 6; to++) {
//		if (map[now][to] == 0) continue;
//		if (used[to] != 0) continue;
//
//		used[to] = 1;
//		cnt++;
//		dfs(to);
//		used[to] = 0;
//		cnt--;
//	}
//}
//
//int main() {
//	cin >> from >> desitination;
//	from;
//	used[from] = 1;
//	dfs(from);
//	if (minCnt == 1000000) cout << 0 << endl;
//	else cout << minCnt << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int arr[6][6] = {
//	0, 0, 1, 0, 2, 0,
//	5, 0, 3, 0, 0, 0,
//	0, 0, 0, 0, 0, 7,
//	2, 0, 0, 0, 8, 0,
//	0, 0, 9, 0, 0, 0,
//	4, 0, 0, 7, 0, 0
//};
//
//int used[100] = { 0, };
//int sum = 0;
//void DFS(int now) {
//	cout << now << ' ' << sum << endl;
//
//	for (int to = 0; to < 6; to++) {
//		if (arr[now][to] == 0) continue;
//		if (used[to] != 0) continue;
//		used[to] = 1;
//		sum += arr[now][to];
//		DFS(to);
//		sum -= arr[now][to];
//
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	used[n] = 1;
//	DFS(n);
//}
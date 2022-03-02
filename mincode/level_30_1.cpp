//#include<iostream>
//#include<queue>
//using namespace std;
//
//int map[6][6] = {
//	0,0,1,1,0,1,
//	0,0,0,1,1,1,
//	0,0,0,0,1,1,
//	0,0,0,0,0,0,
//	1,0,0,0,0,1,
//	0,0,0,0,0,0
//};
//
//int used[100] = { 0, };
////
////int main() {
////	queue<int> q;
////	int n;
////	cin >> n;
////	used[n] = 1;
////	q.push(n);
////	while (!q.empty()) {
////		int now = q.front();
////		q.pop();
////
////		for (int to = 0; to < 6; to++) {
////			if (map[now][to] == 0) continue;
////			if (used[to] != 0) continue;
////			cout << to << ' ';
////			q.push(to);
////		}
////	}
////}
//
//void DFS(int now) {
//	cout << now << ' ';
//
//	for (int to = 0; to < 6; to++) {
//		if (map[now][to] == 0) continue;
//		if (used[to] != 0) continue;
//
//		used[to] = 1;
//		DFS(to);
//		//used[to] = 0;
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	used[n] = 1;
//	DFS(n);
//}
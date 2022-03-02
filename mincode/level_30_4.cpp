//#include<iostream>
//#include<queue>
//
//using namespace std;
//int used[10] = { 0, };
//
//int main() {
//	int arr[6][6] = {
//		0, 0, 0, 0, 1, 0,
//		1, 0, 1, 0, 0, 1,
//		1, 0, 0, 1, 0, 0,
//		1, 1, 0, 0, 0, 0,
//		0, 1, 0, 1, 0, 1,
//		0, 0, 1, 1, 0, 0
//	};
//	int from;
//	cin >> from;
//	used[from] = 1;
//	queue<int>q;
//	q.push(from);
//	while (!q.empty()) {
//		int now = q.front();
//		q.pop();
//
//		cout << now << endl;
//
//		for (int to = 0; to < 6; to++) {
//			if (arr[now][to] == 0) continue;
//			if (used[to] == 1) continue;
//			used[to] = 1;
//			q.push(to);
//		}
//	}
//}
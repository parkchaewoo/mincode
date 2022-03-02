//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int main() {
//	int arr[6][6] = {
//		0, 1, 0, 0, 1, 0,
//		0, 0, 1, 0, 0, 1,
//		0, 0, 0, 1, 0, 0,
//		0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0
//	};
//
//	queue<int> q;
//	int from;
//	cin >> from;
//	q.push(from);
//
//	while (!q.empty()) {
//		int now = q.front();
//		q.pop();
//
//		cout << now << ' ';
//
//		for (int to = 0; to < 6; to++) {
//			if (arr[now][to] == 0) continue;
//			
//			cout << now << ' ';
//			q.push(to);
//		}
//	}
//}
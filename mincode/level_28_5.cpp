//#include<iostream>
//#include<vector>
//using namespace std;
//int arr[100][100] = { 0 };
//int n;
//vector<int> path;
//void DFS(int now) {
//	path.push_back(now);
//	if (path.size() == 3) {
//		for (int i = 0; i < path.size(); i++) cout << path[i] << ' ';
//		cout << endl;
//		return;
//	}
//
//	for (int to = 0; to < n; to++) {
//		if (arr[now][to] == 0) continue;
//		DFS(to);
//		path.pop_back();
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	DFS(0);
//}
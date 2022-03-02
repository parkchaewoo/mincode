//#include<iostream>
//#include<vector>
//using namespace std;
//
//int map[6][6] = { 0, };
//int used[10] = { 0, };
//vector<char> v;
//
//void show() {
//	for (int i = 0; i < v.size(); i++) cout << v[i];
//	cout << endl;
//	//for (int i = 0; i < 10; i++) cout << used[i] << ' ';
//	//cout << endl;
//}
//
//void DFS(int now) {
//	int cnt = 0;
//	for (int to = 0; to < 6; to++) {
//		if (map[now][to] == 0) cnt++;
//	}
//	if (cnt == 6) {
//		show();
//	}
//
//	for (int to = 0; to < 6; to++) {
//		if (map[now][to] == 0) continue;
//		if (used[to] == 1) continue;
//		v.push_back(to + 'A');
//		used[now] = 1;
//
//		DFS(to);
//
//		used[now] = 0;
//		v.pop_back();
//	}
//}
//
//int main() {
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j < 6; j++) {
//			cin >> map[i][j];
//		}
//	}
//	used[0] = 1;
//	v.push_back('A');
//	DFS(0);
//}
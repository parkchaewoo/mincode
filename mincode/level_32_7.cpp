//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int> v[3][3];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int y, x,num;
//		cin >> y >> x>>num;
//		while (num > 0) {
//			v[y][x].push_back(num % 10);
//			num /= 10;
//		}
//		reverse(v[y][x].begin(), v[y][x].end());
//	}
//
//	int check;
//	cin >> check;
//	for (int i = 0; i < check; i++) {
//		int storm;
//		cin >> storm;
//		for (int y = 0; y < 3; y++) {
//			for (int x = 0; x < 3; x++) {
//				if (v[y][x].size() == 0) continue;
//				v[y][x].back() -= storm;
//				if (v[y][x].back() <= 0) v[y][x].pop_back();
//			}
//		}
//	}
//
//	int cnt = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < v[i][j].size(); k++) {
//				if (!v[i][j].empty()) cnt++;
//			}
//		}
//	}
//	cout << cnt << endl;
//
//	return 0;
//}
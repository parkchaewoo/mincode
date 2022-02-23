//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//vector<vector<int>> v(4);
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			int edge;
//			cin >> edge;
//			if (edge == 0) continue;
//			v[i].push_back(j);
//		}
//	}
//	int max = v[0].size();
//	int maxIdx = 0;
//	for (int i = 1; i < 4; i++) {
//		if (v[i].size() > max) {
//			max = v[i].size();
//			maxIdx = i;
//		}
//	}
//	cout << char('A' + maxIdx) << endl;
//	return 0;
//}
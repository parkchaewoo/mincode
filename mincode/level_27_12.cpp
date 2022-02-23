//#include<iostream>
//using namespace std;
//int map[5][4] = { 0 };
//
//void showMap() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//bool isCheck(int row) {
//	int n;
//	int cnt = 0;
//	for (int i = 0; i < 4; i++) {
//		if (map[row][i] == 1) cnt++;
//	}
//	if (cnt == 4) return true;
//	return false;
//}
//
//void translate(int row) {
//	int chagedMap[4][4] = { 0 };
//	for (int i = row; i > 0; i--) {
//		for (int j = 0; j < 4; j++) {
//			map[i][j] = map[i - 1][j];
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		map[0][i] = 0;
//	}
//}
//
//int main() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		if (isCheck(i)) {
//			translate(i);
//		}
//	}
//	showMap();
//
//	return 0;
//}
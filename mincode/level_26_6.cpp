//#include<iostream>
//
//using namespace std;
//
//int map[5][5] = { 0 };
//
//int main() {
//	for (int i = 0; i < 6; i++) {
//		int row, col;
//		cin >> row >> col;
//		map[row][col]++;
//	}
//	int flag = 0;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (map[i][j] > 1) flag = 1;
//		}
//	}
//	if (flag) cout << "중복된좌표발견" << endl;
//	else cout << "중복없음" << endl;
//	return 0;
//}
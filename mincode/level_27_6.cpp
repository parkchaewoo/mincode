//#include<iostream>
//#include<vector>
//
//using namespace std;
//int map[3][3] = {
//	0, 5, 4,
//	3, 0, 0,
//	0, 0, 1
//};
//
//void changing() {
//	int bufferMap[3][3] = { 0 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) bufferMap[i][j] = map[i][j];
//	}
//	map[0][2] = bufferMap[0][0];
//	map[1][2] = bufferMap[0][1];
//	map[2][2] = bufferMap[0][2];
//	map[0][1] = bufferMap[1][0];
//	map[1][1] = bufferMap[1][1];
//	map[2][1] = bufferMap[1][2];
//	map[0][0] = bufferMap[2][0];
//	map[1][0] = bufferMap[2][1];
//	map[2][0] = bufferMap[2][2];
//}
//
//void show() {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (map[i][j] == 0) cout << '_';
//			else	cout << map[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		changing();
//	}
//	show();
//}
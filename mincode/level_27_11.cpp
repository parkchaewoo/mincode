//#include<iostream>
//
//using namespace std;
//
//char map[4][4] = { 0 };
//int translate[8][2]{
//	0,1,
//	1,1,
//	1,0,
//	1,-1,
//	0,-1,
//	-1,-1,
//	-1,0,
//	-1,1
//};
//
//
//void defense(int y, int x) {
//	for (int i = 0; i < 8; i++) {
//		int dy = y + translate[i][0];
//		int dx = x + translate[i][1];
//		if (dx >= 0 && dx < 4 && dy >= 0 && dy < 4) {
//			if (map[dy][dx] == 0) map[dy][dx] = '@';
//		}
//	}
//}
//
//int main() {
//
//	for (int i = 0; i < 3; i++) {
//		int y, x;
//		cin >> y >> x;
//		map[y][x] = '#';
//		defense(y, x);
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (map[i][j] == 0) cout << '_';
//			else cout << map[i][j];
//		}
//		cout << endl;
//	}
//}
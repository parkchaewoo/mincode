//#include<iostream>
//#include<vector>
//using namespace std;
//int map[10][10] = { 0 };
//int y, x;
//
//void findMax(int* num, int* pointY, int* pointX) {
//	int maxNum = -1;
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			if (map[i][j] > maxNum) {
//				maxNum = map[i][j];
//				*num = maxNum;
//				*pointY = i;
//				*pointX = j;
//			}
//		}
//	}
//	map[*pointY][*pointX] = -1;
//}
//
//int main() {
//	cin >> y >> x;
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		int num, pointY, pointX;
//		findMax(&num, &pointY, &pointX);
//		cout << num << '(' << pointY << ',' << pointX << ')' << endl;
//	}
//	return 0;
//}
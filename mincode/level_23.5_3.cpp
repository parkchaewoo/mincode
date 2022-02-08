//#include<iostream>
//using namespace std;
//
//int map[4][4] = { 0 };
//
//int sumX(int yindex) {
//	int sum = 0;
//	for (int i = 0; i < 3; i++) {
//		sum += map[yindex][i];
//	}
//	return sum;
//}
//int sumY(int xindex) {
//	int sum = 0;
//	for (int i = 0; i < 3; i++) {
//		sum += map[i][xindex];
//	}
//	return sum;
//}
//int sumXY() {
//	int sum = 0;
//	for (int i = 0; i < 3; i++) {
//		sum += map[i][i];
//	}
//	return sum;
//}
//
//int main() {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		map[i][3] = sumX(i);
//		map[3][i] = sumY(i);
//		map[3][3] = sumXY();
//	}
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << map[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
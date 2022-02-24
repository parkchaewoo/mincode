//#include<iostream>
//using namespace std;
//
//int arr[4][5] = { 0 };
//
//void findStartPoint() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (arr[i][j] == 1) {
//				cout << '(' << i << ',' << j << ')' << endl;
//				return;
//			}
//		}
//	}
//}
//
//void findEndPoint() {
//	for (int i = 3; i >= 0; i--) {
//		for (int j = 4; j >= 0; j--) {
//			if (arr[i][j] == 1) {
//				cout << '(' << i << ',' << j << ')' << endl;
//				return;
//			}
//		}
//	}
//}
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	findStartPoint();
//	findEndPoint();
//}
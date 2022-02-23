//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int A[3][3] = {
//	2,6,3,
//	7,1,1,
//	3,4,2
//};
//int B[2][4] = {
//	6,4,2,4,
//	1,1,5,8
//};
//
//int C[2][3] = {
//	9,2,3,
//	4,2,1
//};
//
//int arr[3][3] = { 0 };
//
//int main() {
//	for (int idx = 0; idx < 3; idx++) {
//		int max = -1;
//		pair<int, int> maxIdx = {-1, -1};
//		for (int i = 0; i < 3;  i++) {
//			for (int j = 0; j < 3; j++) {
//				if (A[i][j] > max) {
//					max = A[i][j];
//					maxIdx.first = i;
//					maxIdx.second = j;
//				}
//			}
//		}
//		arr[0][idx] = max;
//		A[maxIdx.first][maxIdx.second] = -1;
//	}
//
//	for (int idx = 0; idx < 3; idx++) {
//		int min = 1000000;
//		pair<int, int> minIdx = { -1, -1 };
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 4; j++) {
//				if (B[i][j] < min) {
//					min = B[i][j];
//					minIdx.first = i;
//					minIdx.second = j;
//				}
//			}
//		}
//		arr[1][idx] = min;
//		B[minIdx.first][minIdx.second] = 100000000;
//	}
//
//	for (int idx = 2; idx < 3; idx++) {
//		int max = -1;
//		pair<int, int> maxIdx = { -1, -1 };
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 3; j++) {
//				if (C[i][j] > max) {
//					max = C[i][j];
//					maxIdx.first = i;
//					maxIdx.second = j;
//				}
//			}
//		}
//		arr[2][idx] = max;
//		//C[maxIdx.first][maxIdx.second] = -1;
//	}
//
//
//	for (int idx = 0; idx < 2; idx++) {
//		int min = 1000000;
//		pair<int, int> minIdx = { -1, -1 };
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 3; j++) {
//				if (C[i][j] < min) {
//					min = C[i][j];
//					minIdx.first = i;
//					minIdx.second = j;
//				}
//			}
//		}
//		arr[2][idx] = min;
//		C[minIdx.first][minIdx.second] = 100000000;
//	}
//
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j]<<' ';
//		}
//		cout << endl;
//	}
//}
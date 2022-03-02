//#include<iostream>
//using namespace std;
//
//char arr[4][3];
//int dx[] = { 1,0,-1,0,1 };
//int dy[] = { 0,1,0,-1,0 };
//
//void show() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (int time = 0; time < 5; time++) {
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 3; j++) {
//				for (int k = 'A'; k <= 'Z'; k++) {
//					if (k == arr[i][j]) {
//						int ny = i + dy[time];
//						int nx = j + dx[time];
//						if (nx >= 0 && nx < 3 && ny >= 0 && ny < 4) {
//							if (arr[ny][nx] == '_') {
//								arr[ny][nx] = k;
//								arr[i][j] = '_';
//							}
//						}
//					}
//				}
//			}
//		}
//		show();
//	}
//	
//}
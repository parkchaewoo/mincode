//#include<iostream>
//using namespace std;
//
//int map[3][3] = { 0, };
//int arr[3][3] = { 0, };
//int cnt = 0;
//void show() {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << map[i][j]<<' ';
//		}
//		cout << endl;
//	}
//}
//
//void rotate() {
//	int buffer[3][3] = { 0 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			buffer[2-j][i] = map[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			map[i][j] = buffer[i][j];
//		}
//	}
//}
//
//bool isSame() {
//	int n = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			//cout <<n<<' '<< map[i][j] << ' ' << arr[i][j] << endl;
//			if (map[i][j] == arr[i][j]) n++;
//		}
//	}
//	if (n == 9) return true;
//	else return false;
//}
//
//int main() {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	while (!isSame()) {
//		rotate();
//		cnt++;
//	}
//	cout << cnt <<endl;
//	return 0;
//}
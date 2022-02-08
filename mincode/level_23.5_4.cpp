//#include<iostream>
//using namespace std;
//
//int map[3][4] = {
//	3,5,4,1,
//	1,1,2,3,
//	6,7,1,2
//};
//
//int newMap[3][4] = { 0 };
//
//void translate(int before, int after) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (map[i][j] == before) newMap[i][j] = after;
//		}
//	}
//}
//
//int main() {
//	int arr[4];
//	for (int i = 0; i < 4; i++) {
//		cin >> arr[i];
//	}
//	translate(arr[0], arr[1]);
//	translate(arr[1], arr[2]);
//	translate(arr[2], arr[3]);
//	translate(arr[3], arr[0]);
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			if(newMap[i][j] == 0) newMap[i][j] = map[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << newMap[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
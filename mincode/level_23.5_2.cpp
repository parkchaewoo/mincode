//#include<iostream>
//using namespace std;
//
//char arr[3][4] = { 0 };
//
//int main() {
//	for (int i = 0; i < 3; i++) {
//		int y, x;
//		cin >> y >> x;
//		arr[y][x] = '#';
//	}
//	int flag = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (arr[i][j] == '#') {
//				//y�˻�
//				for (int k = 0; k < 3; k++) {
//					if (i != k) {
//						if (arr[k][j] == '#') flag = 1;
//					}
//				}
//				//x�˻�
//				for (int k = 0; k < 4; k++) {
//					if (j != k) {
//						if (arr[i][k] == '#') flag = 1;
//					}
//				}
//			}
//		}
//	}
//	if (flag) cout << "����" << endl;
//	else cout << "����" << endl;
//
//	return 0;
//}
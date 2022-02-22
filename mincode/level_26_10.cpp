//#include<iostream>
//using namespace std;
//
//int map[4][4] = {
//	0,1,1,0,
//	0,2,2,1,
//	2,3,3,2,
//	3,3,3,2
//};
//
//int main() {
//	int flag = 0;
//	for (int j = 0; j < 4; j++) {
//		for (int i = 1; i < 4; i++) {
//			int now = map[i][j];
//			int before = map[i - 1][j];
//			if (now < before) {
//				cout << "안전하지않은성" << endl;
//				return 0;
//			}
//		}
//	}
//	cout << "안전한성" << endl;
//	return 0;
//}
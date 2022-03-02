//#include<iostream>
//
//using namespace std;
//
//int timer[3][3] = {
//	0, 12, 0,
//	9, 0, 3,
//	0, 6, 0
//};
//
//void translateTime() {
//	int temp = timer[1][0];
//	timer[1][0] = timer[2][1];
//	timer[2][1] = timer[1][2];
//	timer[1][2] = timer[0][1];
//	timer[0][1] = temp;
//}
//
//int main() {
//	int degree;
//	cin >> degree;
//	for (int i = 0; i < degree; i += 90) {
//		translateTime();
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (timer[i][j] == 0) continue;
//			cout << timer[i][j] << ' ';
//		}
//	}
//
//	return 0;
//}
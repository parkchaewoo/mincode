//#include<iostream>
//using namespace std;
//
//int map[6][6] = { 0 };
//
//bool isDanger() {
//	for (int i = 1; i <= 4; i++) {
//		for (int j = 1; j <= 4; j++) {
//			if (map[i][j] == 1) {
//				if (map[i + 1][j] == 1) return true;
//				if (map[i - 1][j] == 1) return true;
//				if (map[i][j + 1] == 1) return true;
//				if (map[i][j - 1] == 1) return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main(){
//
//	for (int i = 1; i <= 4; i++) {
//		for (int j = 1; j <= 4; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	if (isDanger()) cout << "위험한 상태" << endl;
//	else cout << "안전한 상태" << endl;
//
//	return 0;
//}
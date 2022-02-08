//#include<iostream>
//using namespace std;
//
//int main() {
//	char arr1[4][4] = {
//		'A','B','C','D',
//		'B','B','A','B',
//		'C','B','A','C',
//		'B','A','A','A'
//	};
//	char arr2[4][4] = { 0 };
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) cin >> arr2[i][j];
//	}
//	int buffer[200] = { 0 };
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (arr1[i][j] == arr2[i][j]) {
//				buffer[arr1[i][j]]++;
//			}
//		}
//	}
//	int max = buffer[0];
//	int maxIndex;
//	for (int i = 0; i < 200; i++) {
//		if (buffer[i] > max) {
//			max = buffer[i];
//			maxIndex = i;
//		}
//	}
//	cout << char(maxIndex) << endl;
//
//	return 0;
//}
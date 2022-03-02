//#include<iostream>
//using namespace std;
//
//int arr[4][3] = {
//	3,7,4,
//	2,6,9,
//	5,1,2,
//	3,6,7
//};
//
//void spin(int idx) {
//	int temp = arr[idx][2];
//	arr[idx][2] = arr[idx][1];
//	arr[idx][1] = arr[idx][0];
//	arr[idx][0] = temp;
//}
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		int n;
//		cin >> n;
//		for (int rp = 0; rp < n; rp++) {
//			spin(i);
//		}
//	}
//	/*for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}*/
//
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 4; i++) {
//			cout<<arr[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}
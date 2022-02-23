//#include<iostream>
//#include<vector>
//using namespace std;
//
//int arr[100][100];
//
//int main() {
//	//Edget 0;
//	//Amy 1;
//	//Bob 2;
//	//Diane 3;
//	//Chole 4;
//	arr[1][0] = 1;
//	arr[2][1] = 1;
//	arr[3][2] = 1;
//	arr[4][2] = 1;
//	int max = -1;
//	int maxIndex = -1;
//	for (int j = 0; j < 5; j++) {
//		int sum = 0;
//		for (int i = 0; i < 5; i++) {
//			sum += arr[i][j];
//		}
//		if (sum > max) {
//			max = sum;
//			maxIndex = j;
//		}
//	}
//	if (maxIndex == 0) cout << "Edget" << endl;
//	if (maxIndex == 1) cout << "Amy" << endl;
//	if (maxIndex == 2) cout << "Bob" << endl;
//	if (maxIndex == 3) cout << "Diane" << endl;
//	if (maxIndex == 4) cout << "Chole" << endl;
//	return 0;
//}
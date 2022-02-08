//#include<iostream>
//#include<cstring>
//using namespace std;
//
//char arr[6] = { '3','5','1','9','7' };
//
//void translate(char input) {
//	if (input == 'R') {
//		char temp[6] = { 0 };
//		temp[0] = arr[4];
//		for (int i = 0; i < 4; i++) {
//			temp[i + 1] = arr[i];
//		}
//		strcpy(arr, temp);
//	}
//	if (input == 'L') {
//		char temp[6] = { 0 };
//		temp[4] = arr[0];
//		for (int i = 1; i < 5; i++) {
//			temp[i - 1] = arr[i];
//		}
//		strcpy(arr, temp);
//	}
//}
//
//int main() {
//	int n = 0;
//	while (n < 4) {
//		char input;
//		cin >> input;
//		translate(input);
//		n++;
//	}
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << ' ';
//	}
//}
//#include<iostream>
//using namespace std;
//
//int arr[100000] = { 0, };
//int sumFourIndex(int* index) {
//	return (index[0] + index[1] + index[2] + index[3]);
//}
//
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int min = sumFourIndex(arr);
//	for (int i = 1; i < n - 3; i++) {
//		if (sumFourIndex(arr + i) < min) {
//			min = sumFourIndex(arr + i);
//		}
//	}
//	cout << min << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int arr[9] = { 1,2,3,3,5,1,0,1,3 };
//
//int main() {
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//
//	int min = sum;
//	
//	for (int i = 0; i <= 9-n; i++) {
//		if (sum < min) min = sum;
//		sum += arr[i+n];
//		sum -= arr[i];
//	}
//	cout << min << endl;
//
//	return 0;
//}
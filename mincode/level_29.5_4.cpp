//#include<iostream>
//#include<queue>
//using namespace std;
//queue<int> arr1;
//queue<int> arr2;
//int result[8];
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		int n ;
//		cin >> n;
//		arr1.push(n);
//	}
//	for (int i = 0; i < 4; i++) {
//		int n;
//		cin >> n;
//		arr2.push(n);
//	}
//	for (int i = 0; i < 8; i++) {
//		if (arr1.size() == 0) {
//			result[i] = arr2.front();
//			arr2.pop();
//			continue;
//		}
//		if (arr2.size() == 0) {
//			result[i] = arr1.front();
//			arr1.pop();
//			continue;
//		}
//		if (arr1.front() <= arr2.front()) {
//			result[i] = arr1.front();
//			arr1.pop();
//		}
//		else {
//			result[i] = arr2.front();
//			arr2.pop();
//		}
//	}
//	for (int i = 0; i < 8; i++) cout << result[i] << ' ';
//}
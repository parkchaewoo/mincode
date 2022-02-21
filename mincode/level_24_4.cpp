//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main() {
//	char arr[11] = { 0 };
//	for (int i = 0; i < 11; i++) {
//		arr[i] = 'A' + i;
//	}
//	string str;
//	cin >> str;
//	sort(str.begin(), str.end());
//
//	int min = str.size();
//	int max = 0;
//	char minCh, maxCh;
//	for (int i = 0; i < 11; i++) {
//		int cnt = count(str.begin(), str.end(), arr[i]);
//		if (cnt > max) {
//			max = cnt;
//			maxCh = arr[i];
//		}
//		if (cnt < min) {
//			min = cnt;
//			minCh = arr[i];
//		}
//	}
//	cout << maxCh << endl;
//	cout << minCh << endl;
//
//	return 0;
//}
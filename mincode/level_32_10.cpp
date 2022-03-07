//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int numbers[10][10] = { 0 };
//int bitArray[10][10] = { 0 };
//vector<int> v;
//int buffer[200] = { 0 };
//
//bool compare(int a, int b) {
//	if (buffer[a] > buffer[b]) return true;
//	if (buffer[a] < buffer[b]) return false;
//	return a < b;
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> numbers[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> bitArray[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (bitArray[i][j] != 0) v.push_back(numbers[i][j]);
//		}
//	}
//	for (int i = 0; i < v.size(); i++) {
//		buffer[v[i]] ++;
//	}
//
//	sort(v.begin(), v.end(), compare);
//	for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';
//
//}
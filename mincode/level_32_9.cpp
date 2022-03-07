//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//string str;
//
//int main() {
//	cin >> str;
//	int n;
//	cin >> n;
//	sort(str.begin(), str.end(),greater<char>());
//	str = str.substr(0,n);
//
//	int buffer[200] = { 0 };
//	for (int i = 0; i < n; i++) {
//		buffer[str[i]] ++;
//	}
//	int max = -1;
//	int maxIndex;
//
//	for (int i = 0; i < 200; i++) {
//		if (buffer[i] > max) {
//			max = buffer[i];
//			maxIndex = i;
//		}
//	}
//
//	cout << char(maxIndex) << endl;
//}
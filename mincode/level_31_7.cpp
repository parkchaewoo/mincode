//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//vector<string> v;
//vector<string> answer;
//
//void sol(int nowLevel) {
//	if (nowLevel >= 3) {
//		for (int i = 0; i < 3; i++) {
//			cout << answer[i] << ' ';
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i < 3; i++) {
//		answer.push_back(v[i]);
//		sol(nowLevel + 1);
//		answer.pop_back();
//	}
//}
//
//int main() {
//	for (int i = 0; i < 3; i++) {
//		string str;
//		cin >> str;
//		v.push_back(str);
//	}
//
//	sol(0);
//}
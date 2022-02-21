//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int branch, level;
//int used[1001] = { 0 };
//vector<string> v;
//vector<string> name;
//int cnt = 0;
//void sol(int nowLevel) {
//	string str = "";
//	for (int i = 0; i < nowLevel; i++) str += v[i];
//	cout << str << endl;
//	if (str == "CHRISTMAS") {
//		cnt++;
//		return;
//	}
//	if (nowLevel >= level) return;
//	
//	
//
//	for (int i = 0; i < branch; i++) {
//		if (used[i] == 1) continue;
//		used[i] = 1;
//		v.push_back(name[i]);
//		sol(nowLevel + 1);
//		v.pop_back();
//		used[i] = 0;
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string str = "";
//		cin >> str;
//		name.push_back(str);
//	}
//
//	branch = n;
//	level = n;
//	sol(0);
//
//	cout << cnt << endl;
//}
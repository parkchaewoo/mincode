//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//vector<string> v;
//string str;
//
//void vectorInit(string buffer) {
//	while (true) {
//		int startIdx = buffer.find("<");
//		int endIdx = buffer.find(">");
//		//cout << startIdx << ' ' << endIdx << endl;
//		if (startIdx == str.npos && endIdx == str.npos) break;
//		v.push_back(buffer.substr(startIdx + 1, endIdx - startIdx - 1));
//		buffer = buffer.substr(endIdx + 1);
//	}
//	//for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';
//}
//
//bool isRepeat() {
//	for (int i = 0; i < v.size(); i++) {
//		int cnt = 0;
//		while (true) {
//			int idx = str.find(v[i]);
//			if (idx == str.npos) break;
//			cnt++;
//			str = str.substr(idx + v[i].size());
//		}
//		cout << v[i] << ' ' << cnt << endl;
//		if (cnt > 1) return false;
//	}
//	return true;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<char> result;
//	for (int i = 0; i < n; i++) {
//		cin >> str;
//		vectorInit(str);
//		if (isRepeat()) result.push_back('O');
//		else result.push_back('X');
//		v.erase(v.begin(), v.end());
//	}
//	for (int i = 0; i < result.size(); i++) cout << result[i];
//	return 0;
//}
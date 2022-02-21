//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	str += '_';
//	vector<string> v;
//	int idx = str.find('_');
//	v.push_back(str.substr(0, idx));
//	str = str.substr(idx);
//	while (true) {
//		int first = str.find('_');
//		int second = str.find('_', 1);
//		if ((second - first) == 1) {
//			str = str.substr(second);
//			continue;
//		}
//		if (second == str.npos) break;
//		v.push_back(str.substr(first + 1, second-1));
//		str = str.substr(second);
//
//	}
//	
//	for (int i = 0; i < v.size(); i++) {
//		cout << char('1' + i) << '#' << v[i] << endl;
//	}
//	return 0;
//}
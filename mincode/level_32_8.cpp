//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//vector<string> v;
//
//bool collect(string str) {
//	if (!((str[0] <= 'Z') && (str[0] >= 'A'))) return false;
//	for (int i = 1; i < str.size(); i++) {
//		if (!((str[i] <= 'z') && (str[i] >= 'a'))) return false;
//	}
//	return true;
//}
//
//bool allLower(string str) {
//	for (int i = 1; i < str.size(); i++) {
//		if (!((str[i] <= 'z') && (str[i] >= 'a'))) return false;
//	}
//	return true;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string str;
//		cin >> str;
//		v.push_back(str);
//	}
//
//	for (int i = 0; i < n; i++) {
//		if (collect(v[i])) continue;
//		else if (allLower(v[i])) {
//			v[i][0] -= ('a' - 'A');
//			continue;
//		}
//		else {
//			for (int j = 0; j < v[i].size(); j++) {
//				v[i][j] = toupper(v[i][j]);
//			}
//		}
//	}
//
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++) {
//		cout << v[i] << endl;
//	}
//}
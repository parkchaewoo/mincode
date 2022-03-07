//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main() {
//	string str = "";
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		char ch;
//		cin >> ch;
//		str += ch;
//	}
//
//
//	int i = 0;
//	while (i < str.size()) {
//		if ((str[i] == str[i + 1]) && (str[i + 1] == str[i + 2])) {
//			string buffer = str.substr(0, i);
//			buffer += str.substr(i + 3);
//			str = buffer;
//			//cout << i << ' ' << str << endl;
//			i = 0;
//			continue;
//		}
//
//		i++;
//
//	}
//
//	sort(str.begin(), str.end());
//	for (int i = 0; i < str.size(); i++) cout << str[i] << ' ';
//}
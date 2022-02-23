//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//bool checkName(string str) {
//	//1,2
//	for (int i = 0; i < str.size(); i++) {
//		if (!isalpha(str[i])) return false;
//	}
//	//3,4;
//	int buffer[200] = { 0 };
//	for (int i = 0; i < str.size(); i++) {
//		buffer[str[i]]++;
//	}
//
//	for (int i = 'a'; i <= 'z'; i++) {
//		if (buffer[i] > 2) return false;
//	}
//	
//	if ((buffer['a'] + buffer['e'] + buffer['i'] + buffer['o'] + buffer['u']) != 3) return false;
//
//	return true;
//}
//
//int main() {
//	vector<string> v;
//	int n; 
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string str;
//		cin >> str;
//		v.push_back(str);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		if (checkName(v[i])) cout << "good" << endl;
//		else cout << "no" << endl;
//	}
//}
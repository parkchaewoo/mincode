//
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//string str = "";
//
//bool allnum(string str) {
//	int flag = 0;
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] >= '0' && str[i] <= '9') continue;
//		else return false;
//	}
//	if (str.size() != 5) return false;
//	return true;
//}
//
//string printNum(string str) {
//	
//	str = '[' + str;
//	str += ']';
//	return str;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string buffer;
//		cin >> buffer;
//		str += buffer;
//	}
//	while (true) {
//		string answer = "";
//		int startIdx = str.find('[');
//		int endIdx = str.find(']');
//		if (endIdx == str.npos) break;
//		answer += str.substr(startIdx + 1, (endIdx - startIdx - 1));
//		if (allnum(answer)) cout << printNum(answer)<<endl;
//		//cout << str << endl;
//		str = str.substr(endIdx + 1);
//	}
//}
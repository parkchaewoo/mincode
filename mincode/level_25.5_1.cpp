//#include<iostream>
//#include<string>
//using namespace std;
//
//string str;
//
//int main() {
//	cin >> str;
//	int sum = 0;
//	if (str[0] != '-') str = '+' + str;
//	str += 'E';
//	while (true) {
//		int plusIndex = str.find('+');
//		int subIndex = str.find('-');
//		if (str == "E") break;
//		if (plusIndex == str.npos) plusIndex = str.size();
//		if (subIndex == str.npos) subIndex = str.size();
//		int firstIndex = min(plusIndex, subIndex);
//		int lastIndex = 0;
//		for (int i = firstIndex + 1; i < str.size(); i++) {
//			if (str[i] == '+' || str[i] == '-' || str[i] == 'E') {
//				lastIndex = i;
//				break;
//			}
//
//		}
//		string buffer = "";
//		if (str[0] == '+') {
//			buffer = str.substr(1, lastIndex);
//			sum += stoi(buffer);
//		}
//		if (str[0] == '-') {
//			buffer = str.substr(1, lastIndex);
//			sum -= stoi(buffer);
//		}
//		str = str.substr(lastIndex);
//	}
//	cout << sum << endl;
//
//	return 0;
//}
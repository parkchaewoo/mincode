//#include<iostream>
//#include<string>
//
//using namespace std;
//string str = "";
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
//		int startIdx = str.find('[');
//		int endIdx = str.find(']');
//		if (startIdx == str.npos && endIdx == str.npos) break;
//		int flag = 0;
//		for (int i = startIdx + 1; i < endIdx; i++) {
//			if (str[i] >= '0' && str[i] <= '9') {}
//			else {
//				flag = 1;
//				break;
//			}
//		}
//		string buffer = "00000";
//		if (flag != 1) {
//			for (int i = startIdx + 1; i < endIdx; i++) buffer += str[i];
//		}
//		string answer;
//		for (int i = buffer.size() - 5; i < buffer.size(); i++) answer += buffer[i];
//		cout << '[' << answer << ']' << endl;
//		str = str.substr(endIdx + 1);
//	}
//
//	return 0;
//}
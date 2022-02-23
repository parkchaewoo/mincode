//#include<iostream>
//#include<string>
//using namespace std;
//string str;
//
//int main() {
//	cin >> str;
//	int result = 0; 
//	while (true) {
//		int bigIdx = str.find('[');
//		int midIdx = str.find('{');
//		if (bigIdx == str.npos && midIdx == str.npos) break;
//		if (bigIdx == str.npos) bigIdx = str.size();
//		if (midIdx == str.npos) midIdx = str.size();
//		if (bigIdx < midIdx) {
//			int endIdx = str.find(']');
//			string buffer = str.substr(bigIdx+1, endIdx - bigIdx-1);
//			result += stoi(buffer);
//			str = str.substr(endIdx+1);
//			
//		}
//		else {
//			int endIdx = str.find('}');
//			string buffer = str.substr(midIdx + 1, endIdx - bigIdx - 1);
//			result *= stoi(buffer);
//			str = str.substr(endIdx+1);
//			
//		}
//	}
//	cout << result << endl;
//	return 0;
//}
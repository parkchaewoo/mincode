//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string str;
//	int cnt = 0;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++) str[i] = tolower(str[i]);
//	while (true) {
//		int find1 = str.find("http://");
//		int find2 = str.find("https://");
//		if (find1 == str.npos && find2 == str.npos) break;
//		if (find1 == str.npos) find1 = str.size();
//		if (find2 == str.npos) find2 = str.size();
//		int startIdx = min(find1, find2);
//		str = str.substr(startIdx);
//
//		int end1 = str.find(".com");
//		int end2 = str.find(".co.kr");
//		int end3 = str.find(".org");
//		int end4 = str.find(".net");
//		if (end1 == str.npos && end2 == str.npos && end3 == str.npos && end4 == str.npos) break;
//		if (end1 == str.npos) end1 = str.size();
//		if (end2 == str.npos) end2 = str.size();
//		if (end3 == str.npos) end3 = str.size();
//		if (end4 == str.npos) end4 = str.size();
//		int endIdx = min(end1, end2);
//		endIdx = min(endIdx, end3);
//		endIdx = min(endIdx, end4);
//
//		str = str.substr(endIdx);
//		int n;
//		if (startIdx == find1) {
//			n =endIdx-7;
//		}
//		else if (startIdx == find2) {
//			n = endIdx-8;
//
//		}
//		if(n>=3) cnt++;
//
//	}
//	cout << cnt<<"°³"<<endl;
//	
//	return 0;
//}
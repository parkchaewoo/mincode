//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++) str[i] = tolower(str[i]);
//	int passCnt=0, failCnt=0;
//	int index = 0;
//	while (true) {
//		int passIndex = str.find("pass", index);
//		int failIndex = str.find("fail", index);
//		if ((passIndex == str.npos) && (failIndex == str.npos)) break;
//		if (passIndex == str.npos) passIndex = 1001;
//		if (failIndex == str.npos) failIndex = 1001;
//		if (passIndex < failIndex) {
//			passCnt++;
//			index = (passIndex + 4);
//		}
//		else {
//			failCnt++;
//			index = (failIndex + 4);
//		}
//	}
//	double percent = (double)passCnt / (passCnt + failCnt);
//	cout << round(percent * 100) << '%' << endl;
//	return 0;
//}
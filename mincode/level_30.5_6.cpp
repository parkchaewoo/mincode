//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
//string password;
//int branch = 26, level = 4;
//string path = "";
//int cnt;
//
//void sol(int nowLevel) {
//	//cout << path << endl;
//	if (nowLevel >= level) {
//		cnt++;
//		if (path == password) {
//			cout << cnt << endl;
//		}
//		return;
//	}
//	for (int i = 0; i < branch; i++) {
//		
//		path+= (char)(i + 'A');
//		sol(nowLevel + 1);
//		path = path.substr(0, path.size() - 1);
//	}
//}
//
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cnt = 0;
//		path = "";
//		cin >> password;
//		sol(0);
//	}
//
//	return 0;
//}
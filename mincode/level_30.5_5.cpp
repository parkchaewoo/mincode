//#include<iostream>
//#include<string>
//
//using namespace std;
//
//string name;
//char path[100] = {0,};
//int branch, level;
//
//void sol(int nowLevel) {
//	if (nowLevel >= level) {
//		for (int i = 0; i < level; i++) cout << path[i];
//		cout << endl;
//		return;
//	}
//
//	for (int i = 0; i < branch; i++) {
//		path[nowLevel] = name[i];
//		sol(nowLevel + 1);
//		path[nowLevel] = 0;
//	}
//}
//
//int main() {
//	cin >> name;
//	cin >> level;
//	branch = name.size();
//	sol(0);
//
//	return 0;
//}
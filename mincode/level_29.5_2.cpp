//#include<iostream>
//using namespace std;
//
//int evid[] = { -1,0,0,1,2,4,4 };
//int timeStamp[] = {8,3,5,6,8,9,10};
//
//void dfs(int now) {
//	if (evid[now] == -1) {
//		cout << now << "��index(���)" << endl;
//		return;
//	}
//
//	dfs(evid[now]);
//	cout << now << "��index(" << timeStamp[now] << "��)" << endl;
//
//}
//
//int main() {
//	int n;
//	cin >> n;
//	
//	dfs(n);
//
//	return 0;
//}
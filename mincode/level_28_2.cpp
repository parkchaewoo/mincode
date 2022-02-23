//#include<iostream>
//#include<vector>
//using namespace std;
//int arr[1000][1000] = { 0 };
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	
//	vector<int> boss;
//	vector<int> under;
//	for (int i = 0; i < n; i++) {
//		if (arr[i][0] == 0) continue;
//		boss.push_back(i);
//	}
//	for (int i = 0; i < n; i++) {
//		if (arr[0][i] == 0) continue;
//		under.push_back(i);
//	}
//	cout << "boss:";
//	for (int i = 0; i < boss.size(); i++) cout << boss[i] << ' ';
//	cout << endl;
//	cout << "under:";
//	for (int i = 0; i < under.size(); i++) cout << under[i] << ' ';
//
//	return 0;
//}
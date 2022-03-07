//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//vector<string> v[100];
//
//int main() {
//	int candidate, citizen;
//	cin >> candidate >> citizen;
//	for (int i = 0; i < citizen; i++) {
//		int n;
//		string name;
//		cin >> n >> name;
//		v[n].push_back(name);
//	}
//	int maxIndex = 0;
//	int max = v[maxIndex].size();
//	for (int i = 0; i < candidate; i++) {
//		if (v[i].size() > max) {
//			max = v[i].size();
//			maxIndex = i;
//		}
//	}
//	for (int i = 0; i < v[maxIndex].size(); i++) {
//		cout << v[maxIndex][i] << ' ';
//	}
//}
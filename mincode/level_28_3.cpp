//#include<iostream>
//#include<vector>
//using namespace std;
//
//int arr[8][8] = {
//	//  A  B  C  D  E  F  G  H
//		0, 1, 1, 0, 0, 0, 0, 1,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 1, 1, 0, 1, 0,
//		0, 0, 0, 0, 0, 1, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0
//};
//
//
//int main(){
//	char ch;
//	cin >> ch;
//	vector<char> v;
//	int parents = -1;
//	for (int from = 0; from < 8; from++) {
//		if (arr[from][ch - 'A'] == 0) continue;
//		parents = from;
//		arr[from][ch - 'A'] = 0;
//		break;
//	}
//	for (int to = 0; to < 8; to++) {
//		if (parents < 0) break;
//		if (arr[parents][to] == 0) continue;
//		v.push_back((char)(to + 'A'));
//	}
//	if (v.size() == 0) cout << "¾øÀ½" << endl;
//	else { for (int i = 0; i < v.size(); i++) cout << v[i] << ' '; }
//
//	return 0;
//}
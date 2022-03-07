//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//
//struct Node {
//	int num;
//	char ch;
//};
//
//Node arr[100];
//
//bool compare(Node n1, Node n2) {
//	if (n1.num < n2.num) return true;
//	if (n1.num > n2.num)return false;
//	if (n1.ch < n2.ch) return true;
//	else return false;
//}
//
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i].num;
//		cin >> arr[i].ch;
//	}
//	sort(arr, arr + n,compare);
//	for (int i = 0; i < n; i++) {
//		cout << arr[i].num << ' ' << arr[i].ch << endl;
//	}
//}
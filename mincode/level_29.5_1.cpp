//#include<iostream>
//using namespace std;
//int arr[] = { 3,1,2,1,3,2,1,2,1 };
//int n;
//
//void sol(int now) {
//	if (now > sizeof(arr)/sizeof(int)) {
//		cout << "����" << ' ';
//		return;
//	}
//	cout << arr[now-1] << ' ';
//	sol(now + arr[now-1]);
//	cout << arr[now - 1] << ' ';
//}
//
//int main() {
//	cin >> n;
//	cout << "���� ";
//	sol(n);
//	cout << "����";
//	return 0;
//}
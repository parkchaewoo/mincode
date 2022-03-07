//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct Node {
//	string name;
//	int point;
//};
//
//vector<Node> v;
//
//bool compare(Node n1, Node n2) {
//	if (n1.point > n2.point) return true;
//	if (n1.point < n2.point) return false;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		Node input;
//		cin >> input.name >> input.point;
//		v.push_back(input);
//		
//		sort(v.begin(), v.end(), compare);
//		for (int i = 0; i < min((int)v.size(),3); i++) {
//			cout << v[i].name << ' ';
//		}
//		cout << endl;
//	}
//	
//}
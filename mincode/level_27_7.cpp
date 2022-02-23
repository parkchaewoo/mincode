//#include<iostream>
//#include<vector>
//#include<deque>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	deque<int> number;
//	vector<char> command;
//	for (int i = 0; i < 6; i++) {
//		int n;
//		cin >> n;
//		number.push_back(n);
//	}
//	for (int i = 0; i < 6; i++) {
//		char ch;
//		cin >> ch;
//		command.push_back(ch);
//	}
//	int i = 0; 
//	sort(number.begin(), number.end());
//	while (number.size() != 0) {
//		if (command[i] == 'm') {
//			cout << number.front();
//			number.pop_front();
//		}
//		else {
//			cout << number.back();
//			number.pop_back();
//		}
//
//		i++;
//	}
//}
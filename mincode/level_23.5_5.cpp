//#include<iostream>
//using namespace std;
//
//int arr[8];
//
//int main() {
//	for (int i = 0; i < 8; i++) {
//		cin >> arr[i];
//	}
//	int pivot = arr[0];
//	int aIndex = 1, bIndex = 7;
//	while (bIndex > aIndex) {
//		if (arr[aIndex] > pivot && arr[bIndex] < pivot) swap(arr[aIndex], arr[bIndex]);
//		aIndex++;
//		bIndex--;
//	}
//	for (int i = 0; i < 8; i++) cout << arr[i] << ' ';
//}
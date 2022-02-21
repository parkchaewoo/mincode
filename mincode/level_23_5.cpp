//#include<iostream>
//using namespace std;
//
//int arr[8] = {0};
//int idxStart, idxEnd;
//
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	for (int i = 0; i < 8; i++) cin >> arr[i];
//	
//	int pivot = arr[0];
//	idxStart = 1;
//	idxEnd = sizeof(arr)/sizeof(int) - 1;
//	
//	while (true) {
//		for (int i = idxStart; i < 8; i++) {
//			if (arr[i]>pivot) {
//				idxStart = i;
//				break;
//			}
//		}
//		for (int i = idxEnd; i > 0; i--) {
//			if (arr[i] < pivot) {
//				idxEnd = i;
//				break;
//			}
//		}
//		if (idxEnd < idxStart) {
//			swap(arr[0], arr[idxEnd]);
//			break;
//		}
//		else {
//			swap(arr[idxStart], arr[idxEnd]);
//		}
//	}
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i] << ' ';
//	}
//}
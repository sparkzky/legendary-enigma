#include <iostream>
using namespace std;
void bubbleSort(int* arr, int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i]<<" ";
	}
	cout << endl;
}
int main() {
	int arr[]={5, 2, 8, 1, 3};
    int length=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,length);
    printArray(arr,length);
}
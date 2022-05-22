#include <iostream>
#include <cmath>
using namespace std;
void Quick_Sort(int arr[], int start, int end) {
	int left = start;
	int right = end;
	int pivot = left;
	while (left != right) {
		if (pivot == right) {
			if (arr[left] <= arr[pivot]) {
				left++;
			}
			else {
				swap(arr[left], arr[pivot]);
				pivot = left;
			}
		}
		else if (pivot == left) {
			if (arr[right] >= arr[pivot]) {
				right--;
			}
			else {
				swap(arr[right], arr[pivot]);
				pivot = right;
			}
		}
	}
	if (start < pivot)
		Quick_Sort(arr, start, pivot - 1);
	if (end > pivot)
		Quick_Sort(arr, pivot + 1, end);
}
int main() {
	int s;
	cout << "plz, Enter the size of Your Array: ";
	cin >> s;
	int arr[1001];
	for (int i = 0; i < s; i++) {
		cin >> arr[i];
	}
	Quick_Sort(arr, 0, s - 1);
	for (int i = 0; i < s; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
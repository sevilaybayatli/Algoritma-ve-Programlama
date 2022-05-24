#include<iostream>
using namespace std;

int RBinSearch(int arr[], int l,int r, int x) {

	if (r >= l) {
		int mid = l + (r - 1) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return RBinSearch(arr, l, mid-1, x);
		return RBinSearch(arr, l, mid+1, x);
	}
	return -1;
	}
int main() {
	int arr[] = {2,3,4,10,40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = RBinSearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "element is not present in the array"
		: cout << "Element is present at index" << result;
	return 0;
		         

}

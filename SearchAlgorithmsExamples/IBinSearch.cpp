#include<iostream>
using namespace std;

int IBinSearch(int arr[], int l, int r, int x) {
	while (l <= r) {
		int m = l + (r - 1) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
}
int main() {
	int arr[] = {2,3,4,10,40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = IBinSearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "element is not present in the array"
		: cout << "Element is present at index" << result;
	return 0;
		         

}
	
	
	



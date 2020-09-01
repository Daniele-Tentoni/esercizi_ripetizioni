#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int *a, size_t start, size_t end) {
	cout << "[";
	for(size_t i = start; i < end; i++) {
		cout << a[i];
		if(i != end - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

void eratostene(int *arr, int n, int max) {
	if(n >= max)
		return;

	cout << "Eratostene on " << arr[n] << endl;

	if(arr[n] != 0)
		for(int i = arr[n]; i < max; i += arr[n]) {
			cout << "Opero " << arr[i] << " % " << n << endl;
			if(arr[i] != 0 && arr[i] % arr[n] == 0) {
				cout << "Delete " << arr[i] << endl;
				arr[i] = 0;
			}
		}

	eratostene(arr, n + 1, max);
}

int main() {
	int N;
	cout << "Inserire N ";
	cin >> N;

	int nums[N];
	for(int i = 0; i < N; i++)
		nums[i] = i + 2;

	printArray(nums, 0, N);
	cout << endl << "Call eratostene" << endl;
	eratostene(nums, 0, N);
	cout << "End eratostene" << endl;
	printArray(nums, 0, N);

	return 0;
}
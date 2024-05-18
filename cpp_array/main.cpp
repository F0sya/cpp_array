#include <iostream>
using namespace std;

int main() {
	const int size = 6;
	int arr[size] = { 0,1,2,3,4,5 };
	
	cout << "Array: ";
	for (int i = size-1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}
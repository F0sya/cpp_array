#include <iostream>
using namespace std;

int main() {
	const int size = 6;
	float arr[size];
	double sum = 0;

	for (int i = 0; i < size; i++) {
		cout << "Enter a profit for a " << i + 1 << " month:"; cin >> arr[i];
		sum += arr[i];
	}

	cout << "\nSummary: " << sum << endl;
	return 0;
}
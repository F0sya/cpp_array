#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	float arr[size];
	double perimeter = 0;

	for (int i = 0; i < size; i++) {
		cout << "Enter a " << i + 1 << " side of pentagon in cm:"; cin >> arr[i];
		perimeter += arr[i];
	}
	cout << "\nSides of pentagon: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " cm; ";
	}

	cout << "\nPerimeter of pentagon: " << perimeter << " cm" << endl;
	return 0;
}
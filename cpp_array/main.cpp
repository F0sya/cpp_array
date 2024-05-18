#include <iostream>
using namespace std;

int main() {
	const int size = 12;
	string month[size] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	float arr[size];
	int min, max, min_i, max_i;
	float sum = 0;

	for (int i = 0; i < size; i++) {
		cout << "Enter a profit for a " << month[i] << ":"; cin >> arr[i];
	}

	min = arr[0], max = arr[0], min_i = 0, max_i = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] < min)
		{
			min = arr[i];
			min_i = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			max_i = i;
		}
		sum += arr[i];
	}

	cout << "\nMax profit was in " << month[max_i] << ": " << max << endl
		<< "Min profit was in " << month[min_i] << ": " << min << endl;
	cout << "Summary: " << sum << endl;
	return 0;
}
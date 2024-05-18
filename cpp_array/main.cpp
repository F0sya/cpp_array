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



	int left_limit; cout << "Enter a left limit(1-12):"; cin >> left_limit;
	int right_limit; cout << "Enter a right limit(1-12):"; cin >> right_limit;


	if (right_limit < left_limit) {
		int temp = right_limit;
		right_limit = left_limit;
		left_limit = temp;
	}

	for (int i = left_limit-1; i <= right_limit-1; i++) {
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

	cout << "In range between " << month[left_limit - 1] << " and " << month[right_limit - 1] << endl;
	cout << "\nMax profit was in " << month[max_i] << ": " << max << endl
		<< "Min profit was in " << month[min_i] << ": " << min << endl;
	cout << "Summary: " << sum << endl;
	return 0;
}
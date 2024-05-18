#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int full_memory_size = 1000;
    int arr[full_memory_size];
    int size;
    int sum = 0;

    do
    {
        cout << "Enter the size of the array(0 - 1000): ";
        cin >> size;
    } while (size > 1000 || size < 0);

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 - 10;
    }

    cout << "Array: ";
    int max_i = 0, min_i = 0, max = arr[0],min=arr[0];
    int multiply_even = 1;
    int first_negative = 0;
    int last_negative = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            first_negative = i;
            break;
        }
    }
    for (int i = size-1; i > 0; i--) {
        if (arr[i] < 0) {
            last_negative = i;
            break;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "; ";
        if (i % 2 == 0 && i != 0) {
            multiply_even *= arr[i];
        }
        if (arr[i] < 0) {
            sum += arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
            min_i = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            max_i = i;
        }

    }
    
    int left_limit,right_limit;
    int multiply_minmax = 1;

    if (min_i > max_i) {
        left_limit = max_i;
        right_limit = min_i;
    }
    else {
        left_limit = min_i;
        right_limit = max_i;
    }

    for (int i = left_limit; i <= right_limit; i++) {
        multiply_minmax *= arr[i];
    }

    int sum_between_negatives = 0;
    for (int i = first_negative; i <= last_negative; i++) {
        sum_between_negatives += arr[i];
    }


    cout << "\n\nSum of negative numbers: " << sum
        << "\nMin number in array: " << min << "; Index: " << min_i
        << "\nMax number in array: " << max << "; Index: " << max_i
        << "\nMultiply of numbers between min and max: " << multiply_minmax
        << "\nMultiply of numbers which indexes is even: " << multiply_even
        << "\nFirst negative index: " << first_negative << "; Last negative index: " << last_negative
        << "\nSum between first and last negative numbers: " << sum_between_negatives << endl;
    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));
    const int full_memory_size = 1000;
    int arr[full_memory_size];
    int size;

    do
    {
        cout << "Enter the size of the array(0 - 1000): ";
        cin >> size;
    } while (size > 1000 || size < 0);

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 - 10;
    }

    int max = arr[0], min = arr[0];
    cout << "Array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "; ";

        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\nMax value in array: " << max <<
        "\nMin value in array: " << min << endl;
    return 0;
}
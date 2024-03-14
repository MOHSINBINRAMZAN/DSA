#include<iostream>
using namespace std;

void selection(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minindex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        if (minindex != i) {
            swap(arr[i], arr[minindex]);
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {87, 54, 21, 69, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted list: ";
    printArray(arr, n);

    selection(arr, n);

    cout << "Sorted list: ";
    printArray(arr, n);

    return 0;
}


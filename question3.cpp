#include <iostream>
using namespace std;

int repeated(int arr[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {

        for (int j = i + 1; j < arraySize; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i];
            }
        }
    }
}

int main() {
    int arr[] = { 1, 2, 3, 5, 5, 6, 8, 8,6 ,9, 2};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    // 1 2 3 5 5 6 8 8 6 9 2
    repeated(arr, arraySize);
}
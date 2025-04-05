#include <iostream>
using namespace std;

int sArr(int arr[], int size) {
    for (int i = 0 ; i < size; i++) {
        if (arr[i] == 1) {
            for (int j = i + 1 ; j < size; j++) {
                if (arr[j] == 3) {
                    for (int k = j + 1 ; k < size; k++) {
                        if (arr[k] == 1)
                            return 0;
                    }
                }
            }
        }
    }
                            return 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1};
    cout << sArr(arr, 5);
    return 0;
}
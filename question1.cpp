#include <iostream>
using namespace std;

int main() {
    int size = 10;




    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "This is our arrays: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    int largest = array[0];
    int secondLargest = array[0];

    for (int k = 0; k < size; k++) {
        if (array[k] > largest) {
            largest = array[k];
        }

    }
    for (int j = 0; j < size; j++) {
        if (array[j] < largest && array[j] > secondLargest) {
            secondLargest = array[j];
        }
    }



    cout << "\nThe largest array is: " << largest << "!" <<     endl;
    cout << "\nThe second largest array is: " << secondLargest << "!" <<     endl;


}


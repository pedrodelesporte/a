#include <iostream>
using namespace std;

int largestAdjacentSum(int arr[], int size) {
    int biggestSum = arr[0] + arr[1];

    for(int i = 1; i < size - 1; i++) {
        int currentSum = arr[i] + arr[i+1];
        if(currentSum > biggestSum) {
            biggestSum = currentSum;
        }
    }
    return biggestSum;
}

int main() {
    int myArray[] = {1,2,3,4,5,6,7,8,9,10};
    int arraySize = sizeof(myArray)/sizeof(myArray[0]);

    cout << "The pair is: " << largestAdjacentSum(myArray, arraySize) << endl;

    return 0;
}
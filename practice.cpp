#include <iostream>
using namespace std;

void squareNumber(int *number) {
    *number = *number * *number;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    squareNumber(&number);
    cout << "The square number is: " << number << endl;

}



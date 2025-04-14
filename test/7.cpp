#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout << "enter 2 positive numbers: ";
    cin >> x >> y;

    cout << ((x == 20 || y == 20) || (x + y == 20) ? "true" : "false") << endl;

 return 0;
}
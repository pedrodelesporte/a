#include <iostream>
using namespace std;

    int main () {
        double x, y, z;

        cout << "enter 3 numbers: ";
        cin >> x >> y >> z;

        double sum = x + y + z;
        double average = sum / 3;
        double max = x;
        if (y > max) max = y;
        if (z > max) max = z;
        double min = x;
        if (y < min) min = y;
        if (z < min) min = z;

        cout << sum << endl;
        cout << average << endl;
        cout << max << endl;
        cout << min << endl;

        return 0;







    }
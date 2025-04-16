#include <iostream>
using namespace std;


struct Student {
    string name;
    int age;
    bool do_programming;
};

void display(Student X) {
    cout << X.name << endl;
    cout << X.age << endl;
    cout << X.do_programming << endl;

}

 Student student1 = {"Alice", 20, true};
 Student student2 = {"Bob", 18, false};

 int main() {
     display(student1);
     display(student2);
 }


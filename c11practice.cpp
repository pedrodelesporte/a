#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Student {
    int id;
    string name;
    double gpa;
};

void input(Student students_array[], int size) {
    for (int i = 0; i < size; i++) {

        cout << "Enter the ID of student " << i+1 << ":";
        cin >> students_array[i].id;
        cin.get();

        cout << "Enter the name of student " << i+1 << ":";
        getline(cin, students_array[i].name);

        cout << "Enter the GPA of student " << i+1 << ":";
        cin >> students_array[i].gpa;

    }


}

void display(Student students_array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "ID: " << students_array[i].id << ", ";
        cout << "Name: " << students_array[i].name << ", ";
        cout << "GPA: " << fixed << setprecision(1) << students_array[i].gpa << endl;
    }

}

void GPA(Student students_array[], int size) {
    for (int i = 0; i < size; i++) {
        if (students_array[i].gpa > 3.5) {
            cout << "ID: " << students_array[i].id << ", ";
            cout << "Name: " << students_array[i].name << ", ";
            cout << "GPA: " << fixed << setprecision(1) << students_array[i].gpa << endl;
        }

    }

}

Student topStudent(Student students_array[], int size) {
    Student top_student = students_array[0];
    for (int i = 1; i < size; i++) {
        if (students_array[i].gpa > top_student.gpa) {
            top_student = students_array[i];
        }
    }
    cout << "TOP STUDENT IS " << top_student.name << " with a GPA of " << top_student.gpa << endl;

}

 //Student student1 = {"Alice", 20, true};
 //Student student2 = {"Bob", 18, false};

 int main() {
    const int num_students = 3;
    Student students[num_students];
    input(students, num_students);
    cout << "LIST OF STUDENTS:" << endl;
    display (students, num_students);
    cout << "LIST OF STUDENTS with GPA above 3.5" << endl;
    GPA(students, num_students);
    topStudent (students, num_students);



 }


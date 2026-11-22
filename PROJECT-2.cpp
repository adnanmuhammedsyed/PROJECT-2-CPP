#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollno = r;
        name = n;
        setMarks(m);
    }
    int getRollNo() {
        return rollno;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }
    void setMarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        }
        else {
            cout << "Invalid marks for " << name
                 << ", set to 0" << endl;
            marks = 0;
        }
    }
    void display() {
        cout << rollno << " | "
             << name << " | "
             << marks << endl;
    }
};
void printResult(Student s) {
    cout << s.getName() << ": ";

    if (s.getMarks() >= 40) {
        cout << "Pass" << endl;
    }
    else {
        cout << "Fail" << endl;
    }
}

int main() {
    Student batch[3] = {
        Student(101, "Asha", 82),
        Student(102, "Rahul", 35),
        Student(103, "Meera", 105)
    };

    for (int i = 0; i < 3; i++) {
        batch[i].display();
    }

    batch[1].setMarks(45);

    for (int i = 0; i < 3; i++) {
        printResult(batch[i]);
    }

    return 0;
}
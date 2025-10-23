#include <iostream>
using namespace std;

// Base class
class Human {
public:
    void speak() {
        cout << "I can speak." << endl;
    }
};

// Derived from Human
class Student : public Human {
public:
    void study() {
        cout << "I am studying." << endl;
    }
};

// Derived from Student
class GraduateStudent : public Student {
public:
    void research() {
        cout << "I am doing research." << endl;
    }
};

int main() {
    GraduateStudent g1;

    g1.speak();    // from Human
    g1.study();    // from Student
    g1.research(); // from GraduateStudent

    return 0;
}

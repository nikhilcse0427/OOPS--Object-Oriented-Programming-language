
// Create a C++ program to demonstrate Hybrid Inheritance using the classes:
// Human, Male, Female, Student, Boy, and Girl.

// Male and Female inherit from Human (Hierarchical Inheritance).

// Boy inherits from Male and Student (Multiple Inheritance).

// Girl inherits from Female and Student (Multiple Inheritance).
#include <iostream>
using namespace std;

// Base Class
class Human {
public:
    void humanInfo() {
        cout << "I am a human being." << endl;
    }
};

// Derived Classes (Hierarchical Inheritance)
class Male : public Human {
public:
    void maleInfo() {
        cout << "I am male." << endl;
    }
};

class Female : public Human {
public:
    void femaleInfo() {
        cout << "I am female." << endl;
    }
};

// Independent Class
class Student {
public:
    void studentInfo() {
        cout << "I am a student." << endl;
    }
};

// Multiple + Hybrid Inheritance
class Boy : public Male, public Student {
public:
    void boyInfo() {
        cout << "I am a boy." << endl;
    }
};

class Girl : public Female, public Student {
public:
    void girlInfo() {
        cout << "I am a girl." << endl;
    }
};

// Main Function
int main() {
    Boy b1;
    Girl g1;

    cout << "--- Boy Object ---" << endl;
    b1.humanInfo();
    b1.maleInfo();
    b1.studentInfo();
    b1.boyInfo();

    cout << "\n--- Girl Object ---" << endl;
    g1.humanInfo();
    g1.femaleInfo();
    g1.studentInfo();
    g1.girlInfo();

    return 0;
}

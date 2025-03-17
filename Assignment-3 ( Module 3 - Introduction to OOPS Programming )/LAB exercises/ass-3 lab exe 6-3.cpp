//  3. Inheritance Example (Person ? Student, Teacher):

#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class: Student
class Student : public Person {
private: 
    int studentID;

public:
    void setStudentDetails(string n, int a, int id) {
        setDetails(n, a);
        studentID = id;
    }

    void displayStudentDetails() {
        displayDetails();
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived Class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string sub) {
        setDetails(n, a);
        subject = sub;
    }

    void displayTeacherDetails() {
        displayDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    s.setStudentDetails("Udit", 19, 101);
    cout << "Student Details:" << endl;
    s.displayStudentDetails();

    Teacher t;
    t.setTeacherDetails("Mr. Dhruv Patel", 25, "Cse");
    cout << "\nTeacher Details:" << endl;
    t.displayTeacherDetails();

    return 0;
}


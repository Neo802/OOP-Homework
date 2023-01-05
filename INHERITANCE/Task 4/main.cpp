// Inheritance - Task 4

#include <iostream>
using namespace std;

class student {
protected:
    char name[20];
    char faculty[40];
    int age;
    int year;
public:
    int a = 7;
    student() {
        cout << "Constructor for class student" << endl;
    }
    ~student() {
        cout << "Destructor for class student" << endl;
    }
    void set_Student(int& age, int& year) {
        cout << "Age: ";
        cin >> age;
        cin.get();
        cout << "Name: ";
        cin.get(this->name, 20);
        cin.get();
        cout << "Faculty: ";
        cin.get(this->faculty, 40);
        cin.get();
        cout << "Year: ";
        cin >> year;
        cin.get();
        
        this->age = age;
        this->year = year;
    }
    void get_Details() {
        cout << "==================" << endl;
        cout << "Name: " << this->name << "\nAge: " << this->age << "\nFaculty: " << this->faculty << "\nYear: " << this->year << endl;
        cout << "==================" << endl;
    }
};

class employee {
public:
    int b = 13;
    employee() {
        cout << "Constructor for class employee" << endl;
    }
    ~employee() {
        cout << "Destructor for class employee" << endl;
    }
};

class officer : public student, public employee {
public:
    int c = 25;
    officer() {
        cout << "Constructor for class officer" << endl;
        cout << "Class officer inherits from class student and class employee" << endl;
    }
    ~officer() {
        cout << "Destructor for class officer" << endl;
    }
};

int main() {
    int age, year;
    officer* obj = new officer();
    obj -> set_Student(age, year);
    obj -> get_Details();

    cout << "student = " << obj->a << endl;
    cout << "employee = " << obj->b << endl;
    cout << "officer = " << obj->c << endl;

    delete(obj);
    return 0;
}
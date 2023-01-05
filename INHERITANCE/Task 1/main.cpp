// Inheritance - Task 1

#include <iostream>

using namespace std;

class Student {
protected:
    char name[20];
    char faculty[40];
    int age;
    int year;
public:
    void set_Student(int &age, int &year) {
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

    int getAge() {
        return this->age;
    }
    int getYearOfStudy() {
        return this->year;
    }
    string getFaculty() {
        return faculty;
    }
    string getName() {
        return name;
    }
};

class Leader : private Student {
private:
    int leader;
public:
    void set_Leader(int leader) {
        this->leader = leader;
        set_Student(age, year);
    }
    void get_Details() {
        cout << "==================" << endl;
        cout << "Name: " << getName() << "\nAge: " << getAge() << "\nFaculty: " << getFaculty() << "\nYear: " << getYearOfStudy() << endl;
        cout << "Leader: " << this->leader << endl;
        cout << "==================" << endl;
    }
};

int main()
{
    Leader* leader = new Leader();
    leader->set_Leader(1);
    leader->get_Details();

}
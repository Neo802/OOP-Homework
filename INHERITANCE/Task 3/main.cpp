// Inheritance - Task 3

#include <iostream>

using namespace std;

class Student {
protected:
    char name[20];
    char faculty[40];
    int age;
    int year;
public:
    Student() {
        cout << "Constructor for class Student\n";
        cout << "Age: ";
        cin >> this->age;
        cin.get();
        cout << "Name: ";
        cin.get(this->name, 20);
        cin.get();
        cout << "Faculty: ";
        cin.get(this->faculty, 40);
        cin.get();
        cout << "Year: ";
        cin >> this->year;
        cin.get();
    }
    ~Student() {
        cout << "Destructor for class Student\n";
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
    Leader() {
        cout << "Constructor for class Leader\n";
    }
    ~Leader() {
        cout << "Destructor for class Leader\n";
    }
    void set_Leader(int leader) {
        this->leader = leader;
        //set_Student(age, year);
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

    delete(leader);
}
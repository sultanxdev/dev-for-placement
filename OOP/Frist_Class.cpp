#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    int age;
    string department;

    // Change department
    void changeDept(const string& newDept) {
        department = newDept;
    }

    // Set salary
    void setSalary(double sal) {
        salary = sal;
    }

    // Get salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    Teacher t1;

    t1.name = "Sultan";
    t1.age = 22;
    t1.changeDept("Computer Science");
    t1.setSalary(50000);

    cout << "Name: " << t1.name << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Department: " << t1.department << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    cout<<"enter a number";
    int a;
    cin>>a;

    return 0;
}

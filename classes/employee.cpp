#include "employee.h"
using namespace std;

Employee::Employee() {
    cout << "Employee object created" << endl;
}

Employee::Employee(int id, string firstName, string lastName) {
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
}

string Employee::getFullName() {
    return firstName + " " + lastName;
}

void Employee::displayDetails() {
    cout << "ID: " << id << endl << "Name: " << getFullName() << "\n\n";
}

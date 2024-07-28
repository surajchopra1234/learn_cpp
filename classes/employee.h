#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
public:
    int id;
    std::string firstName;
    std::string lastName;

    Employee();

    Employee(int, std::string, std::string);

    std::string getFullName();

    void displayDetails(); // Outside class function declaration
};

// Header file should not contain using.

#endif

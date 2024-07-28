#include <iostream>
#include <string>
#include <new>

using namespace std;

// Class declaration =>

// class Animal {     // Base class
// public:
//     int age;
//     string color;
//
//     void run() {
//         cout << "Running" << endl;
//     }
// };

// class Dog : public Animal {     // Derived class
// public:
//     string petName;
//
//     void bark() {
//         cout << "Barking" << endl;
//     }
// };

// class Lion : public Animal {     // Derived class
// public:
//     void roar() {
//         cout << "Roaring" << endl;
//     }
// };

// class Circle {
// private:          // Private access specifier
//     float radius;
//
// public:           // Public access specifier
//     void setRadius(float radius) {
//         this->radius = radius;
//     }
//
//     double getArea() {
//         return 3.14 * radius * radius;
//     }
// };

// class Person {
// protected:          // Protected access specifier
//     string phoneNumber;
//
// public:
//     string fullName;
//
//     void setPhoneNumber(string phoneNumber) {
//         this->phoneNumber = phoneNumber;
//     }
//
//     void displayPersonDetails() {
//         cout << "Name: " << fullName << ", Phone: " << phoneNumber << endl;
//     }
// };

// class Student : public Person {
// public:
//     int id;
//
//     void displayStudentDetails() {
//         cout << "Id: " << id << ", Name: " << fullName << ", Phone: " << phoneNumber << endl;
//     }
// };

// class Animal {
// public:
//     virtual void sound() {     // Virtual function
//         cout << "Animal class: making sound" << endl;
//     }
//
//     virtual void sleep() {
//         cout << "Animal class: sleeping" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     virtual void sound() {
//         cout << "Dog class: bow-bow" << endl;
//     }
//
//     void sleep() {      // Also work without virtual keyword
//         cout << "Dog class: sleeping" << endl;
//     }
// };

// class Animal {                  // Abstract class
// public:
//     virtual void sound() = 0; // Pure virtual function
//
//     virtual void sleep() {
//         cout << "Animal class: sleeping" << endl;
//     }
// };

// class Dog : public Animal {     // Concrete class
// public:
//     virtual void sound() {
//         cout << "Dog class: bow-bow" << endl;
//     }
//
//     virtual void sleep() {
//         cout << "Dog class: sleeping" << endl;
//     }
// };

// class Animal {                   // Abstract class (Interface)
// public:
//     virtual void sound() = 0; // Pure virtual function
//
//     virtual void sleep() = 0; // Pure virtual function
// };

// class Dog : public Animal {      // Concrete class
// public:
//     virtual void sound() {
//         cout << "Dog class: bow-bow" << endl;
//     }
//
//     virtual void sleep() {
//         cout << "Dog class: sleeping" << endl;
//     }
// };

// class Employee {
// private:
//     string phNo;
// public:
//     string name;
//
//     void setPhoneNumber(string phoneNumber) {
//         this->phNo = phoneNumber;
//     }
//
//     friend class Car;                // Making Car class as friend of Employee class
//
//     friend void display(Employee);   // Making display function as friend of Employee class
// };

// void display(Employee emp) {         // Friend function of Employee class
//     cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << endl;
// }

// class Car {                          // Friend class of Employee class
// public:
//     string carName;
//
//     void display(Employee emp) {
//         cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << ", Car name: " << carName << endl;
//     }
// };

int main() {
    /**
     * ==================== Inheritance ====================>
     */

    // Inheritance is a mechanism in which one class acquires the properties and methods of another class.

    // The capability of a class to derive properties and characteristics from another class is called inheritance.
    // The class whose properties and methods are inherited is called the parent/base/super class.
    // The class that inherits the properties and methods is called the child/derived/sub class.

    // Animal animal;
    // animal.age = 7;
    // animal.color = "White";
    // animal.run();

    // Dog dog;
    // dog.age = 5;
    // dog.color = "Black";
    // dog.petName = "Jackie";
    // dog.bark();
    // dog.run();

    // Lion lion;
    // lion.age = 10;
    // lion.color = "Brown";
    // lion.roar();
    // lion.run();

    // Types of Inheritance:

    //
    // (1).Single Inheritance =>
    //

    // Inheritance in which a class is derived from only one base class.
    // One base class and one derived class.

    //
    // (2).Multilevel Inheritance =>
    //

    // Inheritance in which a class is derived from a class which is also derived from another class.
    // One base class, one derived class, and another derived class.

    //
    // (3).Hierarchical Inheritance =>
    //

    // Inheritance in which more than one derived class is created from a single base class.
    // One base class and multiple derived classes.

    //
    // (4).Multiple Inheritance =>
    //

    // Inheritance in which a class is derived from more than one base class.
    // Multiple base classes and one derived class.

    // Syntax: class DerivedClass : visibilityMode BaseClass1, visibilityMode BaseClass2, ... {
    //    // Derived class members
    // };

    //
    // (5).Hybrid Inheritance =>
    //

    // Inheritance in which a combination of two or more types of inheritance is used.
    // Combination of all types of inheritance.

    /**
     * ==================== Access Specifiers ====================>
     */

    // Access specifiers define how the members (properties and methods) of a class can be accessed.
    // Access specifiers are also called access modifiers.

    // There are three types of access specifiers:

    //
    // (1).Public =>
    //

    // Class members are accessible from outside the class.

    //
    // (2).Private =>
    //

    // Class members cannot be accessed from outside the class.
    // Without access specifiers, the default access specifier is private.

    // Circle circle;
    // circle.setRadius(5);
    // cout << "Area of the circle is " << circle.getArea() << " square units." << endl;

    // Data hiding refers to hiding the data from outside the external world.
    // Abstraction refers to hiding the implementation details.
    // Encapsulation refers to wrapping up of data and methods into a single unit.

    //
    // (3).Protected =>
    //

    // Class members are accessible from outside the class, however, they cannot be accessed from outside the class.

    // Person person;
    // person.fullName = "Rahul Kamal";
    // person.setPhoneNumber("+91-9431457389");
    // person.displayPersonDetails();

    // Student student;
    // student.id = 1;
    // student.fullName = "Aditya Sharma";
    // student.setPhoneNumber("+91-8877850356");
    // student.displayStudentDetails();

    /**
     * ==================== Polymorphism ====================>
     */

    // Polymorphism is a Greek word that means "many-forms" (one name and many forms).

    // Polymorphism is the ability of objects to take on different forms or behavior in different ways
    // depending on the context in which they are used.

    // There are two types of polymorphism:
    // (1).Compile-time Polymorphism - Function/Method Overloading and Operator Overloading.
    // (2).Run-time Polymorphism - Function/Method Overriding and Virtual Functions.

    //
    // Function Overriding =>
    //

    // Function overriding is a feature that allows a child class to provide a specific implementation
    // of a method that is already provided by its parent class.

    // Function have same name and same parameters in both parent and child class.

    // Animal animal;
    // animal.sound();
    // animal.sleep();

    // Dog dog;
    // dog.sound();
    // dog.sleep();

    //
    // Virtual Functions =>
    //

    // A virtual function is a member function in the base class that we
    // expect to redefine in derived classes.

    // Virtual functions are declared by using the virtual keyword.
    // Virtual functions are used to achieve run-time polymorphism.

    // The overridden virtual function in the derived class is implicitly virtual.

    // Dog dog;     // dog --> Dog object
    // dog.sound();
    // dog.sleep();

    // Animal *animal = new Dog();     // animal --> Dog object
    // animal->sound();
    // animal->sleep();

    /**
     * ==================== Abstract Class ====================>
     */

    //
    // Pure Virtual Functions =>
    //

    // A pure virtual function is a virtual function that has no implementation in the base class.
    // Syntax: virtual void functionName() = 0;

    // Pure virtual functions must be overridden in the derived class.

    //
    // Abstract Class =>
    //

    // An abstract class is a class that has at least one pure virtual function.
    // An abstract class can have non attributes and methods.
    // An abstract class cannot be instantiated.

    // A concrete class is a child class that inherits from an abstract base class.

    // Animal *animal = new Dog(); // animal --> Dog object
    // animal->sound();
    // animal->sleep();

    // An abstract class concept is different from abstraction.

    //
    // Interface =>
    //

    // An abstract class with only pure virtual functions is called an interface.
    // All interfaces are abstract classes but all abstract classes are not interfaces.

    /**
     * ==================== Friend Class and Friend Function ====================>
     */

    //
    // Friend Class =>
    //

    // Friend class is a class that can access the private and protected members
    // of another class in which it is declared as a friend.

    // Employee employee;
    // employee.name = "Rishi Raj";
    // employee.setPhoneNumber("+91-8093563840");

    // Car car;
    // car.carName = "Ferrari 488";
    // car.display(employee);

    //
    // Friend Function =>
    //

    // Friend function is a function that can access the private and protected members
    // of a class in which it is declared as a friend.

    /**
     * ==================== Miscellaneous Concept ====================>
     */

    // C++ have 90+ reserved keywords.

    // Pascal case: EmployeeDetails
    // Pascal case is used for class names.

    return 0;
}

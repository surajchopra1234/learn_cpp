#include <iostream>
#include <string>

using namespace std;

// Function declaration =>

// string getFullName(string, string);
// void display(int, float, string message = "Welcome!");
// void add(int, int);
// void add(string, string);
// void add(int, int, int);

// Class declaration =>

// class Employee {
// public:                // Access specifier
//     int id;            // Attribute or data member
//     string firstName;  // Attribute or data member
//     string lastName;   // Attribute or data member
//
//     Employee() {       // Default constructor declaration
//         cout << "Employee object created" << endl;
//     }
//
//     Employee(int, string, string);  // Parameterized constructor declaration
//
//     ~Employee() {      // Destructor declaration
//         cout << "Employee object destroyed" << endl;
//     }
//
//     string getFullName() {          // Inside class function declaration.
//         return firstName + " " + lastName;
//     }
//
//     void displayDetails();          // Outside class function declaration
// };

// Employee::Employee(int id, string firstName, string lastName) {
//     this->id = id;
//     this->firstName = firstName;
//     this->lastName = lastName;
// }

// void Employee::displayDetails() {
//     cout << "ID: " << id << endl << "Name: " << getFullName() << "\n\n";
// }

int main() {
    /**
     * ==================== Basic ====================>
     */

    // std is a abbreviation of standard (Namespace).
    // cout is a object of ostream class.
    // << : Insertion operator.
    // endl is a manipulator function which insert a new line character.

    // cout << "Helle World!" << endl;

    /**
     * ==================== Migrating From C to C++ ====================>
     */

    //
    // Variables and Data Types =>
    //

    // string name = "Farm House";
    // char size = 'M';
    // int personItServes = 2;
    // float retailPrice = 365.8;

    // cout << name << "\n";
    // cout << size << endl;
    // cout << personItServes << endl;
    // cout << retailPrice << endl;

    // cout << "Yay! You have ordered a " << name << " pizza of size " << size << " that "
    //         "serves " << personItServes << ".\nPlease pay Rs. " << retailPrice << " to the delivery person.";

    //
    // User Input =>
    //

    // string name;
    // char size;
    // int personItServes;
    // float retailPrice;

    // cout << "Enter pizza name: ";
    // >> : Extraction operator.
    // cin >> name;         // It take input until it encounters a whitespace.
    // getline(cin, name);  // It take input until it encounters a newline character.

    // cout << "Enter the size of the pizza as either 'S', 'M' or 'L': ";
    // cin >> size;

    // cout << "Enter the number of persons it serves: ";
    // cin >> personItServes;

    // cout << "Enter retail price: ";
    // cin >> retailPrice;

    // cout << "Yay! You have ordered a " << name << " pizza of size " << size << " that "
    //         "serves " << personItServes << ".\nPlease pay Rs. " << retailPrice << " to the delivery person.";

    //
    // Strings =>
    //

    // A string object is represented as a array of characters terminated by a null character '\0'.
    // Syntax: string variableName = "value";

    // String declaration.
    // string firstName = "Rahul";
    // string lastName = "Kamal";
    // string fullName = getFullName(firstName, lastName);

    // Accessing a character (Because string is a array of characters).
    // char letter = firstName[1];  // 'a'

    // Modify the value.
    // firstName = "Rahul";

    // String array.
    // string names[] = {"Rahul", "Ravi", "Peter"};

    // User input.
    // string nickName;
    // cout << "Enter nick name:";
    // cin >> nickName;         // It take input until it encounters a whitespace.
    // getline(cin, nickName);  // It take input until it encounters a newline character.

    // (1).length method - gets the length of the string.
    // int length = firstName.length();  // 5

    // (2).compare method - compares two strings lexicographically.
    // Returns 0 if both strings are equal.
    // int result = firstName.compare(lastName);

    // (3).append method - adds new characters (string) at the end of another string object.
    // firstName.append(lastName);  // RahulKamal

    //
    // Boolean =>
    //

    // Boolean is a data type (bool) that can have two values: true or false.
    // Syntax: bool variableName = value;

    // True means 1 and False means 0.

    // bool isCodingFun = true;

    // if (isCodingFun) {
    //     cout << "Let's code more." << endl;
    // } else {
    //     cout << "Find another job." << endl;
    // }

    // int x = 9, y = 20;
    // bool b1 = x > y;   // false (Output: 0)
    // bool b2 = x < y;   // true (Output: 1)
    // bool b3 = x == y;  // false (Output: 0)
    // cout << "b1: " << b1 << endl;
    // cout << "b2: " << b2 << endl;
    // cout << "b3: " << b3 << endl;

    // cout << true + 7;  // 8

    //
    // Default Parameters =>
    //

    // Default parameters are the parameters that are initialized with a default value.
    // Default parameters should be at the end of the normal parameter list.

    // Function with 3 parameters.
    // display(2, 40.8, "Welcome! Hope you are doing great.");

    // Function with 2 parameters (1 default parameter).
    // display(10, 7.8);

    //
    // Function Overloading =>
    //

    // Function overloading allows us to have more than one function with the same name but different parameters.
    // Return type of the function does not play any role in function overloading.

    // add(10, 20);
    // add("Hello ", "World");
    // add(91, 85, 74);

    // C++ have a new primary data type called bool.
    // C++ have a new user-defined data type called class.

    /**
     * ==================== Class and Object ====================>
     */

    // OOPs (Object-Oriented Programming System) is a programming paradigm that uses
    // "objects" to design applications and computer programs.

    // Class is a blueprint for the object.
    // Class variables are called attributes/data members/properties.
    // Class functions are called methods.

    // Object is a real-world entity that has state and behavior.
    // State : Data (Variables)
    // Behavior : Methods (Functions)

    //
    // Class Data Members =>
    //

    // Employee emp1;
    // emp1.id = 1;
    // emp1.firstName = "Rahul";
    // emp1.lastName = "Sharma";

    // cout << "ID: " << emp1.id << endl << "Name: " << emp1.firstName << " " << emp1.lastName << "\n\n";

    //
    // Class Methods =>
    //

    // For defining a function outside the class, we use the scope resolution operator.
    // (::) : Scope resolution operator.

    // Employee emp1;
    // emp1.id = 1;
    // emp1.firstName = "Rahul";
    // emp1.lastName = "Sharma";

    // cout << "ID: " << emp1.id << endl << "Name: " << emp1.getFullName() << "\n\n";
    // emp1.displayDetails();

    /**
     * ==================== Constructors and Destructors ====================>
     */

    //
    // Constructors =>
    //

    // Constructors are special member functions that are called when an object is created.
    // Constructors are always declared in the public section of the class.
    // Constructors can be defined inside or outside the class.
    // Constructors have the same name as the class.
    // Constructors do not have a return type.

    // Types of Constructors:

    //
    // (1). Default Constructor: Constructor with no parameters.
    //

    // Compiler provides a default constructor if we do not define any constructor.

    //
    // (2). Parameterized Constructor: Constructor with parameters.
    //

    // (this->) : Pointer to the object that invokes the method.

    // Employee emp1(1, "Rahul", "Sharma");
    // emp1.displayDetails();

    //
    // (3). Copy Constructor: Constructor that initializes an object using another object of the same class.
    //

    // Copy constructor is provided by the compiler if we do not define any constructor.

    // Employee emp2 = emp1;		// Executes copy constructor
    // emp2.id = 2;
    // emp2.displayDetails();

    // Constructor Overloading is a concept of having more than one constructor in a class.
    // Constructor Overloading should have different parameters.

    //
    // Destructors =>
    //

    // Destructors are special member functions that are called when an object goes out of scope.
    // Destructors are always declared in the public section of the class.
    // Destructors have the same name as the class preceded by a tilde (~).

    return 0;
}

// Function definition.

// string getFullName(string firstName, string lastName) {
//     return firstName + " " + lastName;
// }

// void display(int num1, float num2, string message) {
//     cout << "num1: " << num1 << endl;
//     cout << "num2: " << num2 << endl;
//     cout << "message: " << message << endl << endl;
// }

// void add(int num1, int num2) {
//     cout << num1 + num2 << endl;
// }

// void add(string str1, string str2) {
//     cout << str1 + str2 << endl;
// }

// void add(int num1, int num2, int num3) {
//     cout << num1 + num2 + num3 << endl;
// }

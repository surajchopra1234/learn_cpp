#include <iostream> // File Inclusion definition
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

// Namespaces =>

// namespace jp {
//     float dollarValue = 108; // 1 USD = 108 Japanese Yen
//
//     double toDollars(float currencyUnits) {
//         return currencyUnits / dollarValue;
//     }
// }

// namespace cn {
//     float dollarValue = 7; // 1 USD = 7 Chinese Yuan
//
//     double toDollars(float currencyUnits) {
//         return currencyUnits / dollarValue;
//     }
// }

// using namespace jp;

// Macros =>

// #define UPPER_LIMIT 10		// Macro definition
// #define AREA(r) (3.14 * r * r)	// Macro with parameter

int main() {
    /**
     * ==================== Namespaces ====================>
     */

    // Namespaces are used to organize code into logical groups and to prevent name collisions.
    // Syntax: namespace name { code }

    // To access a namespace, use the scope resolution operator (::).

    // Using namespaces we can create variables, functions, classes, etc. with the same name.

    // cout << "1 USD = " << jp::dollarValue << " Yen" << endl;
    // cout << "1 USD = " << cn::dollarValue << " Yuan" << endl;

    // cout << "8960 Yen = " << jp::toDollars(8960) << " USD" << endl;
    // cout << "610 Yuan = " << cn::toDollars(610) << " USD" << endl;

    // Using the 'using' directive to avoid using the scope resolution operator.
    // Syntax: using namespace name;

    // cout << "1 USD = " << dollarValue << " Yen" << endl;
    // cout << "8960 Yen = " << toDollars(8960) << " USD" << endl;

    // Local variables take precedence over namespace variables.

    /**
     * ==================== Standard Libraries ====================>
     */

    // Standard library is a collection of classes and functions that are meant to perform specific tasks.
    // Example: iostream is a standard library that provides objects like cin, cout, etc. to handle I/O operations.

    // C => C++ Standard Library

    // stdio.h => iostream
    // stdlib.h => cstdlib
    // time.h => ctime
    // string.h => cstring/string

    // unistd.h => unistd.h (It is not a part of the C++ standard library)
    // unistd.h is a part of operating system libraries.

    // int randomValue;
    // srand(time(NULL));
    // randomValue = (rand() % 6) + 1;

    // cout << "Rolling the dice..." << endl;
    // usleep(2000000);
    // cout << "You got: " << randomValue << endl;

    // srand or rand => cstdlib file.
    // time => ctime file.
    // usleep => unistd.h file.

    //
    // cmath =>
    //

    // int x = 4, y = 9;

    // cout << "The greater number: " << fmax(x, y) << endl; // 9
    // cout << "The smaller number: " << fmin(x, y) << endl; // 4
    // cout << "The difference: " << fdim(y, x) << endl; // 5
    // cout << "2 to the power 4: " << pow(2, 4) << endl; // 2^4 = 16

    // cout << sqrt(64) << endl; // 8
    // cout << round(2.5) << endl; // 3
    // cout << round(2.4) << endl; // 2
    // cout << floor(4.9) << endl; // 4
    // cout << log(2) << endl; // 0.693

    //
    // vector =>
    //

    // Vector is similar to an array but it can change its size dynamically.
    // Vector can store elements of the same data type.

    // Vector can also store objects of a class.

    // vector<string> names;
    // names.push_back("Rahul"); // Adds element at the end
    // names.push_back("Peter");
    // names.push_back("Ravi");

    // Check the size.
    // cout << "Size: " << names.size() << endl; // 3

    // Accessing an element.
    // cout << "Element at index 0: " << names[0] << endl; // Rahul

    // Remove element from the end.
    // names.pop_back(); // Removes element from the end.
    // cout << "Size: " << names.size() << endl; // 2

    // Modify element.
    // names[0] = "Aditya";
    // cout << "Element at index 0: " << names[0] << endl; // Aditya

    /**
     * ==================== Preprocessor Directives ====================>
     */

    //
    // Macros =>
    //

    // Macros are preprocessor directives that are used to define constants or to create code snippets.

    // Macros are defined using the #define directive.
    // Syntax: #define name value

    // Macros can be defined with or without parameters.

    // There is no semicolon at the end of the macro definition.
    // There is no data type associated with the macro.

    // for (int i = 1; i <= UPPER_LIMIT; i++) {
    //     if (i % 2 == 0)
    //         cout << i << endl;
    // }

    // cout << "Area: " << AREA(5); // 3.14 * 5 * 5

    //
    // File Inclusion =>
    //

    // File inclusion is a preprocessor directive that is used to include the contents of a file in the current file.
    // Syntax: #include <filename>
    // Syntax: #include "filename" (For user-defined files)

    // All preprocessor directives start with a # symbol.

    /**
     * ==================== Exception Handling ====================>
     */

    // Types of errors:

    // (1).Compile-time errors
    // (2).Runtime errors (Exceptions)

    // Try & Catch blocks are used to handle exceptions.
    // Catch block receives the exception thrown by the try block in the form of an pointer.

    // int a, b;

    // cout << "Enter a:";
    // cin >> a;

    // cout << "Enter b:";
    // cin >> b;

    // try {
    //     if (b == 0)
    //         throw "The value of 'b' must not be 0. Please try again.";
    //     int result = a / b;
    //     cout << endl << "Result: " << result << endl << endl;
    // } catch (const char *msg) {
    //     cout << endl << msg << endl << endl;
    // }

    // Class definition need a semicolon at the end.

    /**
     * ==================== Debugging ====================>
     */

    // Debugging is the process of finding and fixing errors in a program.
    // Debugging is done using a debugger tool.

    // Tracking values of variables, breakpoints, etc.

    // Breakpoints are used to pause the execution of a program at a specific line of code.
    // Step over - Executes the current line and moves to the next line.
    // Step into - If the current line contains a function call, it will move to the first line of the function.
    // Step out - If the current line is inside a function, it will execute the remaining lines of the function
    // and move to the next line after the function call.

    /**
     * ==================== File Handling ====================>
     */

    // File handling is the process of reading from and writing to files.

    // fstream (File Stream) - Used to read and write to a file.
    // ofstream (Output File Stream) - Used to write to a file.
    // ifstream (Input File Stream) - Used to read from a file.

    //
    // Writing file =>
    //

    // Create an ofstream (Output File Stream) object.
    // ofstream oFile;

    // Create a file (if it doesn't exist) and open it.
    // oFile.open("my-note.txt");

    // Write on the file.
    // oFile << "Hi!" << endl;
    // oFile << "I love to travel." << endl;
    // oFile << "I am " << 20 << " years old." << endl;

    // Close the opened file.
    // oFile.close();

    //
    // Reading file =>
    //

    // The string will hold the text present in each line on the file.
    // string str;

    // Create ifstream (Input File Stream) object.
    // ifstream iFile;

    // Open the file.
    // iFile.open("my-note.txt");

    // Use a while loop together with the getline() function to read the file line by line.
    // while (!iFile.eof()) {
    //     getline(iFile, str); // Reads a line.
    //     cout << str << endl; // Prints the line.
    // }

    // Close the opened file.
    // iFile.close();

    /**
     * ==================== Miscellaneous Concept ====================>
     */

    //
    // Programming Paradigms =>
    //

    // Programming paradigms are a way to classify programming languages based on their features.

    // (1).Object-Oriented Programming (OOP) - C++, Java, Python, etc.
    // (2).Procedural Programming - C, Pascal, etc.

    // Class and Object doesn't exist in procedural programming.
    // Inheritance is not possible in procedural programming.
    // Function overloading is not possible in procedural programming.
    // Access specifiers are not possible in procedural programming.

    // Function is more important than data in procedural programming.

    // C++ is a multi-paradigm programming language because it supports both procedural and object-oriented programming.

    //
    // C vs C++ =>
    //

    // Exception handling is not possible in C.
    // C++ can be said a superset of C.

    //
    // Program execution flow =>
    //

    // (1).Preprocessor
    // Removes comments, expands macros, includes files, etc.
    // File extension changes from .cpp to .i.

    // (2).Compiler
    // Check syntax, semantics, etc.
    // Converts the expanded code to assembly code.
    // File extension changes from .i to .s.

    // (3).Assembler
    // Converts assembly code to object code.
    // File extension changes from .s to .obj (Windows) or .o (Linux).

    // (4).Linker
    // Converts object code to executable code.
    // File extension changes from .obj/.o to .exe (Windows) or .out (Linux).

    // (5).Loader
    // Loads the executable code into the memory and executes it.

    // .i => Expanded code
    // .s => Assembly code
    // .obj/.o => Object code
    // .exe/.out => Executable code

    // .cpp -> .i -> .s -> .obj/.o -> .exe/.out

    return 0;
}

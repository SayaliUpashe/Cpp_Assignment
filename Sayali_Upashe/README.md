# CPP-Training-Batch2

## CPP MAR.24 Branch

# C++ Notes and Lab programs are mentioned Here:- 

## Overview
This guide provides a comprehensive introduction to C++ programming, covering key concepts such as data types, operators, control structures, functions, object-oriented programming (OOP), and other advanced topics.

## Table of Contents
1. [History of C++](#history-of-c++)
2. [C++ Versions](#c++-versions)
3. [Compilers and IDEs](#compilers-and-ides)
4. [Basic C++ Syntax](#basic-c++-syntax)
5. [Data Types](#data-types)
6. [Operators](#operators)
7. [Control Statements](#control-statements)
8. [Functions](#functions)
9. [Object-Oriented Programming](#object-oriented-programming)
10. [Example Programs](#example-programs)
11. [Additional Resources](#additional-resources)



### Basic C++ Syntax
A simple C++ program includes headers, a `main` function, and uses `cin` and `cout` for input and output. Comments can be added using `//` for single-line or `/* */` for multi-line.

```cpp
#include <iostream>
int main() {
    std::cout << "Welcome to C++ Programming!";
    return 0;
}
```

### Data Types
C++ provides various data types:
- **Built-in**: `int`, `float`, `double`, `char`, `bool`
- **Derived**: Arrays, pointers, functions
- **User-defined**: Structures, classes, unions, enumerations

### Operators
Operators in C++ include:
- **Arithmetic**: `+`, `-`, `*`, `/`, `%`
- **Relational**: `<`, `>`, `<=`, `>=`, `==`, `!=`
- **Logical**: `&&`, `||`, `!`
- **Bitwise**: `&`, `|`, `^`, `~`, `<<`, `>>`
- **Special**: Scope resolution (`::`), pointer to member (`->*`, `.*`), `new`, `delete`

### Control Statements
C++ includes:
- **Conditional Statements**: `if`, `else`, `switch`
- **Loops**: `for`, `while`, `do-while`
- **Unconditional**: `break`, `continue`, `return`, `goto`

### Functions
C++ supports different function types and features:
- **Inline functions** - Suggested for small, frequently used functions to optimize performance.
- **Function Overloading** - Enables multiple functions with the same name but different parameters.
- **Default Arguments** - Allows parameters to have default values if not provided during function call.

### Object-Oriented Programming
Key concepts in C++ OOP include:
- **Classes and Objects**: Define structures to hold data and methods to manipulate that data.
- **Encapsulation**: Wrap data and methods in classes, controlling access with private/public/protected keywords.
- **Inheritance**: Derive new classes from existing ones, allowing for code reuse.
- **Polymorphism**: Use base class pointers to refer to derived class objects.
  
#### Example Class
```cpp
class BankAccount {
    private:
        char name[40];
        int accno;
    public:
        void input();
        void display();
};
```



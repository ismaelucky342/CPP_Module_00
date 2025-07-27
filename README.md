
# CPP Module 00 - Introduction to C++

## Overview

This module introduces the fundamental concepts of C++ programming, focusing on the transition from C to C++98. Through three progressive exercises, you'll learn basic C++ syntax, input/output operations, string manipulation, and your first steps into object-oriented programming with classes and methods.

## Learning Objectives

- Understanding basic C++ program structure and syntax
- Mastering command-line argument handling
- Learning string manipulation and character processing
- Implementing basic classes with member functions
- Understanding input/output streams in C++
- Exploring the concept of encapsulation

## Key Concepts

### C++ vs C Differences
- **Namespaces**: Using `std::` namespace for standard library functions
- **Input/Output**: `std::cout`, `std::cin` instead of `printf`/`scanf`
- **String handling**: `std::string` class instead of character arrays
- **Function overloading**: Multiple functions with the same name but different parameters

### Object-Oriented Programming Basics
- **Classes**: User-defined data types that encapsulate data and functions
- **Encapsulation**: Hiding internal implementation details
- **Member functions**: Functions that operate on class data
- **Access specifiers**: `private`, `public`, and `protected` keywords

## Project Structure

```
CPP_Module_00/
├── ex00/          # Megaphone - Command Line & String Processing
├── ex01/          # My Awesome PhoneBook - Classes & I/O
├── ex02/          # The Job Of Your Dreams - Advanced OOP
└── README.md      # This file
```

## Exercises

### ex00: Megaphone
**Objective:** Master basic C++ syntax, command-line arguments, and string manipulation.

**Description:**
Create a program that converts command-line arguments to uppercase and prints them. If no arguments are provided, display a default loud message.

**Requirements:**
- Accept multiple command-line arguments
- Convert all characters to uppercase
- Print arguments concatenated without spaces
- Handle the case of no arguments with a specific message

**Key Learning Points:**
- Basic C++ program structure (`main` function)
- Command-line argument processing (`argc`, `argv`)
- String manipulation using C++ methods
- Character case conversion
- Output using `std::cout`

**Implementation Details:**
```cpp
// Example usage:
./megaphone hello world
// Output: HELLOWORLD

./megaphone
// Output: * LOUD AND UNBEARABLE FEEDBACK NOISE *
```

---

### ex01: My Awesome PhoneBook
**Objective:** Implement your first C++ class with member functions and data encapsulation.

**Description:**
Create a simple phonebook application using classes that can store and retrieve contact information.

**Class Design:**

1. **Contact Class:**
   - Private attributes: first name, last name, nickname, phone number, darkest secret
   - Public methods: getters and setters for all attributes
   - Input validation for all fields

2. **PhoneBook Class:**
   - Private attribute: array of Contact objects (max 8 contacts)
   - Private attribute: current number of contacts
   - Public methods: `addContact()`, `searchContact()`, `displayContacts()`

**Program Features:**
- **ADD**: Add a new contact (replace oldest if phonebook is full)
- **SEARCH**: Display all contacts in a formatted table, then show detailed view
- **EXIT**: Quit the program

**Key Learning Points:**
- Class definition and implementation
- Data encapsulation and access control
- Member function implementation
- Array management within classes
- Input validation and error handling
- Formatted output using `std::setw()` and `std::setfill()`

**Implementation Requirements:**
- Contact information cannot be empty
- Display contacts in a neat table format (10 characters wide per column)
- Truncate long fields with a dot if they exceed column width
- Handle invalid input gracefully

---

### ex02: The Job Of Your Dreams
**Objective:** Understand static members, class instantiation, and log file recreation.

**Description:**
Recreate the behavior of a given log file by implementing an `Account` class that manages bank account operations and statistics.

**Account Class Features:**

**Static Members:**
- Track total number of accounts
- Track total amount across all accounts
- Track total number of deposits and withdrawals

**Instance Members:**
- Account index (unique identifier)
- Amount (current balance)
- Number of deposits and withdrawals for this account

**Required Methods:**
- `makeDeposit(unsigned int deposit)` - add money to account
- `makeWithdrawal(unsigned int withdrawal)` - withdraw money (if sufficient funds)
- `checkAmount()` - return current balance
- `displayStatus()` - show account information
- `displayAccountsInfos()` - static method to show global statistics

**Key Learning Points:**
- Static vs instance members
- Static member functions
- Object initialization and destruction
- Global state management
- Timestamp formatting
- Log file analysis and recreation

**Implementation Challenges:**
- Must match exact log format including timestamps
- Handle insufficient funds for withdrawals
- Maintain accurate global statistics
- Proper constructor and destructor behavior

**Expected Log Format:**
```
[19920104_091532] index:0;amount:42;created
[19920104_091532] accounts:1;total:42;deposits:0;withdrawals:0
[19920104_091532] index:0;amount:54;deposits:1;withdrawals:0
...
```

---

## Build Instructions

Each exercise includes a Makefile for compilation:

```bash
cd ex00
make
./megaphone [arguments...]

cd ../ex01
make
./phonebook

cd ../ex02
make
./account
```

## C++ Best Practices Introduced

1. **Header Guards**: Prevent multiple inclusion of header files
2. **Const Correctness**: Use `const` keyword appropriately
3. **Initialization Lists**: Prefer initialization over assignment in constructors
4. **Naming Conventions**: Consistent naming for classes, functions, and variables
5. **File Organization**: Separate header (.hpp) and implementation (.cpp) files

## Common Beginner Mistakes to Avoid

- **Missing `std::`**: Remember to use namespace prefix or `using namespace std;`
- **Uninitialized variables**: Always initialize variables before use
- **Array bounds**: C++ doesn't check array boundaries automatically
- **Missing const**: Mark methods that don't modify object state as `const`
- **Public data members**: Use private members with public accessor methods

---

**CPP Module 00** establishes the foundation for C++ programming, introducing essential concepts that will be built upon in subsequent modules. Master these basics to succeed in more advanced topics like inheritance, polymorphism, and template programming.

---
*Born2code - 42 School*
- Implement the Account Class: Create a class that handles the basic operations of a bank account, including creating accounts, making deposits and withdrawals, and managing global statistics.
- Display Account Information: Implement methods to display the status of each account and global statistics about all accounts.
- Manage Transaction Times: Include a function that displays the current timestamp for each transaction, helping to track when transactions are made.
- Test Functionality: Develop a main program that creates multiple accounts, performs deposits and withdrawals, and then displays account information and global statistics.


# Extras

These exercises have provided a practical and in-depth understanding of several important aspects of C++ programming. Solutions to real-world problems have been implemented, from basic string and data structure manipulation to the simulation of more complex financial transactions. Each exercise contributed to the development of key skills in program design, data management, and user interaction. The experience gained in these exercises provides a solid foundation for tackling more advanced programming challenges and developing more complex applications in C++.

-Born2code

![42madrid](https://github.com/ismaelucky342/Born2code/assets/153450550/3a377f34-9156-4eff-b04b-71c4b128523e)

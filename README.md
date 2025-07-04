# Encryptix_Task_2
# Simple Calculator - README

## Description
This is a basic console-based calculator program written in C++. It performs arithmetic operations (addition, subtraction, multiplication, and division) on two user-input numbers.

## Features
- Supports four basic arithmetic operations:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
- Handles division by zero error gracefully
- Input validation for operators
- Simple and intuitive user interface

## How to Run
1. Ensure you have a C++ compiler installed (e.g., g++)
2. Compile the program: `g++ task2.cpp -o calculator`
3. Run the executable: `./calculator` (Linux/Mac) or `calculator.exe` (Windows)

## Usage Instructions
1. Run the program
2. Enter the first number when prompted
3. Enter the second number when prompted
4. Choose an operation from the following options: +, -, *, /
5. The program will display the result or an error message if:
   - Division by zero is attempted
   - An invalid operator is entered

## Requirements
- C++ compiler
- Standard Library (iostream)

## Notes
- The program uses `double` data type for numbers to support decimal values
- Division operation includes a check for division by zero
- The program terminates after one calculation (does not loop for multiple operations)

## Example Usage
```
Enter first number: 10
Enter second number: 5
Enter an operator(+,-,*,/): *
Answer: 50
```

This simple calculator provides a clean implementation of basic arithmetic operations suitable for learning purposes or quick calculations.

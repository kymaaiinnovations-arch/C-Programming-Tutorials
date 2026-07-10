# C Programming Tutorial

This repository contains a simple step-by-step C programming course. Each topic is explained in a beginner-friendly way with a short definition and a small example.

---

## 00 - Course Guide

### What is C?
C is a powerful and widely used programming language. It is used for system software, embedded systems, and application development.

Example:
```c
#include <stdio.h>

int main() {
    printf("Hello, C Programming!\n");
    return 0;
}
```

---

## 01 - Basic Computer

### Computer parts
A computer is made of hardware and software. Hardware is the physical part, and software is the instructions that make the hardware work.

Example:
```c
#include <stdio.h>

int main() {
    printf("Computer has CPU, Memory, and Storage.\n");
    return 0;
}
```

### Data representation
Data is stored in computers using binary digits, 0 and 1.

### ASCII table
ASCII is a coding system that assigns numbers to characters like letters and symbols.

### Input and output
Input means receiving data from the user, and output means showing data on the screen.

Example:
```c
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    return 0;
}
```

---

## 02 - Programming Fundamentals

### Variables
Variables are containers used to store data in a program.

Example:
```c
int age = 20;
```

### Data types
Data types define the kind of data a variable can hold, such as int, float, char, and double.

Example:
```c
int marks = 90;
float average = 85.5;
char grade = 'A';
```

### Comments
Comments are notes written in the code and ignored by the compiler.

Example:
```c
// This is a comment
int x = 5;
```

### Constants
Constants are values that do not change during program execution.

Example:
```c
#define PI 3.14
```

### Identifiers
Identifiers are the names given to variables, functions, and other elements.

Example:
```c
int studentAge = 18;
```

### Keywords
Keywords are reserved words in C with special meanings.

Example:
```c
int main() {
    return 0;
}
```

### scanf and printf
printf displays output, and scanf reads input from the user.

### Type casting
Type casting converts one data type into another.

Example:
```c
int a = 5;
float b = (float)a;
```

### Size of data types
The sizeof operator shows how much memory a data type uses.

Example:
```c
#include <stdio.h>

int main() {
    printf("%lu\n", sizeof(int));
    return 0;
}
```

---

## 03 - Operators

### Arithmetic operators
These operators perform basic math operations.

Example:
```c
int a = 10, b = 5;
printf("%d\n", a + b);
```

### Assignment operators
These operators assign values to variables.

Example:
```c
int x = 10;
x += 5;
```

### Relational operators
These compare two values.

Example:
```c
int a = 5, b = 3;
printf("%d\n", a > b);
```

### Logical operators
These combine conditions.

Example:
```c
int a = 5, b = 3;
printf("%d\n", a > 2 && b < 10);
```

### Bitwise operators
These work on bits of numbers.

Example:
```c
int a = 5, b = 3;
printf("%d\n", a & b);
```

### Increment and decrement
These increase or decrease a value by 1.

Example:
```c
int x = 5;
x++;
```

### Ternary operator
This is a short form of if-else.

Example:
```c
int age = 20;
(age >= 18) ? printf("Adult") : printf("Minor");
```

---

## 04 - Decision Making

### if statement
An if statement runs code only when a condition is true.

Example:
```c
int age = 20;
if (age >= 18) {
    printf("Adult\n");
}
```

### if-else statement
It runs one block of code for true and another for false.

Example:
```c
int marks = 40;
if (marks >= 40) {
    printf("Pass\n");
} else {
    printf("Fail\n");
}
```

### else-if ladder
It checks multiple conditions one by one.

### Nested if
A nested if is an if inside another if.

### switch case
Switch case is used when there are many choices.

Example:
```c
int day = 2;
switch (day) {
    case 1: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    default: printf("Other\n");
}
```

---

## 05 - Loops

### for loop
A for loop repeats code a fixed number of times.

Example:
```c
for (int i = 1; i <= 3; i++) {
    printf("%d\n", i);
}
```

### while loop
A while loop repeats code while a condition is true.

Example:
```c
int i = 1;
while (i <= 3) {
    printf("%d\n", i);
    i++;
}
```

### do-while loop
A do-while loop runs at least once before checking the condition.

### Pattern programs
Patterns are made by printing characters or numbers in loops.

---

## 06 - Functions

### Function
A function is a block of code that performs a task.

Example:
```c
#include <stdio.h>

void greet() {
    printf("Hello!\n");
}

int main() {
    greet();
    return 0;
}
```

### Recursion
Recursion is when a function calls itself.

Example:
```c
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}
```

---

## 07 - Arrays

### Array
An array stores multiple values of the same type in one variable.

Example:
```c
int marks[3] = {80, 90, 70};
printf("%d\n", marks[1]);
```

### One-dimensional array
A one-dimensional array stores values in a single list.

### Two-dimensional array
A two-dimensional array stores values in rows and columns.

### Array sum and average
These programs calculate the total and average of array elements.

Example:
```c
int arr[5] = {10, 20, 30, 40, 50};
int sum = 0;
for (int i = 0; i < 5; i++) {
    sum += arr[i];
}
printf("Sum = %d\n", sum);
```

### Linear search
Linear search checks elements one by one until the target is found.

---

## 08 - Strings

### String
A string is a sequence of characters used to store text.

Example:
```c
char name[] = "Kyma";
printf("%s\n", name);
```

### String declaration and initialization
A string can be declared and initialized directly.

### String input and output
Strings can be input and printed using scanf and printf.

Example:
```c
char name[20];
scanf("%s", name);
printf("Hello %s\n", name);
```

### String length
The length of a string means how many characters it contains.

Example:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Kyma";
    printf("Length = %d\n", strlen(name));
    return 0;
}
```

### String compare, copy, concatenate, and reverse
These operations help us work with text in C.

Example:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";
    char b[] = "World";
    strcat(a, b);
    printf("%s\n", a);
    return 0;
}
```

---

## Summary

C programming starts with basics like variables, input/output, and control flow. Once you understand these topics, you can build programs using loops, functions, arrays, and strings.

Happy learning!

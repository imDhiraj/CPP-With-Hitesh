# C++ STL and OOP Concepts with Notes

This repository contains C++ code examples and notes covering important concepts of the Standard Template Library (STL), Object-Oriented Programming (OOP), and various advanced C++ features. The code and explanations are based on the lecture videos by [Hitesh Sir](https://youtu.be/FpfHmAkRVK4?si=vnNdRyW2ag5qOyhu), and each commit contains a different concept for easy reference.

## Table of Contents
- [STL Concepts](#stl-concepts)
- [Smart Pointers](#smart-pointers)
- [OOP Concepts](#oop-concepts)
- [C++ Features](#cpp-features)
- [Memory Management](#memory-management)
- [Miscellaneous](#miscellaneous)

---

## STL Concepts

1. **[Priority Queue](https://github.com/imDhiraj/CPPWithHitesh/commit/adb6669)**: An STL container that allows managing elements with priority, ideal for scheduling tasks like thread management based on task quantity.
2. **[Queue](https://github.com/imDhiraj/CPPWithHitesh/commit/da2f723)**: A FIFO container in STL. Unlike vectors, elements in a queue are stored non-contiguously, typically implemented using linked lists.
3. **[List](https://github.com/imDhiraj/CPPWithHitesh/commit/8bb7a74)**: A doubly linked list that allows fast insertion and deletion of elements in a non-contiguous memory structure.
4. **[Vector Basics](https://github.com/imDhiraj/CPPWithHitesh/commit/5d4eb07)**: Discusses vector methods and how vector dynamically adjusts its size based on requirements.
5. **[Vector Methods](https://github.com/imDhiraj/CPPWithHitesh/commit/f8a7516)**: An overview of different vector methods and their use cases.
6. **[Partition](https://github.com/imDhiraj/CPPWithHitesh/commit/3a2b0b2)**: STL partitioning methods with three types: basic partition, stable partition, and partition point.
7. **[Searching](https://github.com/imDhiraj/CPPWithHitesh/commit/b7bb21d)**: Overview of searching techniques in STL using sorted arrays and the `find` function in vectors.
8. **[Sorting](https://github.com/imDhiraj/CPPWithHitesh/commit/afee4ac)**: Various STL sorting functions and algorithms with generic usage.
9. **[Functors](https://github.com/imDhiraj/CPPWithHitesh/commit/10d9d5f)**: Introduction to functors in C++, objects that behave like functions with the `()` operator.
10. **[Move Semantics](https://github.com/imDhiraj/CPPWithHitesh/commit/58e6756)**: A performance optimization technique that allows moving data instead of copying, leading to memory efficiency.

## Smart Pointers

1. **[Unique Pointer](https://github.com/imDhiraj/CPPWithHitesh/commit/c1672dd)**: Introduction to unique pointers, which ensure that only one pointer can point to a resource at a time.
2. **[Shared and Weak Pointers](https://github.com/imDhiraj/CPPWithHitesh/commit/d0e34db)**: Explanation of shared pointers and weak pointers, with details on reference counting and memory management.
3. **[Weak Pointers](https://github.com/imDhiraj/CPPWithHitesh/commit/32c352d)**: Detailed explanation of weak pointers, reference counting, and usage examples to prevent circular references.

## OOP Concepts

1. **[Multiple Inheritance](https://github.com/imDhiraj/CPPWithHitesh/commit/4187317)**: Explanation of multiple inheritance in C++, using multiple classes to combine functionality.
2. **[Friend Class](https://github.com/imDhiraj/CPPWithHitesh/commit/788ca14)**: Friend class usage and its associated pros and cons.
3. **[Base Class for Inheritance](https://github.com/imDhiraj/CPPWithHitesh/commit/6cf67fe)**: Guidelines for writing a base class for inheritance and rules for working with multiple inherited classes.
4. **[THIS Keyword](https://github.com/imDhiraj/CPPWithHitesh/commit/ff47000)**: Explanation of the `this` keyword in C++ with two approaches: Hitesh’s and Telsko’s explanation.
5. **[Constructor, Copy Constructor, and Destructor](https://github.com/imDhiraj/CPPWithHitesh/commit/5588836)**: Detailed notes on constructors, copy constructors, and destructors, including parameterized constructors.

## C++ Features

1. **[Lambda Expressions](https://github.com/imDhiraj/CPPWithHitesh/commit/9551ccd)**: Introduction to lambda expressions, small inline functions that can be written and executed instantly.
2. **[File Handling](https://github.com/imDhiraj/CPPWithHitesh/commit/8a0bac7)**: Explanation of file handling in C++ including file creation, deletion, updating, and renaming.
3. **[Rule of Three](https://github.com/imDhiraj/CPPWithHitesh/commit/1106419)**: A detailed look into the Rule of Three, explaining implicit function generation post-C++11.
4. **[Virtual Keyword](https://github.com/imDhiraj/CPPWithHitesh/commit/e43fa94)**: Usage of the `virtual` keyword in C++ polymorphism and pointers.
5. **[Variadic Functions](https://github.com/imDhiraj/CPPWithHitesh/commit/c5641bd)**: Introduction to variadic functions and how to handle multiple arguments in a single function.

## Memory Management

1. **[Memory Allocation](https://github.com/imDhiraj/CPPWithHitesh/commit/ac36459)**: Low-level memory allocation concepts, explaining stack (static) vs. heap (dynamic) memory.
2. **[Memory Leak](https://github.com/imDhiraj/CPPWithHitesh/commit/58a1cf7)**: Example of a memory leak scenario and its solution.
3. **[Pointer and Memory](https://github.com/imDhiraj/CPPWithHitesh/commit/2ae4401)**: Explanation of pointer usage for public and private variables, including octal number system usage.
4. **[Move Semantics](https://github.com/imDhiraj/CPPWithHitesh/commit/58e6756)**: Techniques for optimizing memory usage by transferring ownership of resources.

## Miscellaneous

1. **[Macros](https://github.com/imDhiraj/CPPWithHitesh/commit/ddf58b2)**: How to define macros in C++ and use them to simplify code reuse, while also discussing potential pitfalls.
2. **[Recursion](https://github.com/imDhiraj/CPPWithHitesh/commit/b6b449d)**: Explanation of recursion with a focus on its application and the importance of a base case.
3. **[Function Overloading and Nullptr](https://github.com/imDhiraj/CPPWithHitesh/commit/aa4d124)**: Details on function overloading and the use of `nullptr` to reduce ambiguity.
4. **[Function Pointers](https://github.com/imDhiraj/CPPWithHitesh/commit/77fb6e6)**: The use of function pointers to optimize function calls.
5. **[Qualifiers and Linkers](https://github.com/imDhiraj/CPPWithHitesh/commit/959fc6d)**: Introduction to function qualifiers, their types, and the concept of linkers in C++.
6. **[Try-Catch Blocks](https://github.com/imDhiraj/CPPWithHitesh/commit/bbac359)**: Exception handling using `try-catch` blocks in C++ for handling runtime errors.
7. **[Switch Case](https://github.com/imDhiraj/CPPWithHitesh/commit/4fb28d4)**: Implementation and use cases of switch-case in C++.
8. **[Bitwise Operators](https://github.com/imDhiraj/CPPWithHitesh/commit/4daebeb)**: Explanation of bitwise operators, which are frequently used in interviews, including AND, OR, NOT, etc.

---

### Getting Started
To use the code and examples, clone this repository and explore the individual commits. Each commit message corresponds to a specific concept explained above.

```bash
git clone https://github.com/imDhiraj/CPPWithHitesh.git
cd CPPWithHitesh
---



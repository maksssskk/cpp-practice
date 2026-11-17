# C++ Fundamentals Practice

A collection of 5 foundational C++ exercises focused on transitioning from dynamic typing to static memory management, STL containers, references, and custom data structures (as a bridge to Object-Oriented Programming).

## Implemented Tasks

1. **Prime Numbers (`czyPierwsza`)**
   * **Concepts:** Functions, `bool` return types, loop optimization ($O(\sqrt{n})$ divisor check), edge-case handling (`0`, `1`, `2`).
   * **Task:** Reads an integer $N$ and outputs all prime numbers in the range $[1, N]$.

2. **Min & Max via References**
   * **Concepts:** Pass-by-reference (`int&`) for returning multiple outputs, read-only pass-by-const-reference (`const std::vector<int>&`) to avoid unnecessary memory copying, safe boundary initialization.
   * **Task:** Finds both the minimum and maximum values in a vector within a single function call.

3. **Vector Statistics**
   * **Concepts:** Dynamic arrays (`std::vector<double>`), `size_t` vs. `int` indexing, explicit type casting (`static_cast<double>`) to prevent integer division truncation.
   * **Task:** Reads $N$ floating-point numbers and calculates their sum, arithmetic mean, and the count of elements strictly greater than the average.

4. **Palindrome Checker**
   * **Concepts:** Full-line input with whitespace (`std::getline`), two-pointer technique, character normalization (`std::tolower`, `<cctype>`).
   * **Task:** Checks whether an input string reads the same forward and backward, ignoring spaces and letter case.

5. **Student Records (`struct` / `class` Bridge)**
   * **Concepts:** Custom data types (`struct` & `class`), encapsulation (`private` fields, `public` methods), modular decomposition (`wczytaj()`, `srednia()`, `wypisz()`).
   * **Task:** Reads $N$ student records (name and grade), identifies the top-performing student, and computes the group's average grade.

## Build & Run

Compile using `clang++` (or `g++`) with C++14 or newer:

```bash
clang++ -std=c++17 -Wall -Wextra c++-practice.cpp -o practice
./practice

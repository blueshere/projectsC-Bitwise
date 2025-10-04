# C Programming: Bitwise Operations Projects

This repository contains small C projects designed to demonstrate the power and efficiency of bitwise operations. These examples are perfect for anyone preparing for technical interviews or looking to understand low-level optimizations in C.

---

## Projects Included

### 1. Check if a Number is Even or Odd

* **File:** `isEvenOrOdd.c`
* **Concept:** This program uses the bitwise **AND (`&`)** operator to determine if a number is even or odd.
* **Logic:** A number is odd if its least significant bit (LSB) is 1, and even if it's 0. By performing a bitwise AND with 1 (`number & 1`), we can isolate the LSB. If the result is 1, the number is odd; otherwise, it's even. This method is often faster than using the modulo operator (`%`).

### 2. Swap Two Numbers using XOR

* **File:** `swapWithXOR.c`
* **Concept:** This program swaps the values of two integer variables without using a third temporary variable. It relies on the properties of the bitwise **XOR (`^`)** operator.
* **Logic:** The XOR swap algorithm uses a three-step process based on the following properties of XOR:
    1.  `x ^ x = 0`
    2.  `x ^ 0 = x`
    3.  `x ^ y = y ^ x` (Commutative)
    4.  `(x ^ y) ^ y = x` (The core of the trick)
* This is a classic interview question that tests your understanding of bitwise operations.

---

## How to Compile and Run

You can compile and run these files using any standard C compiler like GCC.

1.  **Open your terminal or command prompt.**
2.  **Navigate to the directory where you cloned the repository.**
3.  **Compile the desired file:**
    ```bash
    # To compile the Even/Odd checker
    gcc isEvenOrOdd.c -o isEvenOrOdd

    # To compile the XOR swap program
    gcc swapWithXOR.c -o swapWithXOR
    ```
4.  **Run the executable:**
    ```bash
    # To run the Even/Odd checker
    ./isEvenOrOdd

    # To run the XOR swap program
    ./swapWithXOR
    ```

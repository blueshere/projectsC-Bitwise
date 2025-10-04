# Check if a Number is Even or Odd using Bitwise AND

This C program demonstrates a highly efficient method to determine if an integer is even or odd using bitwise operations.

---

## Core Concept

The logic relies on checking the **Least Significant Bit (LSB)** of a number's binary representation.

* For any **even** number, the LSB is always **0**. (e.g., 10 is `101**0**` in binary)
* For any **odd** number, the LSB is always **1**. (e.g., 7 is `011**1**` in binary)

Instead of using the computationally slower modulo operator (`%`), this program uses the bitwise **AND (`&`)** operator. By performing `number & 1`, we effectively isolate the LSB. If the result is `0`, the number is even; otherwise, it is odd.

---

## How to Compile and Run

1.  **Compile the program using GCC:**
    ```bash
    gcc isEvenOrOdd.c -o isEvenOrOdd
    ```

2.  **Run the executable:**
    ```bash
    ./isEvenOrOdd
    ```

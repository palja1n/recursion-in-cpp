# Recursion in C++

**Name:** Pal Jain  
**Class:** ENTC A3  
**PRN:** 24070123067  
**Title:** Implementation of Recursion in C++  

---

## Aim
To understand and implement recursion in C++ by writing programs for:
- Calculating the factorial of a number  
- Finding the sum of the first `n` natural numbers  
- Reversing a string using recursion  

---

## Objectives
- Learn the concept of recursion and its role in problem-solving.  
- Write recursive functions for mathematical and string-based problems.  
- Compare recursion with iteration in terms of simplicity, readability, and efficiency.  
- Study how function calls are handled by the **call stack** during recursion.  

---

## Theory
**Recursion** is a programming approach where a function calls itself to solve smaller instances of a larger problem. It follows the **divide and conquer** idea: break the task into smaller sub-problems until a **base case** is reached. Once the base case is met, the recursive calls **unwind** and return results back up the stack.  

Example:  
`Factorial(5)` → `5 × Factorial(4)` → `5 × 4 × Factorial(3)` → … → `5 × 4 × 3 × 2 × 1`  

---

### 1. Working of Recursion
- **Function Call:** Each call is pushed to the call stack.  
- **Base Case:** If the condition is satisfied, recursion stops.  
- **Recursive Case:** If not, the function calls itself with updated arguments.  
- **Unwinding:** Results are returned step by step until the first call is resolved.  

---

### 2. Key Components
- **Base Case:** Condition that terminates recursion.  
- **Recursive Case:** The step where the function calls itself.  
- **Call Stack:** Memory that stores active function calls until completion.  

---

### 3. Advantages
- Simplifies problems like tree traversal, backtracking, and divide-and-conquer algorithms (e.g., Merge Sort, Quick Sort).  
- Matches mathematical definitions (factorial, Fibonacci, GCD).  
- Improves readability by reducing repetitive code.  

---

### 4. Disadvantages
- Higher memory usage (stack frames for each call).  
- Slower execution due to repeated function calls.  
- More difficult to debug compared to iterative loops.  

---

### 5. Real-Life Applications
- **Mathematics:** Factorials, Fibonacci, power calculations.  
- **Data Structures:** Traversal of trees and graphs (DFS).  
- **Algorithms:** Quick Sort, Merge Sort, Binary Search.  
- **Backtracking:** Sudoku, N-Queens, maze solving.  
- **Systems:** Directory traversal, compiler parsing.  

---

### 6. Types of Recursion
- **Direct Recursion:** A function directly calls itself (e.g., factorial).  
- **Indirect Recursion:** A function calls another, which calls back the first.  
- **Tail Recursion:** Recursive call is the last statement in the function.  
- **Non-Tail Recursion:** Recursive call is followed by additional operations.  

---

### 7. Recursion vs Iteration

| Feature        | Recursion                    | Iteration                |
|----------------|------------------------------|--------------------------|
| Definition     | Function calling itself       | Loop repeats till condition |
| Termination    | Needs base case               | Needs loop condition     |
| Memory Usage   | High (uses call stack)        | Low                      |
| Performance    | Slower (function overhead)    | Faster (direct looping)  |
| Readability    | Compact, elegant              | Longer, verbose          |
| Risk           | Stack overflow                | Infinite loop            |
| Applications   | Trees, graphs, backtracking   | Simple counters, sums    |

---

## Programs and Algorithms

### 1. Factorial
- Start  
- Input `n`  
- If `n == 0` or `n == 1` → return 1 (**base case**)  
- Else → return `n * factorial(n-1)` (**recursive case**)  
- Print result  
- End  

### 2. Sum of N Natural Numbers
- Start  
- Input `n`  
- If `n == 0` → return 0 (**base case**)  
- Else → return `n + sum(n-1)` (**recursive case**)  
- Print result  
- End  

### 3. String Reversal
- Start  
- Input string  
- If `start >= end` → stop (**base case**)  
- Swap `str[start]` with `str[end]`  
- Call function again with `start+1` and `end-1`  
- Print reversed string  
- End  

---

## Program Summary
- Implemented three recursive programs: **factorial**, **sum of natural numbers**, and **string reversal**.  
- Demonstrated **base case** and **recursive case** in each example.  
- Showed how recursion reduces code complexity for repetitive problems.  

---

## Concepts Used
- Recursion (self-calling functions).  
- Modular code using C++ functions.  
- If-else conditions for base cases.  
- Call stack mechanism (stack frames).  
- String manipulation with character swaps.  

---

## Conclusion
This experiment explored recursion in C++ through practical examples.  

Key takeaways:  
- Recursion simplifies logic for factorial, summation, and string reversal.  
- A **base case** is mandatory to avoid infinite recursion.  
- Recursion is memory-heavy compared to iteration but often provides cleaner and more mathematical solutions.  


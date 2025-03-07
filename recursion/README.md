![Recursion Image](https://upload.wikimedia.org/wikipedia/commons/2/21/Recursion_Branching.svg)

# C - Recursion
This repository contains several tasks demonstrating the concept of recursion in C programming. It covers various recursive functions to help solidify the understanding of recursion in problem-solving.

---

### Table of Contents
1. **General Concepts** - Overview of recursion, its implementation, and usage.
2. **Tasks** - Each task is an individual C file that implements a recursive function.
    - `puts_recursion.c`: Function that prints a string, followed by a new line.
    - `print_rev_recursion.c`: Function that prints a string in reverse.
    - `strlen_recursion.c`: Function that returns the length of a string.
    - `factorial.c`: Function that returns the factorial of a given number.
    - `pow_recursion.c`: Function that returns the value of `x` raised to the power of `y`.
    - `sqrt_recursion.c`: Function that returns the natural square root of a number.
    - `is_prime_number.c`: Function that returns 1 if the input integer is a prime number, otherwise returns 0.

---

### General:

#### What is Recursion?
Recursion is a programming technique in which a function calls itself to solve smaller instances of the same problem. It breaks down complex problems into more manageable sub-problems.

#### How to Implement Recursion
1. **Base Case**: Define the condition that stops the recursion.
2. **Recursive Case**: Modify the problem so that the function moves closer to the base case with each call.

#### When to Implement Recursion
- **Hierarchical Data Structures**: Trees and graphs.
- **Divide and Conquer**: Problems like sorting and searching.
- **Mathematical Sequences**: Factorial, Fibonacci, etc.

#### When Not to Implement Recursion
- **Memory Issues**: If recursion depth could be very large and lead to stack overflow.
- **Performance**: When an iterative solution would be more efficient.

---

### Tasks:

#### 0. `puts_recursion.c`
- **Description**: Prints a string, followed by a new line.
- **Test Output**: 
    ```bash
    Hello, Recursion!
    ```

#### 1. `print_rev_recursion.c`
- **Description**: Prints a string in reverse using recursion.
- **Test Output**: 
    ```bash
    !noitcusreC ,olleH
    ```

#### 2. `strlen_recursion.c`
- **Description**: Returns the length of a string recursively.
- **Test Output**: 
    ```bash
    Length of 'Hello': 5
    ```

#### 3. `factorial.c`
- **Description**: Returns the factorial of a given number recursively.
- **Test Output**: 
    ```bash
    Factorial of 5: 120
    ```

#### 4. `pow_recursion.c`
- **Description**: Returns the value of `x` raised to the power of `y`.
- **Test Output**: 
    ```bash
    2 raised to the power of 3: 8
    ```

#### 5. `sqrt_recursion.c`
- **Description**: Returns the natural square root of a number.
- **Test Output**: 
    ```bash
    Square root of 16: 4
    ```

#### 6. `is_prime_number.c`
- **Description**: Returns 1 if the input integer is a prime number, otherwise returns 0.
- **Test Output**: 
    ```bash
    Is 7 a prime number? Yes
    Is 10 a prime number? No
    ```

---

### Resources:

Here are some useful resources related to recursion and the C programming language:

- [Recursion - GeeksforGeeks](https://www.geeksforgeeks.org/recursion/)
- [The C Programming Language](https://www.tutorialspoint.com/cprogramming/)
- [Recursion and Problem Solving](https://www.freecodecamp.org/news/recursion-in-programming/)
- [Factorial Calculation in C](https://www.programiz.com/c-programming/examples/factorial)

---

### Creator:

**Fahd Challadia**  
Projects from the week: March 2025 - March 2025 (C - Recursion)

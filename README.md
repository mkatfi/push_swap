
# push_swap - Sorting with Stacks  

![push_swap Banner](https://github.com/user-attachments/assets/8ccaa514-7c6f-46fe-bb5b-fe5357d30aa8)

*A project to create a sorting algorithm using stacks and a limited set of operations.*  

---

## Overview  

**push_swap** is a challenging project from the 1337 School curriculum that involves sorting data on a stack using a set of predefined operations. The objective is to write a program that finds the shortest sequence of moves to sort the stack efficiently. This project focuses on algorithmic thinking, problem-solving, and optimizing code performance.  

---

## Key Objectives  

- Implement and understand sorting algorithms using stack-based operations.  
- Optimize the number of operations needed to sort data.  
- Deepen knowledge of data structures such as stacks and linked lists.  
- Develop efficient and well-structured C code.  

---

## Features  

- Two stacks (`A` and `B`) used for sorting integers.  
- Limited operations:  
  - `sa`, `sb`, `ss` — Swap the first two elements of a stack.  
  - `pa`, `pb` — Push the first element of one stack to the other.  
  - `ra`, `rb`, `rr` — Rotate a stack (shift all elements up).  
  - `rra`, `rrb`, `rrr` — Reverse rotate a stack (shift all elements down).  
- Validates input and ensures error handling for invalid data.  
- Handles various cases: small sets of numbers, large sets, and edge cases like duplicates.  

---

## Functionality  

The **push_swap** program takes a list of integers as input and outputs the sequence of operations to sort them using the smallest number of moves.  

### Usage  

1. Compile the program:  
   ```bash  
   make  
   ```  

2. Run the program with a list of integers:  
   ```bash  
   ./push_swap [list of integers]  
   ```  

3. Example:  
   ```bash  
   ./push_swap 3 2 1  
   ```  
   Output:  
   ```bash  
   sa  
   ra  
   ```  

4. Test if the output is correct by piping it into a checker (provided separately):  
   ```bash  
   ./push_swap 3 2 1 | ./checker 3 2 1  
   ```  
   If the sorting is correct, the checker will output `OK`.  

---

## Project Structure  

| File                 | Description                                      |  
|----------------------|--------------------------------------------------|  
| `push_swap.c`        | Main program logic and sorting implementation.   |  
| `operations.c`       | Functions for stack operations (swap, push, rotate, etc.). |  
| `stack_utils.c`      | Utility functions for stack management.          |  
| `push_swap.h`        | Header file with function prototypes and macros. |  
| `Makefile`           | Script to compile the program.                   |  

---

## Algorithm  

### Small Set of Numbers  

For 3 to 5 numbers, a hardcoded logic is used to minimize operations based on specific cases.  

### Larger Set of Numbers  

For larger sets, advanced sorting algorithms like:  
- **Radix Sort**  
- **Quick Sort with Pivoting**  

These algorithms are tailored to minimize the number of operations while maintaining performance.  

---

## Bonus  

The bonus part of the project involves implementing a **Checker** program:  
- Validates if a given sequence of operations sorts the stack correctly.  
- Example:  
  ```bash  
  ./checker 3 2 1  
  ```  
  Input operations:  
  ```bash  
  sa  
  ra  
  ```  
  Output:  
  ```bash  
  OK  
  ```  

---

## Testing  

### Test Cases  

1. Small Input:  
   ```bash  
   ./push_swap 4 3 2 1  
   ```  

2. Large Input:  
   ```bash  
   ARG=$(seq 1 100 | shuf); ./push_swap $ARG  
   ```  

### Testers  

Use the following testers to validate your implementation:  
- [push_swap Tester by Tripouille](https://github.com/Tripouille/push_swap_tester)  
- [push_swap Visualizer](https://github.com/o-reo/push_swap_visualizer)  

---

## Contributions  

This project is part of the 1337 School curriculum and is intended for educational purposes. Contributions are not accepted, but feel free to fork and experiment with it!  

---

## Author  

Developed by **mkatfi** as part of the curriculum at **1337 School**, a member of the 42 Network.  

---

## License  

This project is subject to the rules and policies of 1337 School. Redistribution or plagiarism is strictly prohibited.  

---

## Acknowledgments  

Special thanks to 1337 School for their innovative approach to learning and for fostering an environment that challenges students to grow and excel.  

---
```
SUMMARY = The project will make you sort data on a stack, with a limited set of instructions, using the lowest number of actions. To succeed you will have to manipulate various types of algorithms and choose the most appropriate solution for an optimized data sorting.


RULES = The game is composed of 2 stacks named A and B.
To start with:
A contains a random number of either positive or negative numbers without any duplicates.
B is empty.
The goal is to sort in ascending order numbers into stack A.
To do this, you have the following operations.


OPERATIONS

sa - swap a: swap the first 2 elements at the top of stack a. (do nothing if there is only one or no elements).
sb - swap b: swap the first 2 elements at the top of stack b. (do nothing if there is only one or no elements).
ss - ss: swap a and swap b at the same time.
pa - push a: take the first element at the top of b and put it at top of a. (do nothing if b is empty).
pb - push b: take the first element at the top of a an dput it at top of b. (do nothing if a is empty).
ra - rotate a: shift up all elements of stack a by 1. the first element becomes the last one.
rb - rotate b: shift up all elements of stack b by 1. the first element becomes the last one.
rr - rr: rotate a and rotate b at the same time.
rra - reverse rotate a: shift down all elements of stack a by 1. the last element becomes the first one.
rrb - reverse rotate b: shift down all elements of stack b by 1. the last element beoomes the first one.
rrr - rrr: reverse rotate a and reverse rotate b at the same time.


TESTING


Change the <number_of_random_args> with any number u want!
make test ARG=<number_or_random_args>

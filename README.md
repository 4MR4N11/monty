# Monty

## Description

This repository contains the files for the Monty project, which is part of the curriculum of the low-level programming and algorithm track at alx-africa. In this project, we were required to build an interpreter for Monty ByteCodes files.

## Files

- [monty.h](./monty.h) - Header file containing all the function prototypes and data structures used in this project.

- [main.c](./main.c) - Entry point of the program.

- [addfirst.c](./addfirst.c) - Contains the function that adds a new node at the beginning of a stack_t list.

- [free_stack.c](./free_stack.c) - Contains the function that frees a stack_t list.

- [parse_line.c](./parse_line.c) - Contains the function that parses a line of Monty ByteCodes and calls the appropriate function to execute the line.

- [push.c](./push.c) - Contains the function that pushes an element to the stack.

- [pall.c](./pall.c) - Contains the function that prints all the elements of the stack.

## Usage

To use the program, clone this repository into your local repository:

```bash
git clone https://github.com/4MR4N11/monty.git
```

Compile the program using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

Run the program using the following command:

```bash
./monty <file>
```

## Opcode Functions

| Opcode | Description |
| --- | --- |
| push | Pushes an element to the stack. |
| pall | Prints all the elements of the stack. |
| pint | Prints the value at the top of the stack. |
| pop | Removes the top element of the stack. |
| swap | Swaps the top two elements of the stack. |
| add | Adds the top two elements of the stack. |
| nop | Does nothing. |
| sub | Subtracts the top element of the stack from the second top element of the stack. |
| div | Divides the second top element of the stack by the top element of the stack. |
| mul | Multiplies the second top element of the stack with the top element of the stack. |
| mod | Computes the rest of the division of the second top element of the stack by the top element of the stack. |
| pchar | Prints the char at the top of the stack. |
| pstr | Prints the string starting at the top of the stack. |
| rotl | Rotates the stack to the top. |
| rotr | Rotates the stack to the bottom. |
| stack | Sets the format of the data to a stack (LIFO). |
| queue | Sets the format of the data to a queue (FIFO). |

## Examples

```bash
$ cat bytecodes/00.m
push 1
push 2
push 3
pall
$ ./monty bytecodes/00.m
3
2
1
```

```bash
$ cat bytecodes/01.m
push 1
push 2
push 3
pall
swap
pall
$ ./monty bytecodes/01.m
3
2
1
2
3
1
```

```bash
$ cat bytecodes/02.m
stack
push 1
push 2
push 3
pall
queue
push 4
push 5
push 6
pall
$ ./monty bytecodes/02.m
3
2
1
6
5
4
```

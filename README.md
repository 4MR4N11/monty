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

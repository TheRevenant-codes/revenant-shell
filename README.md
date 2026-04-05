# REVENANT Shell

A lightweight Unix-style shell built from scratch in C.

## About

REVENANT is a minimal shell implementation written in C, built as a foundation for understanding how operating systems and shells work at a low level. This project is a stepping stone toward building a full operating system from scratch.

## Features

- Custom shell prompt (REVENANT>)
- Command execution via OS system calls
- Built-in commands:
  - cd path — change directory
  - help — list available commands
  - exit — quit the shell
- Custom error handling
- Startup banner

## How To Run

### Requirements
- GCC compiler (MinGW-w64 on Windows, GCC on Linux)

### Compile
gcc main.c -o revenant

### Run
./revenant

## What I Learned

- How shells act as a middleman between the user and the OS
- Why built-in commands like cd must be handled by the shell itself and not passed to a child process
- How system() creates child processes to execute commands
- Process concepts — parent vs child processes
- C fundamentals — char arrays, string comparison, loops, functions

## Roadmap

- Piping support
- Background processes
- Command history
- Memory allocator implementation

## Author

REVENANT — Software Engineering Student, Nigeria

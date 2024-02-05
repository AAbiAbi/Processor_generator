# Process Generator

This C program for Linux takes a single integer argument `n` from the command line and creates a set of `2 * n` processes. Each process displays the phrase "I am process `x`," where x is the process ID (PID), and then terminates.

## Usage

To compile and run the program, follow these steps:

1. Open a terminal and navigate to the directory containing the program files.

2. Compile the program using the following command:

    ```bash

      gcc -o process_generator process_generator.c
    ```

3. Run the program with the desired value of n as a command-line argument:
   
  ```bash
  ./process_generator <n>
  ```

  Replace `<n>` with a positive integer value. For example, to create 4 sets of processes:
  ```bash
  ./process_generator 4
  ```

The program will generate `2 * n` child processes, and each child process will display its PID and a message indicating its identity.

## Example Output

For instance, running ./process_generator 4 might produce the following output:
```css

I am process 1 with pid 12345
I am process 2 with pid 12346
I am process 3 with pid 12347
I am process 4 with pid 12348
I am process 5 with pid 12349
I am process 6 with pid 12350
I am process 7 with pid 12351
I am process 8 with pid 12352
```

## Requirements

    Linux environment: Ubuntu 20
    GCC compiler (GNU Compiler Collection)

## Author

Ningchen Liang

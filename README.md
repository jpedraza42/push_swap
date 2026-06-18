*This project has been created as part
of the 42 curriculum by mjebali, jpedraza.*

# Push Swap

> Efficient stack sorting with adaptive strategy selection, benchmarking tools, and complete checker bonus implementation.

# Overview

Push Swap is a project from the 42 curriculum whose objective is to sort a stack of integers using only a restricted set of operations and two stacks:

* Stack A
* Stack B

The challenge is not simply to sort the numbers, but to generate the smallest possible number of operations.

This implementation includes multiple sorting algorithms, an adaptive strategy selector, a benchmarking system, and a complete checker bonus.

---

# Project Goals

The purpose of this project is to:

* Parse and validate integer inputs safely.
* Detect duplicates and integer overflows.
* Sort stacks using only the allowed operations.
* Minimize the number of generated instructions.
* Compare different sorting approaches.
* Automatically select the most suitable algorithm depending on the input.
* Validate solutions using a dedicated checker program.

---

# Features

## Parsing

* Integer validation
* Overflow detection
* Duplicate detection
* Error management
* Support for multiple arguments
* Support for quoted strings

Examples:

```bash
./push_swap 5 4 3 2 1
```

```bash
./push_swap "5 4 3 2 1"
```

---

## Sorting Algorithms

### Simple

Designed for very small stacks.

Estimated complexity:

```text
O(n²)
```

Used automatically for stacks containing five elements or fewer.

---

### Medium

Chunk-based sorting strategy.

The stack is divided into ranges (chunks).

Elements belonging to the current chunk are progressively moved from stack A to stack B.

Once all chunks have been processed, elements are restored from B to A starting from the largest index.

Estimated complexity:

```text
O(n√n)
```

---

### Complex

Radix Sort implementation using indexed values.

All numbers are converted into indexes and sorted bit by bit.

Estimated complexity:

```text
O(n log n)
```

---

### Adaptive

Automatically selects the most appropriate strategy.

Selection rules:

```text
Stack size <= 5          -> Simple
Disorder index < 20%     -> Simple
Disorder index < 50%     -> Medium
Otherwise                -> Complex
```

---

# Disorder Index

The adaptive algorithm evaluates how unsorted the stack is.

Formula:

```text
inversions / total_pairs
```

Range:

```text
0.00 -> fully sorted
1.00 -> completely reversed
```

Example:

```text
1 2 3 5 4
```

Inversions:

```text
(5,4)
```

Total pairs:

```text
5 × 4 / 2 = 10
```

Disorder:

```text
1 / 10 = 0.10
```

Result:

```text
10.00%
```

---

# Allowed Operations

## Swap

```text
sa
sb
ss
```

## Push

```text
pa
pb
```

## Rotate

```text
ra
rb
rr
```

## Reverse Rotate

```text
rra
rrb
rrr
```

---

# Benchmark Mode

The benchmark system provides detailed execution statistics.

Usage:

```bash
./push_swap --bench 5 4 3 2 1
```

Example:

```text
[bench] disorder: 100.00%
[bench] strategy: Adaptive -> Complex
[bench] complexity: O(n log n)
[bench] operations: 25
[bench] sa: 0
[bench] sb: 0
[bench] ss: 0
[bench] pa: 10
[bench] pb: 10
[bench] ra: 5
[bench] rb: 0
[bench] rr: 0
[bench] rra: 0
[bench] rrb: 0
[bench] rrr: 0
```

Benchmark information is written to stderr.

---

# Manual Strategy Selection

## Simple

```bash
./push_swap --simple 5 4 3 2 1
```

## Medium

```bash
./push_swap --medium 5 4 3 2 1
```

## Complex

```bash
./push_swap --complex 5 4 3 2 1
```

## Adaptive

```bash
./push_swap --adaptive 5 4 3 2 1
```

---

# Compilation

## Main Program

```bash
make
```

Produces:

```text
push_swap
```

---

## Bonus

```bash
make bonus
```

Produces:

```text
checker
```

---

## Rebuild

```bash
make re
```

---

# Checker Bonus

The checker validates a sequence of operations.

Example:

```bash
./push_swap 5 4 3 2 1 | ./checker 5 4 3 2 1
```

Output:

```text
OK
```

---

Invalid sequence:

```bash
echo "sa" | ./checker 1 2 3
```

Output:

```text
KO
```

---

Invalid instruction:

```bash
echo "hello" | ./checker 1 2 3
```

Output:

```text
Error
```

---

# Performance Examples

Three reversed values:

```bash
./push_swap 3 2 1 | wc -l
```

Output:

```text
2
```

---

Validation:

```bash
./push_swap 3 2 1 | ./checker 3 2 1
```

Output:

```text
OK
```

---

# Project Structure

```text
push_swap/
├── libft/
├── get_next_line/
├── Makefile
├── push_swap.h
├── main.c
├── parse_args.c
├── parse_utils.c
├── stack_init.c
├── stack_utils.c
├── simple_sort.c
├── medium_sort.c
├── complex_sort.c
├── adaptive.c
├── bench.c
├── bench_print.c
└── checker.c
```

---

# Validation

Norminette:

```bash
norminette
```

Valgrind:

```bash
valgrind --leak-check=full ./push_swap 5 4 3 2 1
```

```bash
echo -n "" | valgrind --leak-check=full ./checker 5 4 3 2 1
```

Expected result:

```text
All heap blocks were freed -- no leaks are possible
ERROR SUMMARY: 0 errors
```

---

# Status

```text
✓ Mandatory Part
✓ Bonus Part
✓ Checker
✓ get_next_line Integration
✓ Adaptive Strategy
✓ Benchmark Mode
✓ Quoted String Parsing
✓ Norminette Clean
✓ Valgrind Clean
```

---

# License

This project was developed as part of the 42 School curriculum.
All rights belong to their respective authors.

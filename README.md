# Push Swap

## Authors

* **jpedraza** (Juan Pedraza)
* **mjebali** (Meriem Jebali)

---

## Overview

Push Swap is a sorting project from the 42 curriculum.

The objective is to sort a stack of integers using only a restricted set of operations and two stacks:

* Stack A
* Stack B

This implementation includes multiple sorting strategies, an adaptive algorithm selection system, a benchmarking mode, and a complete checker bonus.

---

## Features

### Parsing

* Integer validation
* Overflow detection
* Duplicate detection
* Error handling
* Support for strategy flags
* Support for benchmark mode

### Sorting Strategies

| Strategy | Complexity          |
| -------- | ------------------- |
| Simple   | O(n²)               |
| Medium   | O(n√n)              |
| Complex  | O(n log n)          |
| Adaptive | Automatic selection |

### Benchmark Mode

The benchmark system provides:

* Disorder index
* Selected strategy
* Theoretical complexity
* Total operations
* Per-operation statistics

### Bonus

* Complete checker implementation
* Instruction validation
* get_next_line integration
* Memory-safe execution

---

## Allowed Operations

### Swap

```text
sa
sb
ss
```

### Push

```text
pa
pb
```

### Rotate

```text
ra
rb
rr
```

### Reverse Rotate

```text
rra
rrb
rrr
```

---

## Disorder Index

The adaptive algorithm uses a disorder index to estimate how unsorted the stack is.

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
5 * 4 / 2 = 10
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

## Adaptive Strategy

The adaptive mode automatically selects the most appropriate algorithm according to the disorder index.

### Selection Rules

```text
Disorder < 20%  -> Simple
Disorder < 50%  -> Medium
Otherwise       -> Complex
```

---

## Compilation

### Main Program

```bash
make
```

Produces:

```text
push_swap
```

### Bonus

```bash
make bonus
```

Produces:

```text
checker_bonus
```

### Rebuild

```bash
make re
```

---

## Usage

### Automatic Strategy

```bash
./push_swap 5 4 3 2 1
```

### Simple Strategy

```bash
./push_swap --simple 5 4 3 2 1
```

### Medium Strategy

```bash
./push_swap --medium 5 4 3 2 1
```

### Complex Strategy

```bash
./push_swap --complex 5 4 3 2 1
```

### Adaptive Strategy

```bash
./push_swap --adaptive 5 4 3 2 1
```

---

## Benchmark Mode

```bash
./push_swap --bench 5 4 3 2 1
```

Example output:

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

## Checker Bonus

Validate a sequence of operations:

```bash
./push_swap 5 4 3 2 1 | ./checker_bonus 5 4 3 2 1
```

Output:

```text
OK
```

### Invalid Sequence

```bash
echo "sa" | ./checker_bonus 1 2 3
```

Output:

```text
KO
```

### Invalid Instruction

```bash
echo "hello" | ./checker_bonus 1 2 3
```

Output:

```text
Error
```

---

## Project Structure

```text
push_swap/
├── libft/
├── get_next_line/
├── push_swap.h
├── push_swap
├── checker_bonus
├── parsing
├── stack operations
├── sorting algorithms
├── benchmark
└── checker bonus
```

---

## Validation

### Norminette

```bash
norminette
```

### Valgrind

```bash
valgrind --leak-check=full ./push_swap --bench 5 4 3 2 1
```

```bash
valgrind --leak-check=full ./checker_bonus 5 4 3 2 1
```

---

## Status

```text
✓ Mandatory Part
✓ Bonus Part
✓ Benchmark Mode
✓ Adaptive Strategy
✓ Norminette Clean
✓ Valgrind Clean
```

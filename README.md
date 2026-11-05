# Basic Programming in C++

**My solutions to the four assignments of an introductory C++ course: control flow, number theory, string processing, operator overloading, a tokenizing complex-number calculator, Fourier and Taylor series, recursion, and a polynomial class.**

![C++](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)

Course: *Basic Programming* (Dr. Amir Jahanshahi), Amirkabir University of Technology.
The problem sets are in Persian (Farsi). The code and reports show the C++ solutions.

## Assignments

| # | Folder | Topics |
|---|---|---|
| 1 | [`01-basics-and-control-flow`](01-basics-and-control-flow) | Arithmetic and control structures, triangle area and vertex orientation (clockwise or counter-clockwise), primality tests, digit manipulation. |
| 2 | [`02-primes-and-strings`](02-primes-and-strings) | Primes and "super primes", e-mail format validation, palindromes, random numbers with a frequency histogram. |
| 3 | [`03-complex-calculator-fourier`](03-complex-calculator-fourier) | An interactive complex-number calculator with a token stream and variables (Q1); a Fourier-series approximation of a periodic signal compared with its true values (Q2). |
| 4 | [`04-recursion-and-polynomials`](04-recursion-and-polynomials) | Recursive combinations, GCD, logarithm and Taylor-series sine (Q1); a `Polynomial` class with addition, subtraction, differentiation and integration (Q2). |

Each folder contains `problem-set.pdf` (the assignment), `report.pdf` (my write-up), and one sub-folder per question (`Q1/`, `Q2/`, …).

## Building

Each question is a stand-alone program:

```bash
cd 03-complex-calculator-fourier/Q1
g++ -std=c++17 *.cpp -o calculator && ./calculator
```

## Reference

B. Stroustrup, *Programming: Principles and Practice Using C++*, 2nd ed., Addison-Wesley, 2014. This is the course textbook. The token-stream calculator in assignment 3 follows its design.

## Author

**Mohammad Javad Amin** · [GitHub](https://github.com/mj-amin-ece)

# Recursion

Recursion is a programming technique in which a function calls itself with a modified version of its original input. This allows the function to repeat itself and perform a task multiple times until a certain condition is met.

## How to Implement Recursion

To implement recursion, you need to define a base case and a recursive case. The base case is the point at which the function will stop calling itself and return a result. The recursive case is when the function calls itself with a modified version of its input.

Here is an example of a simple recursive function that calculates the factorial of a number:
```
#include <stdio.h>

int factorial(int n)
{
    // Base case: n == 1
    if (n == 1)
    {
        return 1;
    }

    // Recursive case: n > 1
    else
    {
        // Calculate the factorial of n - 1 by recursively calling the factorial() function
        int n_1 = factorial(n - 1);

        // Return the product of n and the factorial of n - 1
        return n * n_1;
    }
}

int main(void)
{
    int result = factorial(5);
    printf("The factorial of 5 is %d\n", result);
    return 0;
}
```

## When to Use Recursion

Recursion can be a useful tool in certain situations, such as when you need to perform a task multiple times and the number of iterations is not known beforehand. It can also be useful when you want to divide a problem into smaller subproblems and solve each one separately.

Some common examples of when to use recursion include calculating the factorial of a number, finding the Fibonacci numbers, and traversing a tree or other data structure.

## When Not to Use Recursion

While recursion can be a powerful tool, it is not always the most efficient solution to a problem. Recursive functions can take up a lot of memory and can be slower to execute than iterative solutions.

In general, you should avoid using recursion for problems that can be easily solved using iteration. You should also be careful when using recursion for large inputs, as it can quickly consume a large amount of memory and processing power.
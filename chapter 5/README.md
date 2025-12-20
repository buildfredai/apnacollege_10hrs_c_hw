<h1>Function and Recursion<h1>

## Functions in C

### What is a Function?

A function is a **block of code** that performs a specific task. It helps in:

* Code reusability
* Better readability
* Easy debugging

### Syntax

```c
return_type function_name(parameter_list) {
    // function body
    return value;
}
```

### Example

```c
int add(int a, int b) {
    return a + b;
}
```

### Function Call

```c
sum = add(5, 3);
```

### Types of Functions

1. **Library functions** → `printf()`, `scanf()`, `strlen()`
2. **User-defined functions** → created by programmer

### Parameter Passing

* **Call by Value** → copy of data is passed (original unchanged)

```c
void fun(int x);
```

* **Passing Array to Function** → address is passed automatically

```c
void fun(int arr[]);
```

---

## Recursion in C

### What is Recursion?

Recursion is a technique where a **function calls itself** to solve a problem.

### Key Parts of Recursion

1. **Base Condition** → stops recursion
2. **Recursive Call** → function calling itself

Without base condition → infinite recursion

### Syntax

```c
return_type function_name(parameters) {
    if (base_condition)
        return value;
    return function_name(modified_parameters);
}
```

### Example: Factorial

```c
int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
```

### Notes

* Uses **stack memory**
* Slower than loops (extra function calls)
* Best for problems like factorial, fibonacci, tree traversal

---

## Quick Notes

* Every recursive function **must have a base condition**
* Function declaration is also called **function prototype**
* Recursion is an **alternative to loops**, not a replacement
* Too much recursion may cause **stack overflow**

---
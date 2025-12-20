````md
# Conditional Statements in C

## Conditional Statement
A conditional statement is used to make decisions based on conditions.  
It controls the flow of program execution.

---

## Types of Conditional Statements

### 1. if Statement
Executes a block of code when the condition is true.

```c
if (condition) {
    // statements
}
````

Example:

```c
if (a > b) {
    printf("a is greater");
}
```

---

### 2. if–else Statement

Executes one block if condition is true, otherwise another block.

```c
if (condition) {
    // true block
} else {
    // false block
}
```

Example:

```c
if (age >= 18) {
    printf("Eligible");
} else {
    printf("Not eligible");
}
```

---

### 3. else–if Ladder

Used to check multiple conditions.

```c
if (condition1) {
    // block 1
} else if (condition2) {
    // block 2
} else {
    // default block
}
```

Example:

```c
if (marks >= 90) {
    printf("Grade A");
} else if (marks >= 75) {
    printf("Grade B");
} else {
    printf("Grade C");
}
```

---

### 4. switch Statement

Used when multiple choices depend on a single variable.

```c
switch (expression) {
    case value1:
        // statements
        break;
    case value2:
        // statements
        break;
    default:
        // statements
}
```

Example:

```c
switch (day) {
    case 1: printf("Monday"); break;
    case 2: printf("Tuesday"); break;
    default: printf("Invalid day");
}
```

---

### 5. Conditional (Ternary) Operator

Used as a short form of if–else.

```c
condition ? expression1 : expression2;
```

Example:

```c
(a > b) ? printf("a is greater") : printf("b is greater");
```

---

## Notes

* Conditions are evaluated as true (1) or false (0)
* Relational and logical operators are used in conditions
* `break` is required in switch cases
* Ternary operator works with three operands

```
```
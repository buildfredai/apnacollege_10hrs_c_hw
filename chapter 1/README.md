<h1>Variables, Data Types & Input/Output in C<h1>

## Variables

A **variable** is a named memory location used to store data during program execution.

### Syntax

```c
data_type variable_name;
```

### Example

```c
int age;
float marks;
char grade;
```

### Rules

* Must start with a letter or `_`
* No spaces or special symbols
* Case-sensitive (`Age` ≠ `age`)

---

## Data Types in C

Data types define **what kind of data** a variable can store.

### Common Data Types

| Data Type | Meaning                | Example             |
| --------- | ---------------------- | ------------------- |
| `int`     | Integer numbers        | `int a = 10;`       |
| `float`   | Decimal numbers        | `float x = 3.14;`   |
| `double`  | More precision decimal | `double y = 9.876;` |
| `char`    | Single character       | `char ch = 'A';`    |
| `void`    | No value               | `void fun();`       |

---

## Input and Output in C

C uses **standard input/output functions** from `stdio.h`.

### Output: `printf()`

Used to display output on the screen.

```c
printf("Hello World");
printf("Value = %d", a);
```

### Input: `scanf()`

Used to take input from the user.

```c
scanf("%d", &a);
```

⚠️ `&` is used to give the **address of variable**.

---

## Format Specifiers

| Data Type | Format |
| --------- | ------ |
| `int`     | `%d`   |
| `float`   | `%f`   |
| `double`  | `%lf`  |
| `char`    | `%c`   |
| `string`  | `%s`   |

---

## Example Program

```c
#include<stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Age = %d", age);
    return 0;
}
```

---

## Notes (Exam / Viva)

* Variables must be declared before use
* `scanf()` requires address (`&`)
* `printf()` does not use `&`
* `stdio.h` is required for input/output

---
# Instructions & Operators in C

## Instructions in C
An instruction is a command that tells the computer to perform a specific task.

### Types of Instructions

### 1. Type Declaration Instruction
Used to declare variables before use.
```c
int a;
float b;
char c;
````

### 2. Arithmetic Instruction

Used to perform mathematical operations.

```c
sum = a + b;
area = length * breadth;
```

### 3. Assignment Instruction

Used to assign values to variables.

```c
x = 10;
y = x + 5;
```

### 4. Control Instruction

Used to control the flow of execution.

* Conditional: `if`, `if-else`, `switch`
* Looping: `for`, `while`, `do-while`

---

## Operators in C

Operators are symbols used to perform operations on variables and values.

---

## Types of Operators

### 1. Arithmetic Operators

| Operator | Operation      |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `*`      | Multiplication |
| `/`      | Division       |
| `%`      | Modulus        |

Example:

```c
c = a + b;
```

---

### 2. Relational Operators

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

Returns 1 for true and 0 for false.

---

### 3. Logical Operators

| Operator | Meaning     |   |            |
| -------- | ----------- | - | ---------- |
| `&&`     | Logical AND |   |            |
| `        |             | ` | Logical OR |
| `!`      | Logical NOT |   |            |

Example:

```c
if(a > 0 && b > 0)
```

---

### 4. Assignment Operators

| Operator | Example  |
| -------- | -------- |
| `=`      | `a = 5`  |
| `+=`     | `a += 2` |
| `-=`     | `a -= 2` |
| `*=`     | `a *= 2` |
| `/=`     | `a /= 2` |

---

### 5. Increment and Decrement Operators

| Operator | Operation |
| -------- | --------- |
| `++`     | Increment |
| `--`     | Decrement |

```c
a++;
--b;
```

---

## Operator Precedence (High to Low)

1. `()`
2. `* / %`
3. `+ -`
4. `< <= > >=`
5. `== !=`
6. `&&`
7. `||`
8. `=`

---

## Notes

* `%` works only with integer data types
* Use parentheses to control precedence
* `=` is assignment, `==` is comparison
* Logical operators return either 0 or 1

```
```

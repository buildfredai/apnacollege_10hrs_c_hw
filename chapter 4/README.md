
# for Loop Control Statement in C

## for Loop
The `for` loop is a control statement used to execute a block of code repeatedly for a fixed number of times.

---

## Syntax
```c
for (initialization; condition; increment/decrement) {
    // loop body
}


---

## Working of for Loop

1. Initialization is executed once.
2. Condition is checked.
3. If condition is true, loop body executes.
4. Increment or decrement is executed.
5. Condition is checked again.
6. Loop stops when condition becomes false.

---

## Example

```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```

Output:

```
1 2 3 4 5
```

---

## Components of for Loop

### Initialization

Executed only once at the start.

```c
int i = 0;
```

### Condition

Loop runs while condition is true.

```c
i < 10
```

### Increment / Decrement

Updates loop variable after each iteration.

```c
i++
```

---

## Nested for Loop

A `for` loop inside another `for` loop.

```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        printf("* ");
    }
    printf("\n");
}
```

---

## Notes

* Suitable when number of iterations is known
* All three parts are optional but semicolons are mandatory
* Infinite loop example:

```c
for(;;) {
    // infinite loop
}
```

```
```

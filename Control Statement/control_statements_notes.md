
# Control Statements in C++

Control statements are used to **control the flow of execution** in a program.  
They decide **which code runs and when**.

---

## 1. Decision-Making Statements
Used to make choices.

### `if`
```cpp
if (condition) {
    // code runs if condition is true
}
```

### `if-else`
```cpp
if (condition) {
    // true block
} else {
    // false block
}
```

### `if-else if-else`
```cpp
if (x > 0) {
    cout << "Positive";
} else if (x < 0) {
    cout << "Negative";
} else {
    cout << "Zero";
}
```

### `switch`
```cpp
switch(choice) {
    case 1: cout << "One"; break;
    case 2: cout << "Two"; break;
    default: cout << "Other";
}
```

---

## 2. Looping Statements
Used to repeat code.

### `for`
```cpp
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
```

### `while`
```cpp
int i = 0;
while (i < 5) {
    cout << i << " ";
    i++;
}
```

### `do-while`
```cpp
int i = 0;
do {
    cout << i << " ";
    i++;
} while (i < 5);
```

---

## 3. Jump Statements
Used to change the normal flow.

### `break`
Exit from loop/switch.
```cpp
for (int i = 0; i < 5; i++) {
    if (i == 3) break;  
    cout << i << " ";
}
```

### `continue`
Skip current iteration, go to next.
```cpp
for (int i = 0; i < 5; i++) {
    if (i == 2) continue;
    cout << i << " ";
}
```

### `goto`
Jump to a labeled statement (not recommended in modern C++).
```cpp
goto label;
cout << "Skipped";
label:
cout << "Here";
```

### `return`
Exit from a function and send back a value.

---

## 📌 Summary
- **Decision-making** → `if`, `if-else`, `switch`  
- **Loops** → `for`, `while`, `do-while`  
- **Jump** → `break`, `continue`, `goto`, `return`  

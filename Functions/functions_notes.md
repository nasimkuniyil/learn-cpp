# Functions in C++

Functions are **blocks of code** that perform a specific task.  
They make code **reusable, readable, and modular**.

---

## 1. Types of Functions
1. **Built-in Functions** → Already provided (e.g., `sqrt()`, `pow()`).  
2. **User-defined Functions** → Created by the programmer.  

---

Syntax:
```cpp
returnType functionName(parameters) {
    // function body
    return value;   // optional
}
```

Example:
```cpp
int add(int a, int b) {
    return a + b;
}
```

3. Function Declaration, Definition, and Call

Declaration
```cpp
int add(int, int);

    Definition

int add(int x, int y) {
    return x + y;
}
```

Call
```cpp
int result = add(5, 3);
```

4. Return Types
    void → no value returned
    Other types (int, float, etc.) → return value
    
```cpp
void greet() {
    cout << "Hello";
}
```

5. Parameter Types
Pass by Value
Copy is passed, original unchanged.
```cpp
void fun(int x) { x = 10; }
```

Pass by Reference
Original is affected.
```cpp
void fun(int &x) { x = 10; }
```

Default Parameters
```cpp
int add(int a, int b = 5) {
    return a + b;
}
```

6. Function Overloading
Same function name, different parameters.
```cpp
int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }
```

7. Inline Functions
Suggest compiler to expand function inline.
```cpp
inline int square(int x) { return x * x; }
```

8. Lambda Functions (C++11+)
A lambda function is an anonymous function (no name) defined with [].
Syntax:
```cpp
[capture](parameters) -> returnType {
    // body
};
```
Example:
```cpp
auto add = [](int a, int b) {
    return a + b;
};
cout << add(5, 3);   // Output: 8
```

Capture List:
    [ ] → captures nothing
    [=] → captures all variables by value
    [&] → captures all variables by reference
    [x] → captures x by value
    [&x] → captures x by reference

Example:
```cpp
int a = 10, b = 20;

auto f1 = [=]() { return a + b; };   // capture by value
auto f2 = [&]() { return a + b; };   // capture by reference

cout << f1() << endl;   // 30
cout << f2() << endl;   // 30
```

📌 Summary
    - Functions = reusable blocks of code.
    - Parameters can be value, reference, or default.
    - Support overloading and inline.

    Lambda functions are modern, anonymous, and powerful (especially for short tasks and STL algorithms).

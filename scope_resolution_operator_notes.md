# Usage of `::` (Scope Resolution Operator) in C++

## 1. Accessing Global Variables
When a local variable has the same name as a global variable, the `::` operator is used to access the global one.

```cpp
int x = 10;
int main() {
    int x = 20;
    cout << ::x;  // prints 10 (global x)
}
```

---

## 2. Defining Class Methods Outside the Class
When declaring a function inside a class but defining it outside, use `::` to specify the class it belongs to.

```cpp
class MyClass {
    void display();
};

void MyClass::display() {
    cout << "Hello";
}
```

---

## 3. Accessing Static Members of a Class
Static variables or methods belong to the class, not the object. Use `::` to access them.

```cpp
class MyClass {
public:
    static int value;
};

int MyClass::value = 100;
cout << MyClass::value;
```

---

## 4. Accessing Namespace Members
To use items from a namespace, `::` is applied.

```cpp
namespace A {
    int x = 5;
}
cout << A::x;
```

---

## 5. Inheritance (Calling Base Class Methods/Variables)
When a derived class overrides base class members, use `::` to call base class versions.

```cpp
class Base {
public:
    void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() {
        Base::show();  // calls base version
        cout << " Derived";
    }
};
```

---

## 📌 Summary
- `::` is called the **scope resolution operator**.  
- It is used to resolve the scope of:
  - Variables (global vs local)
  - Class methods defined outside the class
  - Static class members
  - Namespace members
  - Base class methods in inheritance

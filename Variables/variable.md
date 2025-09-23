# Variables in C++

Varaibles are a container to store datas.It is like a glass, that can store tea, coffee, juice etc. Every variables have a limit that holds maximum amout of data. When we are trying to store big data that is over that limit, it happens `Data Type Overflow`.

- We cannot store multiple data types in a varialbe.
- We cannot change data type of a variable, once we created.

**Datatype Overflow** happens when we try to store a value that is larger (or smaller) than the maximum (or minimum) limit of a given data type.  

For example, the maximum value of an `int` in most systems is **2,147,483,647**.  
If we add `1` to it, the value doesn’t become `2,147,483,648` (because it’s out of range). Instead, it wraps around to the **minimum value** of `int`, which is **–2,147,483,648**.  

This behavior is similar to a **clock**: after `12`, it goes back to `1`. Likewise, after the maximum limit of a datatype, it starts again from the minimum limit.  

---

## Example in C++

```cpp
#include <iostream>
#include <climits>  // for INT_MAX and INT_MIN

int main() {
    int x = INT_MAX;
    std::cout << "Maximum int value: " << x << std::endl;

    x = x + 1; // Overflow
    std::cout << "After adding 1: " << x << std::endl;

    return 0;
}
```

## Key Points

- Overflow makes the value wrap around (like a cycle).
- This can happen with both positive and negative limits.
- Always be careful with operations near the limits of a datatype.

## Variable naming rules

## Data Types in C++

`int` : Integer
`char` : One character
`boolean` : true or false
`float` : Decimal / floating point number ( 4 bytes )
`double` : Decimal / floating point number (8 bytes )

## Operators

`sizeof()` : find size (in bit) of a variable type.

```cpp
    sizeof(int); // signed int : negative and positive integers
    sizeof(unsigned int); // positive integers
```

## Macro Constants

`INT_MIN` : minimum number of signed integer (negative and positive integers).
`INT_MAX` : maximum number of signed integer.
`UINT_MAX` : maximum number of unsigned integer (positive number only).

## Others

- signed integers : -2,147,483,648 to 2,147,483,647
- unsigned integers : 0 to 4,294,967,295.

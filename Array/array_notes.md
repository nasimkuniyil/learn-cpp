# Array in C++

An array is a collection of elements of the same type. It stores in contiguous memory locations.
It allows to store multiple values under a single name. Using index to access each elements from this.

Arrays are one of the most basic and commonly used Data Structure in C++ programming.

Syntax:
```cpp
int main(){
    // declaring and initializing an array of size 5
    int arr[5] = {2,5,6,2,7};
    
    //print array elements
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
    
}

```
- int arr[5] declares an array of 5 integers
- For loop used to iterate over the array and print each element.
- Array indices starts from 0 in c++

---

## Create an Array
```cpp
    data_type array_name[size];
```
- Once array declared with a size, that cannot be changed.

---

## Initialize the Array
```cpp
    int a[5] = {5,10,80,30,55}; //output: 5 10 80 30 55
    int b[5] = {3,2,9}; //output: 3 2 9 0 0
    int c[] = {3,9,7,8,9}; //output: 3 9 7 8 9
    int d[5] = {5}; //output: 5 0 0 0 0
```

---

## Access Array element
Elements of an array can be accessed by their position (called index) in the sequence.
```cpp
    array_name[index];
```

example:
```cpp
    int arr[5]={6,8,9,7,1};
    cout << arr[1] << endl; //ouput: 8
```

---

## Update Array element
To change a particular index value from an Array, use the '=' operator.
```cpp
    array_name[index] = new_value;
```
example:
```cpp
    int arr[5]={6,8,9,7,1};
    arr[1] = 100;
```
output: 6 100 9 7 1

---

## Traverse Array
Traversing means visiting each elements one by one. The advantage of array is that it can be easily traversed by using loop.
```cpp
    int arr[5] = {2,5,6,2,7};
    
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
```
output: 2 5 6 7 2

---

## Size of Array
The size of array refers to the number of elements that can be stored in the array.
`sizeof()` operator using to find array size.

```cpp
    int arr[5] = {2,5,6,2,7};
    cout << "size of array is " << sizeof(arr) << endl;
```
output: size of array is 5

---

## Array and Pointers
In c++, arrays and pointers are closely related to each other. The array name can be treated as a constant pointer that stored the memory address of the first element of the array.
```cpp
    int arr[5];
    
    // Printing array name
    cout << arr << endl;
    
    // Printing address of first element
    cout << &arr[0];
```
output:
0x7ffd57920530
0x7ffd57920530

Internally, arrays operators are performed using pointer arithmetic. So, we can do almost  any array operation using by using pointer to the first element. For example, we can access all the elements of an array using pointer to the first element.
```cpp
    int arr[] = {2, 4, 8, 12, 16};

    // Define a pointer to first element
    int* ptr = arr;

    for (int i = 0; i < 5; i++)
        cout << *(ptr + i) << " ";
```
output: 2 4 8 12 16 

---

## Pass Array to Function
Arrays are passed to functions using pointers, as the array name decays to a pointer to the first element. So, we also need to pass the size of the array to the function.

```cpp
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr);
    
    printArray(arr, n);
    return 0;
}
```
output: 5 10 15 20 25

---

# Multidimensional Array
Above learned one dimensional array. This array's size only increase in a single direction ( called dimension). 
C provides the feature to have as many dimensions as desired for ar array.
Arrays declared with more that one dimention are called multidimension arrays.

syntax:
```cpp
    data_type array_name [size1][size2]...
```

- Two-dimensional array
- Three-dimensional array

---

tdlr:
    - An array is collection of data of same data type, stored at a contiguous memory location.
    - Index starts from zero of an array.
    - Elements can be accessed using their indexes
    - Once array declared its size remains as constant. size cannot be changed after declaration
    - An array have multiple dimensions
    - The size of the array in bytes can be determined by the sizeof operator using which we can also find the number of elements in the array.
    - We can find the size of the type of elements stored in an array by subtracting adjacent addresses.

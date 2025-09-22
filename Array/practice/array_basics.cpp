#include <iostream>

using namespace std;

class PracticeArray {
 public:
  // practiceArray(){}

  void basics() {
    int limit = 5;

    // int arr[limit] = {2,5,3,1,6};
    // int arr[limit] = {}; // first value is 5 and others are zero.
    // int arr[] = {10,20,30,40,50}; //skip array length

    char arr[5] = {"a"};

    for (int i = 0; i < limit; i++) {
      cout << arr[i] << " - ";
    }
    cout << endl;
    cout << "size of array " << sizeof(arr) << endl;
  }

  void likePointer() {
    int arr[5] = {2, 4, 8, 12, 16};

    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
      cout << *(ptr + i) << " ";
    }
    cout << endl;
    // cout << arr << endl;
    // cout << &arr << endl;
  }

  void printReverse(int arr[], int length) {
    for(int i=length-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  int arr[] = {54, 43, 2, 1, 5};
  cout << "hey" << endl;
  PracticeArray pa;
  //   pa.likePointer();
  pa.printReverse(arr, 5);
  return 0;
}
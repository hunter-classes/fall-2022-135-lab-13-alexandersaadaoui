#include <iostream>
#include <string>
#include "funcs.h"

int main() {
    std::cout << "Task A" << std::endl;
    std::cout << printRange(-2, 10) << std::endl;

    std::cout << "\nTask B" << std::endl;
    std::cout << sumRange(1, 3) << std::endl;   // 6 

    std::cout << "\nTask C" << std::endl;
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

    delete[] arr;

    std::cout << "\nTask D" << std::endl;
    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    
    std::cout << "\nTask E" << std::endl;
    std::cout << nestedParens("((()))") << std::endl;      // true (1)
}
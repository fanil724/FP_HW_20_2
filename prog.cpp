#include <iostream>
#include "function.cpp"

int main() {
#define INTEGER
#include "function.h"
    const size_t size=10;
    int arr[size]{0};
    FillingArray(arr, size,-20,20);
    std::cout << " " << Min(arr, size) << "\n";
    Show(arr, size);
    SortArray(arr, size);
    Show(arr, size);
#undef INTEGER

#define CHAR
#include "function.h"
    char array[size]{0};
    FillingArray(array, size,160,200);
    std::cout << " " << Min(array, size) << "\n";
    Show(array, size);
    SortArray(array, size);
    Show(array, size);
#undef CHAR

#define DOUBLE
#include "function.h"
    double arra[size]{0};
    FillingArray(arra, size,-20,20);
    std::cout << " " << Min(arra, size) << "\n";
    Show(arra, size);
    SortArray(arra, size);
    Show(arra, size);
#undef DOUBLE
}

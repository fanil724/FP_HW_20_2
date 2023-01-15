#include <iostream>
#include "function.h"

int main() {
    const size_t size = 10;
    int arr[size]{0};
    char array[size]{0};
    double arra[size]{0};
    FillingArray(arr, size, -20, 20);
    FillingArray(array, size, 170, 200);
    FillingArray(arra, size, -2000, 2000);

    cout<<" "<<Min(arr,size)<<"\n";

    ShowArray(array, size);
    ShowArray(arr, size);
    ShowArray(arra, size);

    SortArray(arr, size);
    ShowArray(arr, size);

    SortArray(array, size);
    ShowArray(array, size);

    SortArray(arra, size);
    ShowArray(arra, size);
}
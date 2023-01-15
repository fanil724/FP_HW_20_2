#include <iostream>
#include "function.cpp"


int main() {
    const size_t size = 10;
    int arr[size]{0};
    char array[size]{0};
    double arra[size]{0};
    FillingArrayRandomValuesInt(arr, size, -20, 20);
    FillingArrayRandomValuesChar(array, size, 170, 200);
    FillingArrayRandomValuesDuoble(arra, size, -2000, 2000);

    cout<<" "<<Min(arr,size)<<"\n";

    ShowArrayChar(array, size);
    ShowArrayInt(arr, size);
    ShowArrayDouble(arra, size);

    SortArrayInt(arr, size);
    ShowArrayInt(arr, size);

    SortArrayChar(array, size);
    ShowArrayChar(array, size);

    SortArrayDouble(arra, size);
    ShowArrayDouble(arra, size);

}

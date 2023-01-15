#include <iostream>
#include <random>

using namespace std;

void FillingArrayRandomValuesInt(int *array, size_t size, int a, int b) {
    random_device random;
    uniform_int_distribution<int> distribution(a, b);
    for (int i = 0; i < size; i++) {
        array[i] = distribution(random);
    }
}

void FillingArrayRandomValuesDuoble(double *array, size_t size, int a, int b) {
    random_device random;
    uniform_int_distribution<int> distribution(a, b);
    for (int i = 0; i < size; i++) {
        array[i] = (double) distribution(random) / 100;
    }
}

void FillingArrayRandomValuesChar(char *array, size_t size, int a, int b) {
    random_device random;
    uniform_int_distribution<int> distribution(a, b);
    for (int i = 0; i < size; i++) {
        array[i] = (char) distribution(random);
    }
}

void ShowArrayChar(char *array, size_t size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void ShowArrayInt(int *array, size_t size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void ShowArrayDouble(double *array, size_t size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int MinInt(int arr[], size_t size) {
    int temp = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[temp]) {
            temp = i;
        }
    }
    return temp;
}

int MinChar(char arr[], size_t size) {
    int temp = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[temp]) {
            temp = i;
        }
    }
    return temp;
}

int MinDouble(double arr[], size_t size) {
    int temp = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[temp]) {
            temp = i;
        }
    }
    return temp;
}

int MaxInt(int arr[], size_t size) {
    int temp = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[temp]) {
            temp = i;
        }
    }
    return temp;
}

int MaxChar(char arr[], size_t size) {
    int temp = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[temp]) {
            temp = i;
        }
    }
    return temp;
}

int MaxDouble(double arr[], size_t size) {
    int temp = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[temp]) {
            temp = i;
        }
    }
    return temp;
}

void SortArrayInt(int arr[], size_t size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void SortArrayChar(char arr[], size_t size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void SortArrayDouble(double arr[], size_t size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void EditingArrayInt(int arr[], size_t size, int index, int value) {
    if ((index < size) && (index > -1)) {
        arr[index] = value;
    } else {
        cout << "Еhere is no such index in the array";
    }
}
void EditingArrayDouble(double arr[], size_t size, int index, double value) {
    if ((index < size) && (index > -1)) {
        arr[index] = value;
    } else {
        cout << "Еhere is no such index in the array";
    }
}
void EditingArrayChar(char arr[], size_t size, int index, char value) {
    if ((index < size) && (index > -1)) {
        arr[index] = value;
    } else {
        cout << "Еhere is no such index in the array";
    }
}
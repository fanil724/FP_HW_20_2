#include <iostream>

#if defined(INTEGER)

void FillingArrayRandomValuesInt(int *array, size_t size, int a, int b);
int MinInt(int arr[], size_t size);
int MaxInt(int arr[], size_t size);
void ShowArrayInt(int *array, size_t size);
void SortArrayInt(int arr[], size_t size);
void EditingArrayInt(int arr[], size_t size, int index, int value);

#define Show ShowArrayInt
#define Max MaxInt
#define Min MinInt
#define FillingArray FillingArrayRandomValuesInt
#define EditingArray EditingArrayInt
#define SortArray SortArrayInt
#elif defined(DOUBLE)

void FillingArrayRandomValuesDuoble(double *array, size_t size, int a, int b);
int MinDouble(double arr[], size_t size);
int MaxDouble(double arr[], size_t size);
void ShowArrayDouble(double *array, size_t size);
void SortArrayDouble(double arr[], size_t size);
void EditingArrayDouble(double arr[], size_t size, int index, double value);

#define SortArray SortArrayDouble
#define FillingArray FillingArrayRandomValuesDuoble
#define Min MinDouble
#define Max MaxDouble
#define Show ShowArrayDouble
#define EditingArray EditingArrayDouble
#elif defined(CHAR)

void FillingArrayRandomValuesChar(char *array, size_t size, int a, int b);
int MinChar(char arr[], size_t size);
int MaxChar(char arr[], size_t size);
void ShowArrayChar(char *array, size_t size);
void SortArrayChar(char arr[], size_t size);
void EditingArrayChar(char arr[], size_t size, int index, char value);

#define SortArray SortArrayChar
#define EditingArray EditingArrayChar
#define FillingArray FillingArrayRandomValuesChar
#define Min MinChar
#define Max MaxChar
#define Show ShowArrayChar

#endif

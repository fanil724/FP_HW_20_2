#include <iostream>
#define Show ShowArrayInt
#define Show ShowArrayChar
#define Show ShowArrayDouble
#define Max MaxChar
#define Max MaxInt
#define Max MaxDouble
#define Min MinChar
#define Min MinInt
#define Min MinDouble

#define FillingArray FillingArrayRandomValuesInt
#define FillingArray FillingArrayRandomValuesDouble
#define FillingArray FillingArrayRandomValuesChar

#define EditingArray EditingArrayInt
#define EditingArray EditingArrayChar
#define EditingArray EditingArrayDouble

#define SortArray SortArrayDouble
#define SortArray SortArrayInt
#define SortArray SortArrayChar


void FillingArrayRandomValuesInt(int *array, size_t size, int a, int b);
void FillingArrayRandomValuesChar(char *array, size_t size, int a, int b);
void FillingArrayRandomValuesDuoble(double *array, size_t size, int a, int b);

void ShowArrayChar(char *array, size_t size);
void ShowArrayInt(int *array, size_t size);
void ShowArrayDouble(double *array, size_t size);

int MinInt(int arr[], size_t size);
int MaxInt(int arr[], size_t size);
int MinChar(char arr[], size_t size);
int MaxChar(char arr[], size_t size);
int MinDouble(double arr[], size_t size);
int MaxDouble(double arr[], size_t size);

void SortArrayDouble(double arr[], size_t size);
void SortArrayInt(int arr[], size_t size);
void SortArrayChar(char arr[], size_t size);

void EditingArrayInt(int arr[], size_t size, int index, int value);
void EditingArrayChar(char arr[], size_t size, int index, char value);
void EditingArrayDouble(double arr[], size_t size, int index, double value);
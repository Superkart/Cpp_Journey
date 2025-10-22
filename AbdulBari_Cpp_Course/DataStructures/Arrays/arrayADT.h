#pragma once



struct Array
{
    int* A;
    int size;
    int length;
};

void EnterArrayElements(int n, Array &arr);
void DisplayArray(const Array &arr);
void Append(int value, Array &arr);
void Insert(int value, int index, Array &arr);
int Delete(int index, Array &arr);





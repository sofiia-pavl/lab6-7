#include <iostream>
#include "Array.h"
#include <time.h>

template<typename T>
Array returnDynamicArray(T arr[], const int size);

int main()
{
    srand((unsigned)time(NULL));
    const int size = 10;
    double arr[size];
    double b[20], c[20], d[20],e[20],o[20],u[20];

    for (int i = 0; i < size; i++)
        arr[i] = -10 + rand() % int(10 - (-10) + 1);

    Array dynamicArray = returnDynamicArray(arr, size);

    cout << "Basic array: ";
    dynamicArray.Print();

    Predicate<double>* zero = new Zero<double>();
    Predicate<double>* positive = new Positive<double>();
    Predicate<double>* negative = new Negative<double>();
    Predicate<double>* even = new Even<double>(); 
    Predicate<double>* odd = new Odd<double>(); 

    cout << "Revers array: ";
    revers_copy(dynamicArray.begin(), dynamicArray.end(), &b[0]);
    for (int i = 1; i < 11; i++)
        cout << b[i] << ' '; 
    cout << endl;

    cout << "Revers array consist of zero: ";
   int n = revers_copy_if(dynamicArray.begin(), dynamicArray.end(), &c[0],*zero);
    for (int i = 0; i < n; i++)
        cout << c[i] << ' ';
    cout << endl;

    cout << "Revers array consist of positive elements: ";
    int k = revers_copy_if(dynamicArray.begin(), dynamicArray.end(), &d[0], *positive);
    for (int i = 1; i < k; i++)
        cout << d[i] << ' ';
    cout << endl;

    cout << "Revers array consist of negative elements: ";
    int w = revers_copy_if(dynamicArray.begin(), dynamicArray.end(), &e[0], *negative);
    for (int i = 0; i < w; i++)
        cout << e[i] << ' ';
    cout << endl;

    cout << "Revers array consist of even elements: ";
    int q = revers_copy_if(dynamicArray.begin(), dynamicArray.end(), &o[0], *even);
    for (int i = 1; i < q; i++)
        cout << o[i] << ' ';
    cout << endl;

    cout << "Revers array consist of odd elements: ";
    int z = revers_copy_if(dynamicArray.begin(), dynamicArray.end(), &u[0], *odd);
    for (int i = 0; i < z; i++)
        cout << u[i] << ' ';
    cout << endl;

    return 0;
}
template<typename T>
Array returnDynamicArray(T arr[], const int size)
{
    Array dynamicArray = Array(size);

    for (int i = 0; i < size; i++)
        dynamicArray[i] = arr[i];

    return dynamicArray;
}
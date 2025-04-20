#ifndef ARRAYUTILS_H
#define ARRAYUTILS_H

#include <bits/stdc++.h>
using namespace std;

class ArrayUtils
{
public:
    static void print(int arr[], int n)
    {
        for (int i = 0; i <= n; i++)
        {
            cout << i << ": " << arr[i] << endl;
        }
        cout << endl;
    }

    static int* input(int n)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        return arr;
    }
};

#endif
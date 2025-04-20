/*
Problem Statement:
Given an array of size n, write a program to check if the given array is sorted in
(ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True,
Else return False.

Note: Two consecutive equal values are considered to be sorted.
*/

#include "../array-utils.cpp"

bool checkSort(int *arr, int n)
{
    bool asc = true;
    bool desc = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            asc = false;
        }
        if (arr[i] < arr[i + 1])
        {
            desc = false;
        }

        if (!desc && !asc)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    ArrayUtils array;
    int *arr = array.input(n);

    bool check = checkSort(arr, n);

    if (check)
        cout << "true";
    else
        cout << "false";

    return 0;
}
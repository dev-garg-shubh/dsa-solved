/*
Problem Statement: 
Given an array, we have to find the largest element in the array.

*/
#include "../array-utils.cpp"

int main()
{
    int n;
    cin >> n;
    ArrayUtils array;
    int *arr = array.input(n);
    
    int max= arr[0];
    for(int i = 1 ; i< n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<max;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n) // Find min and swap it
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n ; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j = i;j>0;j--)
        {
            if(arr[j-1] > arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {3, 12, 0, 1, 343, 3, 3, 10};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr,n);
    bubble_sort(arr, n);
    insertion_sort(arr,n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&difficulty[]=-1&difficulty[]=0&difficulty[]=1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Facebook&category[]=Arrays&curated[]=1&curated[]=2&sortBy=submissions

// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include <iostream>

using namespace std;

void sort012(int a[], int n)
{
    int cntZero = 0;
    int cntOne = 0;
    int cntTwo = 0;

    for (int i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case 0:
            cntZero++;
            break;
        case 1:
            cntOne++;
            break;
        case 2:
            cntTwo++;
            break;
        }
    }

    int j = 0;
    for (int i = 0; i < cntZero; i++)
        a[j++] = 0;
    for (int i = 0; i < cntOne; i++)
        a[j++] = 1;
    for (int i = 0; i < cntTwo; i++)
        a[j++] = 2;
}

int main()
{
    int N = 5;
    int arr[] = {0, 2, 1, 2, 0};
    sort012(arr, N);
    for (int i = 0; i < N; i++)
        cout << arr[i] << "-";
    cout << endl;
    return 0;
}

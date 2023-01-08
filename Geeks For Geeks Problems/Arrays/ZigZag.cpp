// https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1?page=1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Facebook&company[]=Visa&category[]=Arrays&curated[]=1&sortBy=submissions
/*
    Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form:

        arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n].
*/

#include <iostream>

using namespace std;

void swap(int a[], int i, int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void zigZag(int a[], int n)
{
    bool flag = true; // < is expected
    for (int i = 0; i < n - 1; i++)
    {
        if (flag)
        {
            if (a[i] > a[i + 1])
                swap(a, i, i + 1);
        }
        else
        {
            if(a[i] < a[i+1])
                swap(a, i, i + 1);
        }
        flag = !flag;
    }
}

int main()
{
    return 0;
}

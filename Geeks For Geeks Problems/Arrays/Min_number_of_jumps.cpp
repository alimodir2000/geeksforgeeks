// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&category[]=Arrays&curated[]=1&sortBy=submissions

#include <iostream>
#include <vector>

using namespace std;

int minJumpsGreedy(int arr[], int n)
{

    // O(N)

    if (arr[0] == 0 && n != 1)
        return -1;

    if (n == 1)
        return 0;

    int jumps = 0;
    int range = 0;
    int farthest = 0;
    for (int i = 0; i < n - 1; i++)
    {
        farthest = max(farthest, i + arr[i]);
        if (range == i)
        {
            if (range == farthest)
                return -1;
            jumps++;
            range = farthest;
        }
    }
    return jumps;
}

int main()
{
    int N = 11;
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumpsGreedy(arr, N) << endl;

    int N1 = 6;
    int arr1[] = {1, 4, 3, 2, 6, 7};
    cout << minJumpsGreedy(arr1, N1) << endl;

    int N2 = 5;
    int arr2[] = {0, 1, 1, 1, 1};
    cout << minJumpsGreedy(arr2, N2) << endl;

    int N3 = 4;
    int arr3[] = {2, 1, 1, 3};
    cout << minJumpsGreedy(arr3, N3) << endl;

    int N4 = 15;
    int arr4[] = {9, 10, 1, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 1};
    cout << minJumpsGreedy(arr4, N4) << endl;

    return 0;
}
// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&difficulty[]=1&category[]=Arrays&curated[]=1&curated[]=2&sortBy=submissions

#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <climits>

using namespace std;

void countingSort(int arr[], int n)
{
    int maxElm = INT_MIN;
    for (int i = 0; i < n; i++)
        maxElm = max(maxElm, arr[i]);

    vector<int> vec(maxElm + 1, 0);
    for (int i = 0; i < n; i++)
        vec[arr[i]]++;

    int i = 0;
    int j = 0;
    while (i < vec.size())
    {
        if (vec[i] >= 1)
        {
            for (int k = 0; k < vec[i]; k++)
            {
                arr[j++] = i;
            }
        }
        i++;
    }
}

int countingSortAndUnique(int arr[], int n)
{
    int maxElm = INT_MIN;
    for (int i = 0; i < n; i++)
        maxElm = max(maxElm, arr[i]);

    vector<int> vec(maxElm + 1, 0);
    for (int i = 0; i < n; i++)
        vec[arr[i]] = 1;
    
    int i=0;
    int j =0;
    while(i<vec.size()){
        if(vec[i]!= 0)
            arr[j++] = i;
        i++;
    }

    return j;
}

int kthSmallest(int arr[], int n, int k)
{
    // int n = abs(l - r) + 1;
    int newSize = countingSortAndUnique(arr, n);

    if(k > newSize)
        return arr[newSize-1];
    return arr[k - 1];
}

int main()
{
    int N = 6;
    int arr[] = {7, 10, 4, 3, 20, 15};
    int K = 3;
    cout << kthSmallest(arr, N, K) << endl;

    int N1 = 5;
    int arr1[] = {7, 10, 4, 20, 15};
    int K1 = 4;
    cout << kthSmallest(arr1, N1, K1) << endl;

    return 0;
}
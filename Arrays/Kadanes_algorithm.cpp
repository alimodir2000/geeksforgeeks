// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&sortBy=submissions
// Given an array Arr[] of N integers. Find the contiguous 
// sub-array(containing at least one number) which has the maximum sum and return its sum.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = 0;
    int maxValue = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(maxValue < arr[i])
            maxValue = arr[i];
        
        currentSum += arr[i];
        if(currentSum < 0)
            currentSum = 0;

        maxSum = max(currentSum, maxSum);
    }

    if(maxSum == 0)
        return maxValue;

    return maxSum;

    
}

int main()
{
    int N = 5;
    int Arr[] = {1, 2, 3, -2, 5};
    cout << maxSubarraySum(Arr, N)<<endl;

    int N1 = 4;
    int Arr1[] = {-1,-2,-3,-4};
     cout << maxSubarraySum(Arr1, N1)<<endl;
    return 0;
}

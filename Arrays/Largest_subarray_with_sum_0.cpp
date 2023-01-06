/*
https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?page=1&difficulty[]=0&difficulty[]=1&difficulty[]=2&company[]=Amazon&company[]=Microsoft&company[]=Adobe&company[]=Google&company[]=Facebook&company[]=Visa&company[]=IBM&category[]=Arrays&curated[]=1&sortBy=difficulty
Given an array having both positive and negative integers.
The task is to compute the length of the largest subarray with sum 0.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;



int maxLen(vector<int> &A, int n)
{
    unordered_map<int, int> dic;

    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
            maxLen = i + 1;
        else
        {
            if (dic.find(sum) != dic.end())
                maxLen = std::max(maxLen, i - dic[sum]);
            else
                dic[sum] = i;
        }

        
    }
   
    return maxLen;
}

int main()
{
    int N = 8;
    vector<int> A = {10, -2, 2, -8, 1, 7, 10, 11};
    cout << maxLen(A, N) << endl;

    int N1 = 3;
    vector<int> A1 = {-1, 1, 1};
    cout << maxLen(A1, N1) << endl;

    return 0;
}
// problem url: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&category[]=Arrays&sortBy=submissions
#include <iostream>
#include <vector>

using namespace std;

vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    int i = 0;
    int j = 0;
    long long int cs = 0;
    vector<int> res;

    while (i < n && j <= i && cs != s)
    {
        if (cs < s)
        {
            cs += arr[i];
            i++;
        }
        else if (cs > s)
        {
            cs -= arr[j];
            j++;
        }
    }
    if (i == 0 && j == 0)
    {
        res.push_back(-1);
        return res;
    }

    if (cs == s)
    {
        res.push_back(j + 1);
        res.push_back(i);
        return res;
    }

    res.push_back(-1);
    return res;
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = 10, S = 15;
    vector<int> res = subarraySum(A, N, S);
    
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;

    return 0;
}
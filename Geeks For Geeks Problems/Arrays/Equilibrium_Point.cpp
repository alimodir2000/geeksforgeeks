// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&difficulty[]=-1&difficulty[]=0&difficulty[]=1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Facebook&category[]=Arrays&curated[]=1&curated[]=2&sortBy=submissions
/*
    Given an array A of n positive numbers. The task is to find the first Equilibrium Point in an array.
    Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
    Note: Retun the index of Equilibrium point. (1-based index)
*/

#include <iostream>

using namespace std;

int equilibriumPoint(long long a[], int n)
{
    if (n == 1)
        return 1;

    int i = 1;
    int j = n - 2;
    long long rSum = a[0];
    long long lSum = a[n - 1];

    while (i < j)
    {
        if (rSum < lSum)
        {
            rSum += a[i];
            i++;
        }
        else if (lSum < rSum)
        {
            lSum += a[j];
            j--;
        }
        else
        {
            rSum += a[i];
            lSum += a[j];
            i++;
            j--;
        }
    }
    if(rSum == lSum && i<n-1)
        return i+1;
    return -1;
}

int main()
{
    int n = 5 ;
    long long A[] = {1,3,5,2,2} ;
    cout<<equilibriumPoint(A,n)<<endl;


    int n1 = 5 ;
    long long A1[] = {1,1,1,2,3} ;
    cout<<equilibriumPoint(A1,n1)<<endl;

    int n2 = 2 ;
    long long A2[] = {26, 26} ;
    cout<<equilibriumPoint(A2,n2)<<endl;
    return 0;
}

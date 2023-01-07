// https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

#include <iostream>
using namespace std;

int findMajorityCandidate(int a[], int size)
{
    int count = 1;
    int majorityIndex = 0;
    for (int i = 1; i < size ; i++)
    {
        if (a[majorityIndex] == a[i])
            count++;
        else
            count--;

        if (count == 0)
        {
            count = 1;
            majorityIndex = i;
        }

        
    }
    return a[majorityIndex];
}

int majorityElement(int a[], int size)
{

    int mjCandidate = findMajorityCandidate(a, size);
        
    int cnt = 0;
    for (int i = 0; i < size; i++)
        if (a[i] == mjCandidate)
            cnt++;
    if(cnt > size/2)
        return mjCandidate;
    return-1;
}

int main()
{
    int N = 5 ;
    int A[] = {3,1,3,3,2} ;
    cout<<majorityElement(A,N)<<endl;


    int N1 = 5 ;
    int A1[] = {3, 1, 3, 3, 2} ;
    cout<<majorityElement(A1,N1)<<endl;
    return 0;
}
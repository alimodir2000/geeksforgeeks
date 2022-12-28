// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category[]=Arrays&sortBy=submissions
#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &array, int n)
{
    // Your code goes here

    int totalSum = n * (n + 1) / 2;
    int cs = 0;
    for (int i = 0; i < array.size(); i++)
        cs += array[i];
    return totalSum - cs;
}

int main(){

    int N = 10;
    vector<int >A= {6,1,2,8,3,4,7,10,5};
    cout<<missingNumber(A, N);
    return 0;
}
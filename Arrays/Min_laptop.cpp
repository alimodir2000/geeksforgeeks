// https://practice.geeksforgeeks.org/problems/af49b143a4ead583e943ca6176fbd7ea55b121ae/1

#include <iostream>
#include <algorithm>
#include <array>
#include <queue>

using namespace std;

int minLaptops(int N, int starts[], int ends[])
{
    if (N == 0)
        return 0;

    queue<int> st;

    int minNo = 0;
    sort(starts, starts + N);
    sort(ends, ends + N);

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            st.push(ends[i]);
            minNo++;
        }
        else
        {
            st.push(ends[i]);
            if (starts[i] < st.front())
            {                
                minNo++;
            }
            else
            {
                st.pop();
            }
        }
    }

    return minNo;
}

int main()
{
    int N = 3;
    int start[] = {1, 5, 2};
    int end[] = {2, 6, 3};

    cout << minLaptops(N, start, end) << endl;

    int N1 = 9;
    int start1[] = {1, 3, 1, 4, 5, 1, 2, 1, 2};
    int end1[] = {5, 10, 2, 7, 9, 3, 3, 2, 5};

    cout << minLaptops(N1, start1, end1) << endl;


    int N2 = 4;
    int start2[] = {1, 3, 3, 2};
    int end2[] = {2,5,4,5};

    cout << minLaptops(N2, start2, end2) << endl;

    int N3 = 3;
    int start3[] = {1, 2, 3};
    int end3[] = {4, 4, 6};

     cout << minLaptops(N3, start3, end3) << endl;

    return 0;
}
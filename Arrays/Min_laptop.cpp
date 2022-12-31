// https://practice.geeksforgeeks.org/problems/af49b143a4ead583e943ca6176fbd7ea55b121ae/1

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int minLaptops(int N, int start[], int end[])
{
    if (N == 0)
        return 0;

    int minNo = 0;
    int acp = 0;

    vector<pair<int, int>> works;
    for (int i = 0; i < N; i++)
        works.push_back(make_pair(start[i], end[i]));

    std::sort(works.begin(), works.end());

    //  for (int i = 0; i < N; i++)
    //     cout<<works[i].first<<"-"<<works[i].second<<endl;

    queue<int> st;

    for (int i = 0; i < N; i++)
    {
        if (st.size() == 0 && i == 0)
        {
            st.push(works[i].second);
            minNo++;
            
        }
        else
        {
            if (works[i].first < st.front() )
            {
                st.push(works[i].second);
                minNo++;
            }
            else
            {
                st.pop();
               
                //st.push(works[i].second);
            }
        }
    }

    return minNo;
}

int main()
{
    // int N = 3;
    // int start[] = {1, 5, 2};
    // int end[] = {2, 6, 3};

    // cout << minLaptops(N, start, end) << endl;

    int N1 = 9;
    int start1[] = {1, 3, 1, 4, 5, 1, 2, 1, 2};
    int end1[] = {5, 10, 2, 7, 9, 3, 3, 2, 5};

    cout << minLaptops(N1, start1, end1) << endl;

    return 0;
}
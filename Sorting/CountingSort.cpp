#include <iostream>
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
            int k = 0;
            for (k; k < vec[i]; k++)
            {
                arr[j++] = i;
            }
        }
        i++;
    }
}

int main()
{
    int n = 0;
    int arr[] = {1, 2, 3, 22, 2, 3, 4, 5, 10};
    

    for (int i = 0; i < 9; i++)
        cout << arr[i] << endl;

    countingSort(arr, 9);
    cout << "-------------" << endl;

    for (int i = 0; i < 9; i++)
        cout << arr[i] << endl;
}
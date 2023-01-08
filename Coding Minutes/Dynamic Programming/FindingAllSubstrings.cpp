// To find all substring using backtracking

#include <iostream>
#include <vector>

using namespace std;

void findSubsets(char *input, char *output, int i, int j)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }

    //include the ith letter
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1);

    //exclude the ith letter
    findSubsets(input, output, i+1, j);

}

int main()
{
    char input[100] = "abcdef\0";
    char output[100];

    
    findSubsets(input,output,0,0);

    return 0;
}

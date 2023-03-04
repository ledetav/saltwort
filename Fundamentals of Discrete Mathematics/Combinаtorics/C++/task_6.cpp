#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int n = 10;       // number of digits
    const int k = 6;        // length of the number
    const int max_sum = 47; // maximum sum of digits

    // Creating a matrix to store the number of possible numbers
    // with a given sum of digits for each length of the number
    vector<vector<int>> count(max_sum + 1, vector<int>(k + 1, 0));

    // Initialize the first row of the matrix
    // (for numbers of length 0)
    count[0][0] = 1;

    // Filling in the matrix using dynamic programming
    for (int s = 1; s <= max_sum; ++s)
    {
        for (int i = 1; i <= k; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (s >= j)
                {
                    count[s][i] += count[s - j][i - 1];
                }
            }
        }
    }

    // Sum up the number of possible numbers for all sums of digits
    int result = 0;
    for (int s = 0; s <= max_sum; ++s)
    {
        result += count[s][k];
    }

    // Output the result
    cout << result << endl;

    return 0;
}
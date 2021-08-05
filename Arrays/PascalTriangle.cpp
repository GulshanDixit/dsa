#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int A)
{
    vector<vector<int>> pascalTri;

    for (int i = 0; i < A; ++i)
    {
        vector<int> row;//(i+1);

        for (int j = 0; j <= i; ++j)
        {
            if (j == 0 || j == i)
            {
                row.push_back(1);
                continue;
            }
            else
            {
                row.push_back(pascalTri[i - 1][j] + pascalTri[i - 1][j - 1]);
            }
        }

        pascalTri.push_back(row);
    }

    return pascalTri;
}
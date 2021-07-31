#include "MinStepsInfiniteGrid.h"

int coverPoints(vector<int> A, vector<int> B) {

    // compare the next point with current point 
    // and increment accordingly
    int steps = 0;
    int i = 0;
    while (i < A.size() - 1)
    {
        int diff = max(abs(A[i + 1] - A[i]), abs(B[i + 1] - B[i]));
        steps += diff;
        i++;
    }

    return steps;
}

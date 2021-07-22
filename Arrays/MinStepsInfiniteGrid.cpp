
int abs(const int &i)
{
    return i > 0 ? i : -i;
}

int max(const int &x, const int &y)
{
    return x > y ? x : y;
}

int coverPoints(int* A, int n1, int* B, int n2) {

    // compare the next point with current point 
    // and increment accordingly
    int steps = 0;
    int i = 0;
    int arrSize = sizeof(A) / sizeof(A[0]);
    while (i < arrSize - 1)
    {
        int diff = max(abs(A[i + 1] - A[i]), abs(B[i + 1] - B[i]));
        steps += diff;
        i++;
    }

    return steps;
}

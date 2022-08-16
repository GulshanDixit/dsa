#include <iostream>
#include <vector>
#include "PairWithGivenDiff.h"

int main()
{
    //std::vector<int> A{ 5, 10, 3, 2, 50, 80 };
    //int B = 78;

    std::vector<int> A{ -10, 30 };
    int B = 40;

    std::cout << pairWithGivenDiff(A,B);
}

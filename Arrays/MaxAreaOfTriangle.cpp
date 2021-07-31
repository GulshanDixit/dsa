#include "MaxAreaOfTriangle.h"
#include <algorithm>

void setHeightOfOrderFromMatrix(vector<pair<pair<int, int>, pair<int, int>>>& heights, const int& order, vector<vector<char>>& A)
{
    for (int top = 0; top < A.size() - order; ++top)
    {
        int bottom = top + order;
        for (int x = 0; x < A[0].size(); ++x)
        {
            if (A[top][x] != A[bottom][x])
            {
                heights.push_back(make_pair(make_pair(x, top), make_pair(x, bottom)));// insert (x,y) first quad
            }
        }
    }
}


// https://www.interviewbit.com/problems/maximum-area-of-triangle/
int maxAreaOfTriangle(vector<string>& B)
{
    // using vector<char> instead of string cut down time by 41% approx
    vector<vector<char>> A;

    for_each(B.begin(), B.end(),
        [&A](string& element)
    {
        vector<char> vElements;

        for_each(element.begin(), element.end(),
            [&vElements](char& c)
        {
            vElements.push_back(move(c));
        });

        A.push_back(move(vElements));
    });

    vector<pair<pair<int, int>, pair<int, int>>> heights;

    int top = 0, bottom = A.size() - 1;
    int cols = A[0].size();// check might be req

    int area = 0;

    for (int order = A.size() - 1; order > 0; --order)
    {
        // find height of particular order
        setHeightOfOrderFromMatrix(heights, order, A);

        // for these heights find a suitable third point
        int maxWidthForCurrHeight = 0;
        int rows = A.size() - 1;
        cols = A[0].size() - 1;
        pair<int, int> thirdPoint, firstPoint, secondPoint;

        for (int i = 0; i < heights.size(); ++i)
        {
            firstPoint = heights[i].first;
            secondPoint = heights[i].second;

            // the chars in that height section
            char s = A[firstPoint.second][firstPoint.first];
            char t = A[secondPoint.second][secondPoint.first];

            int heightCol = firstPoint.first;

            for (int l = 0; l <= ceil(cols / 2); ++l)
            {
                for (int k = 0; k <= ceil(rows / 2); ++k)
                {
                    char a = A[rows - k][cols - l];
                    char b = A[rows - k][l];
                    char c = A[k][cols - l];
                    char d = A[k][l];

                    auto checkDiff = [&s, &t](const char& z) { return !(z == s || z == t); };

                    thirdPoint.first = -1;
                    thirdPoint.second = -1;

                    if (checkDiff(a) || checkDiff(c))
                    {
                        if (abs((cols - l) - heightCol) > maxWidthForCurrHeight)
                        {
                            maxWidthForCurrHeight = abs((cols - l) - heightCol);
                        }
                        if (checkDiff(a))
                        {
                            thirdPoint = make_pair(rows - k, cols - l);
                        }
                        else
                        {
                            thirdPoint = make_pair(k, cols - l);
                        }
                    }
                    else if (checkDiff(b) || checkDiff(d))
                    {
                        if (abs(l - heightCol) > maxWidthForCurrHeight)
                        {
                            maxWidthForCurrHeight = abs(l - heightCol);
                        }
                        if (checkDiff(b))
                        {
                            thirdPoint = make_pair(rows - k, l);
                        }
                        else
                        {
                            thirdPoint = make_pair(k, l);
                        }
                    }

                    if (thirdPoint.first != -1 && thirdPoint.second != -1)
                    {
                        int aa = ceil(0.5 * (abs(firstPoint.second - secondPoint.second) + 1) * (maxWidthForCurrHeight + 1));
                        area = aa > area ? aa : area;
                    }
                }
            }
        }

        if (order * (cols + 1) * 0.5 < area)
        {
            return area;
        }
        else
        {
            heights = {};
        }
    }

    return area;
}

vector<string> normaliseLengthOfAllElements(vector<string>& A)
{
    int lengthOfFirstElement = A[0].length();

    vector<string> B;
    for (string& element : A)
    {
        if (element.length() == lengthOfFirstElement)
        {
            B.push_back(move(element));
        }
    }

    return B;
}

int maxAreaOfTrianglePrimtive(vector<string>& A) {

    int area = 0;

    // maximum height
    // row by row
    vector<pair<pair<int, int>, pair<int, int>>> heights;
    //vector<pair<int,int>> heights;
    //int maxHeight = 0;

    int top = 0, bottom = A.size() - 1;
    int cols = A[0].length();// check might be req

    // r r r 
    // r r g 
    // r r r 
    // b r r

    for (top = 0; top < A.size() - 1; ++top)
    {
        for (bottom = A.size() - 1; bottom > top; --bottom)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (A[top][j] != A[bottom][j])// && bottom - top >= maxHeight)
                {
                    // if fail check for smaller heights
                    //maxHeight = bottom - top;
                    //heights.push_back(make_pair(maxHeight, j))
                    heights.push_back(make_pair(make_pair(j, top), make_pair(j, bottom)));
                }
            }

            //can't stop at max height as cases like this also possible
            // r r r r r
            // b r r r r
            // r r r r r
            // r g r r r
            // g r r r r
            // here the max height is not giving the desired result
            //if (bottom - top - 1 < maxHeight)
            //{
                //break;
            //}
        }
    }



    int k, l;
    k = l = 0;
    int width = 0;
    int rows = A.size() - 1;
    cols = A[0].length() - 1;
    pair<int, int> thirdPoint{ 0,0 };
    pair<int, int> firstPoint;
    pair<int, int> secondPoint;

    for (int i = 0; i < heights.size(); ++i)
    {
        char s, t;
        s = A[heights[i].first.first][heights[i].first.second];
        t = A[heights[i].second.first][heights[i].second.second];
        int heightCol = heights[i].first.second;

        firstPoint = heights[i].first;
        secondPoint = heights[i].second;

        for (l = 0; l < A.size() / 2; ++l)
        {
            for (k = 0; k < A[0].length() / 2; ++k)
            {
                char a = A[rows - k][cols - l];
                char b = A[rows - k][l];
                char c = A[k][cols - l];
                char d = A[k][l];

                auto checkDiff = [&s, &t](char& z) { return !(z == s || z == t); };

                thirdPoint = make_pair(-1, -1);
                if (checkDiff(a) || checkDiff(c))
                {
                    if (abs((cols - l) - heightCol) > width)
                    {
                        width = abs((cols - l) - heightCol);
                    }
                    if (checkDiff(a))
                    {
                        thirdPoint = make_pair(rows - k, cols - l);
                    }
                    else
                    {
                        thirdPoint = make_pair(k, cols - l);
                    }
                }
                else if (checkDiff(b) || checkDiff(d))
                {
                    if (abs((l)-heightCol) > width)
                    {
                        width = abs(l - heightCol);
                    }
                    if (checkDiff(b))
                    {
                        thirdPoint = make_pair(rows - k, l);
                    }
                    else
                    {
                        thirdPoint = make_pair(k, l);
                    }
                }

                if (thirdPoint.first != -1 && thirdPoint.second != -1)
                {
                    //int aa = 0.5 * abs(firstPoint.first * (secondPoint.second - thirdPoint.second)
                    //    + secondPoint.first * (thirdPoint.second - firstPoint.second)
                    //    + thirdPoint.first * (firstPoint.second - secondPoint.second));
                    int aa = 0.5 * (abs(firstPoint.second - secondPoint.second) + 1) * (width + 1);
                    area = aa > area ? aa : area;
                }

                // both increment at same time selects diagonal elements only
                //if (l < cols)
                //{
                //    if (abs((cols - l -1) - heightCol) > maxWidth
                //        ||
                //        abs((l + 1) - heightCol) > maxWidth
                //        )
                //    {
                //        ++l;
                //    }
                //}
                //if (k < rows)
                //{
                //    ++k;
                //}
                //else
                //{
                //    break;
                //}
            }
        }

    }

    // return ceil
    return area;
}

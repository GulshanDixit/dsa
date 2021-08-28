// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Interview bit questions
#include <iostream>
#include <chrono>
#include <algorithm>
#include <vector>
#include <map>
#include "MinStepsInfiniteGrid.h"
#include "MinNumOfLights.h"
#include "PickFromBothSides.h"
#include "SortArrayWithSquares.h"
#include "PerfectPeak.h"
#include "HotelBooking.h"
#include "BalanceArray.h"
#include "MaxAreaOfTriangle.h"
#include "PascalTriangle.h"
#include "SetMatrixZero.h"
#include "RepeatAndMissingNumber.h"
using namespace std;
using namespace std::chrono;


int main()
{
    auto start = high_resolution_clock::now();

    //vector<int> A{-2};
    //vector<int> B{7};

    //cout << coverPoints(A, B);

    //vector<int> bulbs{ 1, 1, 0, 0, 1, 1 };
    //vector<int> bulbs{  0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0  };

    //cout << MinNumOfLights(bulbs, 12);

    //vector<int> nums{ -712, -894, 40, -58, 264, -352, 446, 805, 890, -271, -630, 350, 6, 101, -607, 548, 629, -377, -916, 954, -244, 840, -34, 376, 931, -692, -56, -561, -374, 323, 537, 538, -882, -918, -71, -459, -167, 115, -361, 658, -296, 930, 977, -694, 673, -614, 21, -255, -76, 72, -730, 829, -223, 573, 97, -488, 986, 290, 161, -364, -645, -233 };
    //vector<int> nums{ -533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322, -667, 673, -336, 141, 711, -747, -132, 547, 644, -338, -243, -963, -141, -277, 741, 529, -222, -684, 35 };
    //cout << pickFromBothSides(nums, 48);

    //vector<int> nums{ -855, -847, -747, -708, -701, -667, -666, -618, -609, -536, -533, -509, -500, -396, -336, -297, -284, -229, -173, -173, -132, -38, -5, 35, 141, 169, 281, 322, 358, 421, 436, 447, 478, 538, 547, 644, 667, 673, 705, 711, 718, 724, 726, 811, 869, 894, 895, 902, 912, 942, 961 };
    //
    //for (int& i : sortArrayWithSqaures(nums))
    //{
    //    cout << i << " ";
    //}

    //perfect peak
    //vector<int> nums{ 9488, 25784, 5652, 9861, 31311, 8611, 1671, 7129, 28183, 2743, 11059, 4473, 7927, 21287, 2259, 7214, 32529};
    //vector<int> nums{ 1, 2, 3, 4, 5, 4, 3, 2, 3, 10 };
    //cout << perfectPeak(nums);
    //pp

    // hotel booking
    //vector<int> a{ 17, 0, 45, 11, 16, 43, 15, 42, 2, 41, 0, 27, 37, 25, 17, 42, 24, 23, 11, 4, 29, 39, 6, 10, 42, 16, 17, 39, 1 };
    //vector<int> b{ 25, 24, 52, 51, 26, 46, 25, 45, 9, 51, 49, 48, 51, 66, 65, 57, 69, 43, 50, 9, 32, 55, 10, 58, 62, 46, 19, 87, 12 };
    //vector<int> a{ 40, 18 };
    //vector<int> b{ 40, 45 };
    //vector<int> a{ 1, 2, 3, 4 };
    //vector<int> b{ 10, 2, 6, 14 };

    //cout << hotel(a, b, 2); // 16
    // hb

    // balance Array
    //vector<int> a{ 2, 1, 6, 4 };
    //cout << balanceArray(a);
    //ba

    // maximum area of triangle
    //vector<string> A{ "bbrbbb", "brgrbb", "rbbggb", "rggggr", "rrggrb", "grrbrg", "gbbrrg", "grgrbb", "bbbrgr", "bbrrgg", "rggrbg", "rrgggg", "ggbbgb", "grggbb", "rrrbrr", "rrrbrb", "bbbbbb", "rbbbrg", "ggbbbg", "ggbggr", "bggrgb", "bbrrrb", "rbrrbb", "brbgrg", "rbrrrg", "bbrrgg", "rbgrgg" };//81
    //vector<string> A{ "ggrrrbrrbbbrrbrbgbrgg", "rgbbbbrbbrbbrrggggrrr" }; //19
    //vector<string> A{"rbbbggrbrbrggrgr", "bgbrbbrgggrgrrrr", "rgbrrrbbgbbbrrrb", "bbgbrgrbbrgrrgbb", "ggbrbrrbggggrrgb", "bgbrbrggbgrrgbrg", "grbbbgrbgbbgbbgr", "rbgbgbrrgrgbgbbr", "gbgrrgbbrrbbgbbg", "brgrbbrrbrgbgbrb", "rbbrrrbgrbgrbbrg", "rrggrrbbbrgbgggg", "rrrrgbbrgbbgbbrg", "rgbgrrrrggbbrrgr", "ggbrbbbbgrrrbrbb", "gggggrgbrbrbrrgr"};//128
    //vector<string> A{ "rrrbbbrrrgbbggbbggrbb", "rgbbbrbggggrggbggbrrr", "rgrggbgbbggbgggbbbbbg", "brgrggrrggggrbrbgrrrb", "grbrggbbrrrggrrbrrbrr", "rggrbrbggbbbgbrggrrbb", "bbbgbgbbrgrbbgbrbbbrb", "rrrggbrrgrbbgbbrrggbg", "ggbrrbrgbrbbrgrbrgbgr", "bbgrrggbbggggbgbgrgrb" };//105
    //vector<string> A{ "ggbggbgrrbr", "grrbgrrrbbb", "rgbgrrgbgbb", "ggrbgrrgggr", "gggrgrbbgbr", "bbrgrbgrbbg", "bgrbrgrbrgg", "bbbgrgrgrgg", "rrrbbggbggr", "rgrbbrrrgrb", "bbrgbgbbrrg", "grrrbrgbgrb", "rrrrgrbgbbr", "gbrbbggbbgb", "rrrgrbrrbgg", "grbgrrggbgg", "rrgbrrgrbgr", "rgggbbbrbbb", "rbrrgggrgrr", "bbggbbgbbbb", "brbrrrrgbbg", "brrrrgrgbgg", "gbrrggrgggg", "brrbgrggbbg", "brrbgrbrgrb" };//138
    //vector<string> A{ "rrrbr", "ggrgb", "bbbrg", "rrgrr", "gbggb", "rbbgr", "rbgrg", "bbbgr", "ggbbb", "bggbr", "ggrbb", "grrrg", "rbrrg", "brrgr", "rrgbg", "bbrgr", "gbbbr", "rrbgb", "brbbr", "bgrrr", "bbggr", "rggbg", "bbggg", "gggbb", "bgbbg", "rrbgr", "rggrb", "grggr", "rggrr" };//70
    //vector<string> B{ "rrbrbbgrrrbbrggrbrrbbgbggrgbrbbrrbggbggrbbbrrgbbrbrrbrbbgrbbrrbgrbrgrrgrgrrrrrrrrbrrggrbrbbgrgrbgrrgbbggbbgggbggbrrbggrrgrrgbrbggrbgbrgggggbrbbrrgrbggbbbbgbrggggggbrggbbbbrrggbggrgrbrggrbrrgbbbgbrgrbrbgbrbgbrrgbbrggrrgbgbbbrgrbrbrbgrgrgggbrbgbrbrgbgggrgbgbgrrbgbbgrgbrgrrbrbbgrgbgbrrbrbbggrbbgrbbgrggrbrrgrgrbrgrrrgrrgrbgbbgrbbgrrrggbbrrrbggggrrbgbbgbrbggrbrrrgbgggbgrrrbrbrrrbrbbgbgbbbbrrrgbrbgbbbgrbggrgrbgbbbggrgbrgbbrbbrbrgrbggrgggrgbgrrbrrbgbbrgrbgrbrggbrrrrggbrbbbgbggbgrrgbgrgggrgbrrggggrgbbbgggbgrrbrgbbgbbggggrrrrbbrggrbrgggbgrggrbgbrrgbbgrgrgggggrrrgbbrrgbgrrgggbgbbbgbrgbbbrrrgrggbgrrrrrbggbgrbbrrrbrrrbgrrbbbrbgbbrgrbgrbggbrgrrgrbbrgggrgrbbbgggbgrbbbbgrrrbrggrbrbbrbrgrgbgbbrrgbgrrrrrrrrbbbbrgrgbrbrbbbbbrrrgrbbrrbbrgrrbrbrrggrrggbbgrgggggrbgbrrbrgbrggbgbrggrbggrgrgrrgbgbbbbgrbgbbgrbgbbgrgrgbrbbgrrbggbbbbrbgbbgrbgbgrrrgggrbbbgbgrgbbrbrgbrbrrbgbgbbgbgrbrgbgbgbrrbbgbgbrbggrbrbgbbbbrrbrgrbgggbgggggggbgbgbrgbrbgrbggbrggrgrbgrgrbggrgrbgrrbgbgbgbbgrbgbgbbrbbrgrgrrbgbbbbbggbgrrgbgrrrbrbbbrg",
    //    "rrggrgbgbbgrbbbbbgggbrrggggggbgbgggrbbgbbrgrbrbbbrbbrbbbrrrggggrgrrrrbrrgbbrrrbbbggbbrrrbbrggbrgbrgbbrggrggbbrgbrbgrrggrbggrgrrrgbbrrgbrrgbgbbbgrggrrgrrgrgrgrbgrbgbbggggbggbrbbbbggbbrrrrrrrbbggrgrgbrbbrrbrbbrrgbrrbrgrrggggrggggggrrrggrbrbgbggrgggggbgbbggrbgbggrggggrrgrrgbbgbbbrrggrggrbbgbgbbbgrrbrrbbggbrrrbgggrrgrrrgrrrbbgbrrbbbrrbgbrggbbggbbrgbbbbrgrgrggrgbgbbrbrbgbggrrrbgggggbbbrbrbrggbbbrbbgrbbrbrrgrrgrrgrggbrggrbgbrbgggggrgggrbgbrbbgrbgbgrbbbbrrgbbbbrgrgbbgbbggrrbgrrrbbggbgggggggbrgbgrbgrrgbbbgrbrrrrgrrgggrrrggbrbrbrbrggbrgbbgbbgrgrrbggrrggbgbrbrbrrbrbbbgggbbgrrbrbrrrbrbgbggggbbbgrbrbgrgbbbrbbbrgbgbgbgrbgrgrbrbgrgrrgbgrggrbgrgbgrrgrbbgrrrgbrbbbgbgbgbgrgrggrbrrrrbrgbrggbrrgggbrrrbrrbbgrggrrgbbbrrggrrbrbrbbrgbbgrgrrgbgbbggbbgrrgbrrrbrgrrbgrbgrrrbbgrgrbbbrrbgggggrrrgbgbgbbrbrrgbgbrbbrgrbgbbgggrgbgbrggrggrgrggrgrrrrbbrgrrggrrbgrgrbbbbbbbggggbgbbggrbrrgrgrgggbbrbrgbgrbbrbbrbgggbbgbrrgrgrgbbbggbgbrrrgrggbbbrrbgrgrrbbgrgbggrbbbgbrrggrrggbgrbrrgrgbgbgrbrbrgbrggggrbrbgrgbgrrbgbrrbgbrrgrbbrg",
    //    "grrrgrbbbrrrrbggbgbbggbrrrbgbbrbgrrgbbbbgrbgrgbbgbgrgrbgrgrgggrbbbbgrrbrbggrrrgrggrrbgrbrgbbrbbggggrrbrgrbbgrrgrgbrrgbbgggbgbgbrbgbbbggrgrgggbgbbbgggbrgrgbgbgrgbgbgrbbbrggrgbbbrgrgrbbrbrgbgbgbgbrbrbbggggrbgrrrbggrrrrggrrgbbrrbrggggbrgbbbgggbrgbbrgbrbrgrrgbgrrrrrrrrgrbrbggbbbrgbgbrgrbrbrrrgrrrrbrbbgggbggrbbbrggbgggrggbbgrggbrggrggbbgrrgbgrrrrrrrbggrggbggggggrrgbgbggbrbgbgbbgbgbrgbrrrrbbbrrgggrbrrggbbbbrbrgbrggrrgbgbgbbbbbgbrgbbgbrbbggrgbbgrbgrbgrbgrbgrgbrrgrgbrrggrgrbgrgrbgrgbbbrrggrgrbrbgrbrbgrgrrgbrgggggrgbggbrggbbgbgrgbgbbbrrbgbggbrrrbgbgrbrbgrggrggrbgbbbrggbbbrrgbgbrbbrgbgrgrgbbrrbrgrbrrbbrgggbrrrrbrbrrrgrbgbrgrbbrgbbgrgggbrrgrgbgrrgggrbbrrrbbbbbbgbggbbgrrbgbggrbgrgbrgggbgrrggrgbgrbbgggrbggrgrgrrrggbbrbbrbrbrbbgrrrrrrrgggbgrrgbgbbgggbrbbbrggrbgbbbggbbbgrrbrgbgbgrrrbbgrgrbrrgbbbggrgrrrrbbbrgbbrgggbrbgggbrrbrrbbbbgrbbbbgrrbbrrbgrggbgrbgbggggbgbgbbgrbrbgbgbbbrrrrbbbggrrrrbbggbbrrbgbrgbrbbrgbggbrbrrrbgrggrrbrbrggbbbgrgbrbbbrbbrrbgrrrrgbbbrrbbbgrbrrgrbrrbrgbgrgggrggrgbrbbrbgggbbrrggrgrgr",
    //    "grbrgbrrrgrgbrrbrgbgggrbgbrgrrrggggrgggggbrbrgrgbbgrgggbrbbbgbrgggrrbgrrrbgbbgggrrrbrgbgbbrrrbrbgbgrrbrbrggrrbbbbgrgbgbbrrrgrrbggbgrbrrgggrbgggrgrggrrbrbrrbrgrbbbgrrrgrbbbgrbggbbbbrrbrggrbgggrgrggbgrrrbrgrrggbbbbbggbbbbbrbrbbrbggbgrbgbbbrbrrbrbggbrrgrbbrggrrgrggrggbgbrbbrbrgrggggbrggbggrbbbbbgrgbbggbgrrggbbrgrrgbrbgrbrrgbgrgrrgbgggrrrgrbbbggbrbgggbggrrbbbrrbrbgbbrgbbrrgrbgggggrggrgrrrgrrbrrbbgbbgggrbggrgbrbggrbgbrrrbbrbbrbbbbggggrrrgrrbbgggbbgrrgrgrrrrbrbggrrrgrgrrbgbbbbbbbbbrrrgbrrrrbrrrbrrggrbbbrrgbrrrgrgrgbbrrbgrgrrrggrrbbbrgrgrbbbbgbrgbgbrgggbgrbbbrgrbbrrrgrgggggrbrggrbrgbrrgrbggbrbgrbgbbgbbbbgrggggrbrbbggbbbrbgrrrrgrrgrrgbgbgbrrgrgrrbrbrbbrbbrgrgbrgbrggbgbbbgrgggbbggbrrbbbbggrrrgrggrgbgbggggrggbgrbbbgrbbrgbgbgrbbbbbrgbrgbrrrbrgbrrrgbbrrgbggbrgrgrbbbrrrbgggrrgrrgbrbgrrbbbbbbgbggbgbggrbbgrgrrbgrbbrbbbgbbbrggrgbrbbbrrbbgbrgrrbbbrbbrrgggrbbgbbrrrbgrbrrrrrrrggrgrbrrgrrgrbrrbbbbrggbggbgbbrrrbggggrgrrbrrrbggggrgbbrrgbbgrrggrrgrrgbrgbgbbbrrrbrgbbrgrrgggbbggrbbrgggbggbgbrgbrrbrgbggbggggbgb",
    //    "gbrgrgrrgrgbbrgbgbrrrbgrgggrbrgrbrbbrgrgrgbrrgrgrgbbgrgrrrggbbrgbrgbrggrbbgbbrrrrbgbgrbgrgbgrrbgrgrrbrrrgrggbbrrbbggbrrgbrbrrgrrggrbgbbrggbbbrbrbrggrgrggggrrgbrggrbrggbbrrbgbrbgrrrgrgrbgbrbgbgbrbgbbgrgrgbgbgbbbbrbggrbggbbgrrrrbgbggbrrbrrbrgbbgrrrbgbgbrbbbrbrgbggrrrrgbbrggrggrgrbrbgbrbrrggrbgrbggbbbggrbrbbgrbbrrggbrrgbbbrrrbrgggbbgrgrrbgrrrbrgbrbbrrgbgrbrgrbrbggbgbbrrrbrbggbggrgrggrrgbbggrrbbbrrrrgbgrrbbgbrggbbggrrrrrgrgrbbrgrrgbbbbrbrrgrrbbbrrrrrbbbbbrgbrrrgbgrrbbgbbrrrgbbrbrrrrrbrrbbrrggbbggbbbrrbgbbrbgggrbrrggrbrbbbgbbrrbggrgrgrbbggbbrgbrrrbrbgbbbrrgbrbrgrgbgbbgrbbbgbggggrbgggrgbbbggrgrgrbrgrbrrggggrgrrrrgrrgggbbbbbbrgrgrgggbrggbrgrrgrgrggrgbgbggbbbgbbgrrrbggrrrgbrgggbbrgggrrgrgrgbbggggrbrgbbbgggrrrrrrgggbggrrrrbbbbbrrrgbgrgrrrggrrgbrbrgggbggrbrgrbgrbbbbbgbbggrgrbggbbrgrbbgrrgbbbrbrggrgrrrbrgbgggggggbrbbbbbgrgrgrgrgrbrgbgbrrrrbrbrbrrrrrgbbbggrrrbrrrgggbggbgbrgrbbrgbbrggbbggbgbrgggbgbbgrrbrrrgggrrrbggbgrrgbggbbrgbrgbrrgrrrbggbrgrbrbbbbgbbrrgbrggrrrbgbbbbgbrgrrrgbrrgggbrbbrggbgbgbgggrr",
    //    "bbbgggbrggrrrrrbgbrrggbrgbgbbrbbrgrbggggrbbggbbgbgbrrrgggbggrrbrrbbbggrbrrbggbbgrrbggrbbrbbbbrgggggbbgrggbbbgbbbrgrggrrrrgrgrbrgrrgbbggrbgbrrbgbbbgrrbgrbrrgrrgggrbgrggbrrgggggggbrrrrgggggrgbbrgrbrbbrrgbbrggbrgbrgbrrrbrggbgbggbrbbbrgrgggbbggbgrgrrgrbbrggbrgbrbgggbgrgrrbbbgggbggggrbgbrbbbrrrgrggbbgggbbrgbgrrggggrrrrbbbrgrrggrrbrrrbbbrgbbrgrbgrbgbgrgbrgbrrbggrbbgbgbbrgrrrgbrrrrgbrrgbggrbbgrrgbrbrgggrbrrgggrbggggbggbbrbggbggrrgrrrbrbbbggrrrrgbgbbgbrrrbgbbgrbgrbbgbgrgrgrrgrggrbbrbggrgbrgrbgrrgbgbgrrrbrbrrbrrrgrgbrbbbgrrrbbgrrggrgrbgbrbgrbggrgrrgrbrrggrbbggrbbbbrggrrgbggrrbrgbrgbrbbgrgbrggbgrbrrggrggbbbbgbrbbrrggrgbgrrbgggrrrrgbgbbbggrgrgbbgrbbrrbggrbrbbrgbgggrrrgrgbgbrrbgrrbbrggrbbbgrrrrgbbbbrbbbbgbrbrggrrgrggbrgrgggggggrrrgggrrrgrgrggrgbgbgrrgrgrrrrbrrbbbbggrbgbbrbrrbrbrrrbgbggrbgbrrrbbrrgbrbbgrbbbrbgrbrbbggbrrgbgbbbgbggbbbrgbbbbrgrgrgrbbrbggbrgbbrbgbrrbrrrgrbbrgggrbbbgrbgbggrgbbbgrbgrrgrrbbgbrbggbgrrbrbgrbgrrrrbgrrbgrbgrbbbgbgrrgrrrgbrgrbbgrrbgbrgrbgrbbrbbbbbrbggrrbrbggbrbrbrbggrrggrrrrbr", 
    //    "rbbbgrgrrbrbgrbrbggggrbgbrrrrgrgbrbggrgrrbrgbrbgbbgbgrbgbgrbrrgbrgrrrrgbbrgbgbbggbrbbbgbbrgbgrbgggggggbgrbrgbrbbrbrggbgbbrgrbrrrbrrgbgbrrbrgrbbggrbgbbgbrrgrrgggbgrbrbgrbrgrrrbgbbbbrbbrrbrgbgbgrbgrrgrggbrrgbbrbbrggrrggrbrgggbrbbggrgrgrrggrrggrbrgbbrgbggbgrrggrgggrgbrrggrbbbggrrbggbgrbbrggrggbgrgbbgrrbggbgggbgbrrrrggggbgbrgrggbggrbrrgbrgrgbbbrbbbbrrrbgrbbgggbgrrbggggbrbbbrrgrbggbrrgrbbrggbgbbgrrggggrbrgrgrgrbrbbrrbgrbbgbrbgggrbgbbrrbgbbggrggrbbgbgbrrrbbggggbbbbrgggrgrrrbbbbggrbbbgbrggbbggbggrgrgbbrbbbrggrrrbrbbbgggggbgbgrrbrbbgbbbggbgrggrggrbrrrgbbgrgbrrgbbrbgbrggbgrrgrbrrbbbrbrrrbrbgrgggrbgrbggrgrrgbrrrbggbgbbggrbrbbgbgbbgrbbgrrgrggbrrrggbgbbbbrbrbbrggbbrrrgbgrbgrgbgbbrbbrgrrggbbbgggbbbgbbrrgrgrgbrggrbrrrbbbrbrbbgrrgrrrbgbrgrbrbggggbgrrrrrbbrrrbgrrrbgrggbrbgrgbgrrrgbbbggbbbrgbrgrrgbrbgrbgbrbbrgrbrrggbbrgbrrrbgbrbrrbggrrrbrbrgggbrgbrbbggggggrbbrrbgrbrggrgrgrbbgbgbbbbbggbrrbbrgrrgrbbrbbrgbgrbbrgbrggbbrbgrbgbbgrrgbgbbbggbgrggrbbbgbgrgbrrrbbgrrbgrgrrbbgbggbbrrbggggggbrrgbgbbgbrggrbbrbrrbgrb", 
    //    "ggrbgrbrrbrrbrbrbrgbgrgrrbbbbbbrbggrrggbbgbrrbbgggrrbggbbbrbrrbrgbrrbrggbbgbbgrgbgrggrgbbrbbggbbggggrrbgrgrgbrbbgrggrrbbbrgggrrrgbrgbbrbrrrrbbbggrbbbgrrgbbrrgbbrrggbbbrbrrgbrgbrrgbgrbrbrbgrrgrrbbrggrrrgbgggbbgrbbrgbrbrbgbgrgggrbrgggrbbrrbrggrrgggrbrggbgggbgggrrgbrrggbrbbgggrgrbrggggrrgggbbrbrbrbggbgrgrrggbgbgbrggrbrrrbbgrggrbggbgrbrrgrbrbbggbbgbrrgrgbrggbrgbggbbrbrrbrbrrggggrggggbbgbrggbgrbggggbbggrbbbrbrrbrbrggrbbrrrggbbgbbggbbggbbbgrrrgbbgbbrbbbbgbbbrbrrrrrgrrrgrgbbrbrggbbggrrrgrgrbbrgbgrbbrggrbrrbbrrbgrbbgbbrbgrrbrrbrggggrrrbbgbgbbbrgrbbbrbgggbrbrbrrgggbbgrbgbbrrgrggrbgbbgbrgrrrgrrrrbbgbgbrbbggrrrrrrrggbbggbgggbbrgrggrrbrrrbbbbbrrgbrrgrbggbbrbgbrgbggrbbgbrbrrrbgrbggrbgrrrgbgbrbbgrrbgbbrrbrgrrgbgggrbrbgbgrrrrbrbgggbbrggbrrgrrrbrrbrrbrbgbbrgrbggbgbggbgrgrgggrbbbbbgggggggrrggrgrrrbgggrbbgrbrgrbbgrgbgggrrrbrgrrrrrgrgggrbggrbbrgbbbrbrrbgrrbrbgrrgrggbbbrgggggrrbgbbgbgbbggrrrbgbrrbrbbgbgbrgbbggrbggbbgggbgbbbgbgrrgbgbgggbgbrbggggbggbbrbrgbgbgbrgbrrrggggggggggrrrgrbbrgbbbrgggbgrrgbggrbrgbgbr", 
    //    "bbrrbgbgbrbrbbbbrrgrbgbgbggbgbrgbgrrbgrbgbrgggrbgrbbbbggbrggbgggrbbrbgbrgbbggrgrrrbrgbrrggrgbbgbrgbbrggggrbgggbggrggrbrrrrrggrbggbgrrbgrbbbbgggbrgrbrrrbrgrrbrbgrrrbbrgrrgrbbggrgbrgrbgrrbgrrrgrggrbbggrbggbgbbrbbrrrrgrgrbrbbgbbbbrgbrggrbbbrgrrggbbbgbrbrrggrbbbrbrggbrgbggrrbggggrggbrbbrbrgrgggggrgbgrrbbggrgbbrrbbgbbggrbrgbgrrbbrrgbbrgrrrgbgbgrgbbgrbrbbbbbbrgbgrggrgbrggbgrrrrgbgbbgggbgbgrrbbbrrbbrbrgrgbrgbgggrbgbggrgrrgbgbbbgrgrrbrgbgrrrbbbgbgggrbggrggrbrgbgrrrbrgrgbbrrbgrbbbggrrbrbrbbrbrrgbgrrrgbbrrrbbbbgbrgbbgbbgrrgrgrbgrrgggbgbbrbggbbggrbgbggggbrbgbbgggrbggrbbggrbrrrgrbgbrgrrgbgrbgbbrbbbrbrrbbrbrbbgrrgrbbggrrbbggbgbgrggrgrrgbrgrrrrbgbbrgbggrgggbgrbrrbggrbgrrbrbbgggbbbbbrrbggbbrgrgrrgbrbgbrggrbbgrbbrgrgbgrbgrbrrgbrgrrggrrgbgbrbbggbgbrgrgrgbgbrrbbbrbgggbrrgggrbbrrbrbggbbbrgrbbbggbrbgbrgrgrgrrbgrbgrgrrgrgrbbbgbrbrrrbrrbrrgbrrbgbrrrbbrrgrggrrbgrrrbbgbgbrgbrbrrgggrgbrrrrgbrbrbggrgbggrrgrbrrggbgggbgbbrbggggbrgrrbrggggrrgrgbggbgbgbrbgbggbrrrrbggggggrrgbbbbbbrbrgbgrrggbbbbbgbgbgbbggbrbgbbbgbgrg", 
    //    "bggrbggrggrrrbbbgggrrrbgbbbbbbrbgrbrgrgbgrrbgrbbgggrgrgrgggrbggbbbbgbbbgrgbgbbgbgrgrbggggbgbgrgbbgbbbrggrbrbbbgbbrrbbrggbrggggggrbbrbbbgbrbgbgbrggrbrgrggbgbrbrgrrbbrrrbrrbbgbbrbrbbbgggbrbbgrbrbrbrbrrgbbrbgbrbbgrbggbrbbgrrrrggbgbrbbgbbrbgbrgrggrgbgbbrrgrgbggrgbrbbbgggbbrrgrbgbgbbggrbrrrrbbggbgggbbrbggbgrgbrgrgbgbbbrgrbbbgggbrbrbgrbrrrrrbrrggggbgbrbrrgbrrrgbggbbbbgbrbbrbgbrbrgbrbbbgbbbggrbrrrgrbbrbbbrbgrbgrgbbrbgrbgbbgbbbbbrgggrggggrbggbgrgggrgggggrbggrbggbbrrrbrrrrrrgbgbbrbbbrbgrgggrbbgrbrbbrrrrgrrgrggbrrrbrggrrgbrbgbrrbgbrgrggbrgbrgrgbbrgbgbggggrbrrrrrrgggrggrgbrbggrgggggggbrrgrbgrbrbbbrbggbbbrgrbrrbrgbbggbbggrbrgbbbrgbbbrrrgggbgrgrrrbbrrbbgbgrrbgbrrrggbrgbgbbbgrbgrgrrbgrgbrggbbrbbbrbbgbbbggbgbrgrrgrgggbrggrgrrbrbrrbggbgbggrgrbbrrgggbbrbrgrbbgrrgrgrrbrbrggbrgbggbgrggbrrrrrgbbbrrbggrbrbgrbgbgbrbbgggbggbrbrrbrbbrgrrrgrrbrbgbgrbrbrrbbgrrgrbgbgrbgggbrrgrgbrgbrggggbggggbrgbrgbggrbrrbbrbbgrbbbrbgbrgggrrgrggbrggggbbgggbgrgggbrgbgrrgrbbgrrgbbrggrrbrrbrggrbggrrgbbrrggbbbgbbbbgr" };
    //
    //auto normaliseStart = high_resolution_clock::now();
    //vector<string> A = normaliseLengthOfAllElements(B);
    //auto normaliseStop = high_resolution_clock::now();

    //cout << "Normalise time: " << duration_cast<milliseconds>(normaliseStop - normaliseStart).count() << endl;

    //cout << maxAreaOfTriangle(A);
    // mat

    // pascal triangle
    //for (const vector<int> &row : pascalTriangle(10))
    //{
    //    for (const int& num : row)
    //    {
    //        cout << num << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    // pt

    // set matrix zero
	//vector<vector<int>> A{
	//	{0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1 },
	//{0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0},
	//{0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1 },
	//{1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1 },
	//{0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1 },
	//{0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1 },
	//{1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1 },
	//{0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1 }
	//};
 //   
 //   setZeroes(A);

 //   for (const vector<int> &row : A)
 //   {
 //       for (const int& num : row)
 //       {
 //           cout << num << " ";
 //       }
 //       cout << endl;
 //   }
 //   cout << endl;
    // smz

    // repeate and missing number
    //vector<int> A{ 389, 299, 65, 518, 361, 103, 342, 406, 24, 79, 192, 181, 178, 205, 38, 298, 218, 143, 446, 324, 82, 41, 312, 166, 252, 59, 91, 6, 248, 395, 157, 332, 352, 57, 106, 246, 506, 261, 16, 470, 224, 228, 286, 121, 193, 241, 203, 36, 264, 234, 386, 471, 225, 466, 81, 58, 253, 468, 31, 197, 15, 282, 334, 171, 358, 209, 213, 158, 355, 243, 75, 411, 43, 485, 291, 270, 25, 100, 194, 476, 70, 402, 403, 109, 322, 421, 313, 239, 327, 238, 257, 433, 254, 328, 163, 436, 520, 437, 392, 199, 63, 482, 222, 500, 454, 84, 265, 508, 416, 141, 447, 258, 384, 138, 47, 156, 172, 319, 137, 62, 85, 154, 97, 18, 360, 244, 272, 93, 263, 262, 266, 290, 369, 357, 176, 317, 383, 333, 204, 56, 521, 502, 326, 353, 469, 455, 190, 393, 453, 314, 480, 189, 77, 129, 439, 139, 441, 443, 351, 528, 182, 101, 501, 425, 126, 231, 445, 155, 432, 418, 95, 375, 376, 60, 271, 74, 11, 419, 488, 486, 54, 460, 321, 341, 174, 408, 131, 115, 107, 134, 448, 532, 292, 289, 320, 14, 323, 61, 481, 371, 151, 385, 325, 472, 44, 335, 431, 187, 51, 88, 105, 145, 215, 122, 162, 458, 52, 496, 277, 362, 374, 26, 211, 452, 130, 346, 10, 315, 459, 92, 531, 467, 309, 34, 281, 478, 477, 136, 519, 196, 240, 12, 288, 302, 119, 356, 503, 527, 22, 27, 55, 343, 490, 127, 444, 308, 354, 278, 497, 191, 294, 117, 1, 396, 125, 148, 285, 509, 208, 382, 297, 405, 245, 5, 330, 311, 133, 274, 275, 118, 463, 504, 39, 99, 442, 337, 169, 140, 104, 373, 221, 499, 413, 124, 510, 159, 465, 80, 276, 83, 329, 524, 255, 387, 259, 397, 491, 517, 23, 4, 230, 48, 349, 412, 142, 114, 487, 381, 164, 35, 67, 498, 73, 440, 108, 226, 96, 132, 144, 207, 235, 33, 69, 128, 236, 364, 198, 475, 173, 493, 150, 90, 515, 111, 68, 232, 340, 112, 526, 492, 512, 495, 429, 146, 336, 17, 350, 251, 7, 184, 76, 380, 359, 293, 19, 49, 345, 227, 212, 430, 89, 474, 279, 201, 398, 347, 273, 37, 185, 177, 102, 304, 295, 422, 94, 426, 514, 116, 183, 180, 494, 42, 305, 152, 390, 30, 247, 451, 32, 388, 331, 78, 424, 368, 394, 188, 306, 449, 8, 214, 120, 179, 280, 511, 409, 338, 153, 507, 370, 461, 217, 161, 483, 147, 242, 86, 417, 268, 71, 462, 420, 167, 513, 379, 307, 522, 435, 113, 296, 457, 525, 45, 529, 423, 427, 2, 438, 64, 316, 46, 40, 13, 516, 367, 233, 110, 318, 250, 283, 216, 186, 310, 237, 377, 365, 175, 479, 378, 66, 414, 473, 165, 210, 50, 348, 372, 363, 339, 20, 168, 284, 415, 505, 206, 53, 223, 434, 202, 123, 399, 400, 135, 269, 428, 219, 456, 28, 464, 267, 489, 98, 391, 195, 366, 300, 484, 533, 229, 213, 149, 160, 256, 303, 530, 301, 29, 404, 344, 401, 220, 287, 9, 407, 170, 450, 523, 249, 72, 410, 3, 21, 200, 260 };
    //vector<int> B = repeatedNumber(A);
    //for (int& i : B)
    //{
    //    cout << i << " ";
    //}
    //cout << endl;
    // ramn

    // 

    // cal time of execution
    auto stop = high_resolution_clock::now();
    cout << endl << "Execution Time: " << duration_cast<milliseconds>(stop - start).count();
}


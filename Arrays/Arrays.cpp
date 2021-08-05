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
    vector<string> B{ "rrbrbbgrrrbbrggrbrrbbgbggrgbrbbrrbggbggrbbbrrgbbrbrrbrbbgrbbrrbgrbrgrrgrgrrrrrrrrbrrggrbrbbgrgrbgrrgbbggbbgggbggbrrbggrrgrrgbrbggrbgbrgggggbrbbrrgrbggbbbbgbrggggggbrggbbbbrrggbggrgrbrggrbrrgbbbgbrgrbrbgbrbgbrrgbbrggrrgbgbbbrgrbrbrbgrgrgggbrbgbrbrgbgggrgbgbgrrbgbbgrgbrgrrbrbbgrgbgbrrbrbbggrbbgrbbgrggrbrrgrgrbrgrrrgrrgrbgbbgrbbgrrrggbbrrrbggggrrbgbbgbrbggrbrrrgbgggbgrrrbrbrrrbrbbgbgbbbbrrrgbrbgbbbgrbggrgrbgbbbggrgbrgbbrbbrbrgrbggrgggrgbgrrbrrbgbbrgrbgrbrggbrrrrggbrbbbgbggbgrrgbgrgggrgbrrggggrgbbbgggbgrrbrgbbgbbggggrrrrbbrggrbrgggbgrggrbgbrrgbbgrgrgggggrrrgbbrrgbgrrgggbgbbbgbrgbbbrrrgrggbgrrrrrbggbgrbbrrrbrrrbgrrbbbrbgbbrgrbgrbggbrgrrgrbbrgggrgrbbbgggbgrbbbbgrrrbrggrbrbbrbrgrgbgbbrrgbgrrrrrrrrbbbbrgrgbrbrbbbbbrrrgrbbrrbbrgrrbrbrrggrrggbbgrgggggrbgbrrbrgbrggbgbrggrbggrgrgrrgbgbbbbgrbgbbgrbgbbgrgrgbrbbgrrbggbbbbrbgbbgrbgbgrrrgggrbbbgbgrgbbrbrgbrbrrbgbgbbgbgrbrgbgbgbrrbbgbgbrbggrbrbgbbbbrrbrgrbgggbgggggggbgbgbrgbrbgrbggbrggrgrbgrgrbggrgrbgrrbgbgbgbbgrbgbgbbrbbrgrgrrbgbbbbbggbgrrgbgrrrbrbbbrg",
        "rrggrgbgbbgrbbbbbgggbrrggggggbgbgggrbbgbbrgrbrbbbrbbrbbbrrrggggrgrrrrbrrgbbrrrbbbggbbrrrbbrggbrgbrgbbrggrggbbrgbrbgrrggrbggrgrrrgbbrrgbrrgbgbbbgrggrrgrrgrgrgrbgrbgbbggggbggbrbbbbggbbrrrrrrrbbggrgrgbrbbrrbrbbrrgbrrbrgrrggggrggggggrrrggrbrbgbggrgggggbgbbggrbgbggrggggrrgrrgbbgbbbrrggrggrbbgbgbbbgrrbrrbbggbrrrbgggrrgrrrgrrrbbgbrrbbbrrbgbrggbbggbbrgbbbbrgrgrggrgbgbbrbrbgbggrrrbgggggbbbrbrbrggbbbrbbgrbbrbrrgrrgrrgrggbrggrbgbrbgggggrgggrbgbrbbgrbgbgrbbbbrrgbbbbrgrgbbgbbggrrbgrrrbbggbgggggggbrgbgrbgrrgbbbgrbrrrrgrrgggrrrggbrbrbrbrggbrgbbgbbgrgrrbggrrggbgbrbrbrrbrbbbgggbbgrrbrbrrrbrbgbggggbbbgrbrbgrgbbbrbbbrgbgbgbgrbgrgrbrbgrgrrgbgrggrbgrgbgrrgrbbgrrrgbrbbbgbgbgbgrgrggrbrrrrbrgbrggbrrgggbrrrbrrbbgrggrrgbbbrrggrrbrbrbbrgbbgrgrrgbgbbggbbgrrgbrrrbrgrrbgrbgrrrbbgrgrbbbrrbgggggrrrgbgbgbbrbrrgbgbrbbrgrbgbbgggrgbgbrggrggrgrggrgrrrrbbrgrrggrrbgrgrbbbbbbbggggbgbbggrbrrgrgrgggbbrbrgbgrbbrbbrbgggbbgbrrgrgrgbbbggbgbrrrgrggbbbrrbgrgrrbbgrgbggrbbbgbrrggrrggbgrbrrgrgbgbgrbrbrgbrggggrbrbgrgbgrrbgbrrbgbrrgrbbrg",
        "grrrgrbbbrrrrbggbgbbggbrrrbgbbrbgrrgbbbbgrbgrgbbgbgrgrbgrgrgggrbbbbgrrbrbggrrrgrggrrbgrbrgbbrbbggggrrbrgrbbgrrgrgbrrgbbgggbgbgbrbgbbbggrgrgggbgbbbgggbrgrgbgbgrgbgbgrbbbrggrgbbbrgrgrbbrbrgbgbgbgbrbrbbggggrbgrrrbggrrrrggrrgbbrrbrggggbrgbbbgggbrgbbrgbrbrgrrgbgrrrrrrrrgrbrbggbbbrgbgbrgrbrbrrrgrrrrbrbbgggbggrbbbrggbgggrggbbgrggbrggrggbbgrrgbgrrrrrrrbggrggbggggggrrgbgbggbrbgbgbbgbgbrgbrrrrbbbrrgggrbrrggbbbbrbrgbrggrrgbgbgbbbbbgbrgbbgbrbbggrgbbgrbgrbgrbgrbgrgbrrgrgbrrggrgrbgrgrbgrgbbbrrggrgrbrbgrbrbgrgrrgbrgggggrgbggbrggbbgbgrgbgbbbrrbgbggbrrrbgbgrbrbgrggrggrbgbbbrggbbbrrgbgbrbbrgbgrgrgbbrrbrgrbrrbbrgggbrrrrbrbrrrgrbgbrgrbbrgbbgrgggbrrgrgbgrrgggrbbrrrbbbbbbgbggbbgrrbgbggrbgrgbrgggbgrrggrgbgrbbgggrbggrgrgrrrggbbrbbrbrbrbbgrrrrrrrgggbgrrgbgbbgggbrbbbrggrbgbbbggbbbgrrbrgbgbgrrrbbgrgrbrrgbbbggrgrrrrbbbrgbbrgggbrbgggbrrbrrbbbbgrbbbbgrrbbrrbgrggbgrbgbggggbgbgbbgrbrbgbgbbbrrrrbbbggrrrrbbggbbrrbgbrgbrbbrgbggbrbrrrbgrggrrbrbrggbbbgrgbrbbbrbbrrbgrrrrgbbbrrbbbgrbrrgrbrrbrgbgrgggrggrgbrbbrbgggbbrrggrgrgr",
        "grbrgbrrrgrgbrrbrgbgggrbgbrgrrrggggrgggggbrbrgrgbbgrgggbrbbbgbrgggrrbgrrrbgbbgggrrrbrgbgbbrrrbrbgbgrrbrbrggrrbbbbgrgbgbbrrrgrrbggbgrbrrgggrbgggrgrggrrbrbrrbrgrbbbgrrrgrbbbgrbggbbbbrrbrggrbgggrgrggbgrrrbrgrrggbbbbbggbbbbbrbrbbrbggbgrbgbbbrbrrbrbggbrrgrbbrggrrgrggrggbgbrbbrbrgrggggbrggbggrbbbbbgrgbbggbgrrggbbrgrrgbrbgrbrrgbgrgrrgbgggrrrgrbbbggbrbgggbggrrbbbrrbrbgbbrgbbrrgrbgggggrggrgrrrgrrbrrbbgbbgggrbggrgbrbggrbgbrrrbbrbbrbbbbggggrrrgrrbbgggbbgrrgrgrrrrbrbggrrrgrgrrbgbbbbbbbbbrrrgbrrrrbrrrbrrggrbbbrrgbrrrgrgrgbbrrbgrgrrrggrrbbbrgrgrbbbbgbrgbgbrgggbgrbbbrgrbbrrrgrgggggrbrggrbrgbrrgrbggbrbgrbgbbgbbbbgrggggrbrbbggbbbrbgrrrrgrrgrrgbgbgbrrgrgrrbrbrbbrbbrgrgbrgbrggbgbbbgrgggbbggbrrbbbbggrrrgrggrgbgbggggrggbgrbbbgrbbrgbgbgrbbbbbrgbrgbrrrbrgbrrrgbbrrgbggbrgrgrbbbrrrbgggrrgrrgbrbgrrbbbbbbgbggbgbggrbbgrgrrbgrbbrbbbgbbbrggrgbrbbbrrbbgbrgrrbbbrbbrrgggrbbgbbrrrbgrbrrrrrrrggrgrbrrgrrgrbrrbbbbrggbggbgbbrrrbggggrgrrbrrrbggggrgbbrrgbbgrrggrrgrrgbrgbgbbbrrrbrgbbrgrrgggbbggrbbrgggbggbgbrgbrrbrgbggbggggbgb",
        "gbrgrgrrgrgbbrgbgbrrrbgrgggrbrgrbrbbrgrgrgbrrgrgrgbbgrgrrrggbbrgbrgbrggrbbgbbrrrrbgbgrbgrgbgrrbgrgrrbrrrgrggbbrrbbggbrrgbrbrrgrrggrbgbbrggbbbrbrbrggrgrggggrrgbrggrbrggbbrrbgbrbgrrrgrgrbgbrbgbgbrbgbbgrgrgbgbgbbbbrbggrbggbbgrrrrbgbggbrrbrrbrgbbgrrrbgbgbrbbbrbrgbggrrrrgbbrggrggrgrbrbgbrbrrggrbgrbggbbbggrbrbbgrbbrrggbrrgbbbrrrbrgggbbgrgrrbgrrrbrgbrbbrrgbgrbrgrbrbggbgbbrrrbrbggbggrgrggrrgbbggrrbbbrrrrgbgrrbbgbrggbbggrrrrrgrgrbbrgrrgbbbbrbrrgrrbbbrrrrrbbbbbrgbrrrgbgrrbbgbbrrrgbbrbrrrrrbrrbbrrggbbggbbbrrbgbbrbgggrbrrggrbrbbbgbbrrbggrgrgrbbggbbrgbrrrbrbgbbbrrgbrbrgrgbgbbgrbbbgbggggrbgggrgbbbggrgrgrbrgrbrrggggrgrrrrgrrgggbbbbbbrgrgrgggbrggbrgrrgrgrggrgbgbggbbbgbbgrrrbggrrrgbrgggbbrgggrrgrgrgbbggggrbrgbbbgggrrrrrrgggbggrrrrbbbbbrrrgbgrgrrrggrrgbrbrgggbggrbrgrbgrbbbbbgbbggrgrbggbbrgrbbgrrgbbbrbrggrgrrrbrgbgggggggbrbbbbbgrgrgrgrgrbrgbgbrrrrbrbrbrrrrrgbbbggrrrbrrrgggbggbgbrgrbbrgbbrggbbggbgbrgggbgbbgrrbrrrgggrrrbggbgrrgbggbbrgbrgbrrgrrrbggbrgrbrbbbbgbbrrgbrggrrrbgbbbbgbrgrrrgbrrgggbrbbrggbgbgbgggrr",
        "bbbgggbrggrrrrrbgbrrggbrgbgbbrbbrgrbggggrbbggbbgbgbrrrgggbggrrbrrbbbggrbrrbggbbgrrbggrbbrbbbbrgggggbbgrggbbbgbbbrgrggrrrrgrgrbrgrrgbbggrbgbrrbgbbbgrrbgrbrrgrrgggrbgrggbrrgggggggbrrrrgggggrgbbrgrbrbbrrgbbrggbrgbrgbrrrbrggbgbggbrbbbrgrgggbbggbgrgrrgrbbrggbrgbrbgggbgrgrrbbbgggbggggrbgbrbbbrrrgrggbbgggbbrgbgrrggggrrrrbbbrgrrggrrbrrrbbbrgbbrgrbgrbgbgrgbrgbrrbggrbbgbgbbrgrrrgbrrrrgbrrgbggrbbgrrgbrbrgggrbrrgggrbggggbggbbrbggbggrrgrrrbrbbbggrrrrgbgbbgbrrrbgbbgrbgrbbgbgrgrgrrgrggrbbrbggrgbrgrbgrrgbgbgrrrbrbrrbrrrgrgbrbbbgrrrbbgrrggrgrbgbrbgrbggrgrrgrbrrggrbbggrbbbbrggrrgbggrrbrgbrgbrbbgrgbrggbgrbrrggrggbbbbgbrbbrrggrgbgrrbgggrrrrgbgbbbggrgrgbbgrbbrrbggrbrbbrgbgggrrrgrgbgbrrbgrrbbrggrbbbgrrrrgbbbbrbbbbgbrbrggrrgrggbrgrgggggggrrrgggrrrgrgrggrgbgbgrrgrgrrrrbrrbbbbggrbgbbrbrrbrbrrrbgbggrbgbrrrbbrrgbrbbgrbbbrbgrbrbbggbrrgbgbbbgbggbbbrgbbbbrgrgrgrbbrbggbrgbbrbgbrrbrrrgrbbrgggrbbbgrbgbggrgbbbgrbgrrgrrbbgbrbggbgrrbrbgrbgrrrrbgrrbgrbgrbbbgbgrrgrrrgbrgrbbgrrbgbrgrbgrbbrbbbbbrbggrrbrbggbrbrbrbggrrggrrrrbr", 
        "rbbbgrgrrbrbgrbrbggggrbgbrrrrgrgbrbggrgrrbrgbrbgbbgbgrbgbgrbrrgbrgrrrrgbbrgbgbbggbrbbbgbbrgbgrbgggggggbgrbrgbrbbrbrggbgbbrgrbrrrbrrgbgbrrbrgrbbggrbgbbgbrrgrrgggbgrbrbgrbrgrrrbgbbbbrbbrrbrgbgbgrbgrrgrggbrrgbbrbbrggrrggrbrgggbrbbggrgrgrrggrrggrbrgbbrgbggbgrrggrgggrgbrrggrbbbggrrbggbgrbbrggrggbgrgbbgrrbggbgggbgbrrrrggggbgbrgrggbggrbrrgbrgrgbbbrbbbbrrrbgrbbgggbgrrbggggbrbbbrrgrbggbrrgrbbrggbgbbgrrggggrbrgrgrgrbrbbrrbgrbbgbrbgggrbgbbrrbgbbggrggrbbgbgbrrrbbggggbbbbrgggrgrrrbbbbggrbbbgbrggbbggbggrgrgbbrbbbrggrrrbrbbbgggggbgbgrrbrbbgbbbggbgrggrggrbrrrgbbgrgbrrgbbrbgbrggbgrrgrbrrbbbrbrrrbrbgrgggrbgrbggrgrrgbrrrbggbgbbggrbrbbgbgbbgrbbgrrgrggbrrrggbgbbbbrbrbbrggbbrrrgbgrbgrgbgbbrbbrgrrggbbbgggbbbgbbrrgrgrgbrggrbrrrbbbrbrbbgrrgrrrbgbrgrbrbggggbgrrrrrbbrrrbgrrrbgrggbrbgrgbgrrrgbbbggbbbrgbrgrrgbrbgrbgbrbbrgrbrrggbbrgbrrrbgbrbrrbggrrrbrbrgggbrgbrbbggggggrbbrrbgrbrggrgrgrbbgbgbbbbbggbrrbbrgrrgrbbrbbrgbgrbbrgbrggbbrbgrbgbbgrrgbgbbbggbgrggrbbbgbgrgbrrrbbgrrbgrgrrbbgbggbbrrbggggggbrrgbgbbgbrggrbbrbrrbgrb", 
        "ggrbgrbrrbrrbrbrbrgbgrgrrbbbbbbrbggrrggbbgbrrbbgggrrbggbbbrbrrbrgbrrbrggbbgbbgrgbgrggrgbbrbbggbbggggrrbgrgrgbrbbgrggrrbbbrgggrrrgbrgbbrbrrrrbbbggrbbbgrrgbbrrgbbrrggbbbrbrrgbrgbrrgbgrbrbrbgrrgrrbbrggrrrgbgggbbgrbbrgbrbrbgbgrgggrbrgggrbbrrbrggrrgggrbrggbgggbgggrrgbrrggbrbbgggrgrbrggggrrgggbbrbrbrbggbgrgrrggbgbgbrggrbrrrbbgrggrbggbgrbrrgrbrbbggbbgbrrgrgbrggbrgbggbbrbrrbrbrrggggrggggbbgbrggbgrbggggbbggrbbbrbrrbrbrggrbbrrrggbbgbbggbbggbbbgrrrgbbgbbrbbbbgbbbrbrrrrrgrrrgrgbbrbrggbbggrrrgrgrbbrgbgrbbrggrbrrbbrrbgrbbgbbrbgrrbrrbrggggrrrbbgbgbbbrgrbbbrbgggbrbrbrrgggbbgrbgbbrrgrggrbgbbgbrgrrrgrrrrbbgbgbrbbggrrrrrrrggbbggbgggbbrgrggrrbrrrbbbbbrrgbrrgrbggbbrbgbrgbggrbbgbrbrrrbgrbggrbgrrrgbgbrbbgrrbgbbrrbrgrrgbgggrbrbgbgrrrrbrbgggbbrggbrrgrrrbrrbrrbrbgbbrgrbggbgbggbgrgrgggrbbbbbgggggggrrggrgrrrbgggrbbgrbrgrbbgrgbgggrrrbrgrrrrrgrgggrbggrbbrgbbbrbrrbgrrbrbgrrgrggbbbrgggggrrbgbbgbgbbggrrrbgbrrbrbbgbgbrgbbggrbggbbgggbgbbbgbgrrgbgbgggbgbrbggggbggbbrbrgbgbgbrgbrrrggggggggggrrrgrbbrgbbbrgggbgrrgbggrbrgbgbr", 
        "bbrrbgbgbrbrbbbbrrgrbgbgbggbgbrgbgrrbgrbgbrgggrbgrbbbbggbrggbgggrbbrbgbrgbbggrgrrrbrgbrrggrgbbgbrgbbrggggrbgggbggrggrbrrrrrggrbggbgrrbgrbbbbgggbrgrbrrrbrgrrbrbgrrrbbrgrrgrbbggrgbrgrbgrrbgrrrgrggrbbggrbggbgbbrbbrrrrgrgrbrbbgbbbbrgbrggrbbbrgrrggbbbgbrbrrggrbbbrbrggbrgbggrrbggggrggbrbbrbrgrgggggrgbgrrbbggrgbbrrbbgbbggrbrgbgrrbbrrgbbrgrrrgbgbgrgbbgrbrbbbbbbrgbgrggrgbrggbgrrrrgbgbbgggbgbgrrbbbrrbbrbrgrgbrgbgggrbgbggrgrrgbgbbbgrgrrbrgbgrrrbbbgbgggrbggrggrbrgbgrrrbrgrgbbrrbgrbbbggrrbrbrbbrbrrgbgrrrgbbrrrbbbbgbrgbbgbbgrrgrgrbgrrgggbgbbrbggbbggrbgbggggbrbgbbgggrbggrbbggrbrrrgrbgbrgrrgbgrbgbbrbbbrbrrbbrbrbbgrrgrbbggrrbbggbgbgrggrgrrgbrgrrrrbgbbrgbggrgggbgrbrrbggrbgrrbrbbgggbbbbbrrbggbbrgrgrrgbrbgbrggrbbgrbbrgrgbgrbgrbrrgbrgrrggrrgbgbrbbggbgbrgrgrgbgbrrbbbrbgggbrrgggrbbrrbrbggbbbrgrbbbggbrbgbrgrgrgrrbgrbgrgrrgrgrbbbgbrbrrrbrrbrrgbrrbgbrrrbbrrgrggrrbgrrrbbgbgbrgbrbrrgggrgbrrrrgbrbrbggrgbggrrgrbrrggbgggbgbbrbggggbrgrrbrggggrrgrgbggbgbgbrbgbggbrrrrbggggggrrgbbbbbbrbrgbgrrggbbbbbgbgbgbbggbrbgbbbgbgrg", 
        "bggrbggrggrrrbbbgggrrrbgbbbbbbrbgrbrgrgbgrrbgrbbgggrgrgrgggrbggbbbbgbbbgrgbgbbgbgrgrbggggbgbgrgbbgbbbrggrbrbbbgbbrrbbrggbrggggggrbbrbbbgbrbgbgbrggrbrgrggbgbrbrgrrbbrrrbrrbbgbbrbrbbbgggbrbbgrbrbrbrbrrgbbrbgbrbbgrbggbrbbgrrrrggbgbrbbgbbrbgbrgrggrgbgbbrrgrgbggrgbrbbbgggbbrrgrbgbgbbggrbrrrrbbggbgggbbrbggbgrgbrgrgbgbbbrgrbbbgggbrbrbgrbrrrrrbrrggggbgbrbrrgbrrrgbggbbbbgbrbbrbgbrbrgbrbbbgbbbggrbrrrgrbbrbbbrbgrbgrgbbrbgrbgbbgbbbbbrgggrggggrbggbgrgggrgggggrbggrbggbbrrrbrrrrrrgbgbbrbbbrbgrgggrbbgrbrbbrrrrgrrgrggbrrrbrggrrgbrbgbrrbgbrgrggbrgbrgrgbbrgbgbggggrbrrrrrrgggrggrgbrbggrgggggggbrrgrbgrbrbbbrbggbbbrgrbrrbrgbbggbbggrbrgbbbrgbbbrrrgggbgrgrrrbbrrbbgbgrrbgbrrrggbrgbgbbbgrbgrgrrbgrgbrggbbrbbbrbbgbbbggbgbrgrrgrgggbrggrgrrbrbrrbggbgbggrgrbbrrgggbbrbrgrbbgrrgrgrrbrbrggbrgbggbgrggbrrrrrgbbbrrbggrbrbgrbgbgbrbbgggbggbrbrrbrbbrgrrrgrrbrbgbgrbrbrrbbgrrgrbgbgrbgggbrrgrgbrgbrggggbggggbrgbrgbggrbrrbbrbbgrbbbrbgbrgggrrgrggbrggggbbgggbgrgggbrgbgrrgrbbgrrgbbrggrrbrrbrggrbggrrgbbrrggbbbgbbbbgr" };
    
    auto normaliseStart = high_resolution_clock::now();
    vector<string> A = normaliseLengthOfAllElements(B);
    auto normaliseStop = high_resolution_clock::now();

    cout << "Normalise time: " << duration_cast<milliseconds>(normaliseStop - normaliseStart).count() << endl;

    cout << maxAreaOfTriangle(A);
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

    // cal time of execution
    auto stop = high_resolution_clock::now();
    cout << endl << "Execution Time: " << duration_cast<milliseconds>(stop - start).count();
}


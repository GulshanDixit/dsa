#include "HotelBooking.h"
#include <map>

// https://www.interviewbit.com/problems/hotel-bookings-possible/

// Swapping two values.
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Partitioning the array on the basis of values at high as pivot value.
int Partition(vector<int>& a, vector<int>& b, int low, int high)
{
    int pivot, index, i;
    index = low;
    pivot = high;

    // Getting index of the pivot.
    for (i = low; i < high; i++)
    {
        if (a[i] < a[pivot])
        {
            swap(&a[i], &a[index]);
            swap(&b[i], &b[index]);
            index++;
        }
    }
    // Swapping value at high and at the index obtained.
    swap(&a[pivot], &a[index]);
    swap(&b[pivot], &b[index]);

    return index;
}

// Random selection of pivot.
int RandomPivotPartition(vector<int>& a, vector<int>& b, int low, int high)
{
    int pvt, n, temp;
    n = rand();
    // Randomizing the pivot value in the given subpart of array.
    pvt = low + n % (high - low + 1);

    // Swapping pivot value from high, so pivot value will be taken as a pivot while partitioning.
    swap(&a[high], &a[pvt]);
    swap(&b[high], &b[pvt]);

    return Partition(a, b, low, high);
}

// sorting order defined by first array 
int QuickSortPair(vector<int>& a, vector<int>& b, int low, int high)
{
    int pindex;
    if (low < high)
    {
        // Partitioning array using randomized pivot.
        pindex = RandomPivotPartition(a, b, low, high);
        // Recursively implementing QuickSort.
        QuickSortPair(a, b, low, pindex - 1);
        QuickSortPair(a, b, pindex + 1, high);
    }
    return 0;
}

void normalizeIndex(int& index, const int max)
{
    if (index >= max)
    {
        index = 0;// assumining min to be 0
    }
}

// working solution
// with cyclic array used inside for reducing the time taken to traverse
bool hotel(vector<int>& arrive, vector<int>& depart, int K) {

    int occ = 0;

    QuickSortPair(arrive, depart, 0, arrive.size() - 1);

    vector<int> rooms(K, 0);
    int rs = 0; // rooms array start index
    int iterations = K;
    for (int i = 0; i < arrive.size(); ++i)
    {
        bool available = false;
        int j = rs;
        iterations = 0;
        while (iterations < K)
        {
            if (arrive[i] == depart[i])
            {
                available = true;
                break;
            }

            if (arrive[i] >= rooms[j])
            {
                rs = j + 1;
                normalizeIndex(rs, rooms.size());
                if (rooms[j] == 0)
                {
                    ++occ;
                }

                rooms[j] = depart[i];
                available = true;
                break;
            }

            ++j;
            normalizeIndex(j, rooms.size());
            ++iterations;
        }

        if (!available && occ >= K)
        {
            return false;
        }
    }

    return true;
}

// using mutimap runtime exceeds
bool hotelMultiMap(vector<int>& arrive, vector<int>& depart, int K) {

    int occ = 0;

    multimap<int, int> log;

    for (int i = 0; i < arrive.size(); ++i)
    {
        if (arrive[i] != depart[i])
        {
            log.insert(make_pair(arrive[i], depart[i]));
        }
    }

    vector<int> rooms(K, 0);
    for (multimap<int, int>::iterator bItr = log.begin(); bItr != log.end(); ++bItr)
    {
        bool available = false;
        for (int j = 0; j < rooms.size(); ++j)
        {
            if (bItr->first >= rooms[j])
            {
                if (rooms[j] == 0)
                {
                    ++occ;
                }

                rooms[j] = bItr->second;
                available = true;
                break;
            }
        }

        if (!available && occ >= K)
        {
            return false;
        }
    }

    return true;
}

// initial attempt
bool hotelFirstTry(vector<int>& arrive, vector<int>& depart, int K) {

    int occ = 0;
    vector<int> rooms(K, 0);
    for (int i = 0; i < arrive.size(); ++i)
    {
        bool available = false;
        for (int j = 0; j < rooms.size(); ++j)
        {
            if (arrive[i] >= rooms[j])
            {
                if (rooms[j] == 0)
                {
                    ++occ;
                }

                rooms[j] = depart[i];
                available = true;
                break;
            }
        }

        if (!available && occ >= K)
        {
            return false;
        }
    }

    return true;

}


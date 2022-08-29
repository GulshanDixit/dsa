#include "IntersectionOfArrays.h"
#include <map>


void populateMap(const vector<int>& nums, map<int, int>& counter)
{
	for (auto itr = nums.cbegin(); itr != nums.cend(); ++itr)
	{
		if (counter.find(*itr) != counter.end())
		{
			counter[*itr]++;
		}
		else
		{
			counter[*itr] = 1;
		}
	}
}

// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/
vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
	map<int, int> nums1Counter;
	map<int, int> nums2Counter;

	populateMap(nums1, nums1Counter);
	populateMap(nums2, nums2Counter);

	vector<int> commonElements;

	for (auto itr = nums1Counter.cbegin(); itr != nums1Counter.cend(); ++itr)
	{
		int key = (*itr).first;
		// check if both counter have same key
		if (nums2Counter.find(key) != nums2Counter.end())
		{
			int min = nums1Counter[key] < nums2Counter[key] ? nums1Counter[key] : nums2Counter[key];

			commonElements.insert(commonElements.end(), min, key);
		}
	}

	return commonElements;
}
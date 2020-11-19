#include "func.h"

#include <string>

vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> ret;
	for (int i = 0; i < nums.size(); i++)
	{
		int antohther = target - nums[i];
		auto it = find(nums.begin(), nums.end(), antohther);
		if (it != nums.end() && it - nums.begin() != i)
		{
			ret.push_back(i);
			ret.push_back(it - nums.begin());
			return ret;
		}
	}
	return ret;
}
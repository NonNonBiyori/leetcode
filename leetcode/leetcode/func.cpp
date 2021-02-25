#include "func.h"

#include <string>
#include <map>
#include <vector>
#include <set>
#include <stack>
#include <algorithm>

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

ListNode* insertionSortList(ListNode* head)
{
	if (head == nullptr || head->next == nullptr)
	{
		return head;
	}

	ListNode* nextList = head->next;
	head->next = nullptr;
	while (nextList != nullptr)
	{
		if (nextList->val < head->val)
		{
			ListNode* tmpList = nextList->next;
			nextList->next = head;
			head = nextList;
			nextList = tmpList;
		}
		else
		{
			ListNode* saveNext = nextList->next;
			ListNode* tmpList = head->next;
			ListNode* lastList = head;
			bool isEnd = true;
			while (tmpList != nullptr)
			{
				if (nextList->val < tmpList->val)
				{
					lastList->next = nextList;
					nextList->next = tmpList;
					nextList = saveNext;
					isEnd = false;
					break;
				}
				lastList = tmpList;
				tmpList = tmpList->next;
			}
			if (isEnd)
			{
				lastList->next = nextList;
				nextList->next = nullptr;
				nextList = saveNext;
			}

		}
	}
	return head;
}

ListNode* mergeList(ListNode* pre, ListNode* post)
{
	if (pre == nullptr)
	{
		return post;
	}
	if (post == nullptr)
	{
		return pre;
	}
	ListNode* ret = new ListNode(0);
	ListNode* last = new ListNode(0);
	last = ret;
	while (pre != nullptr && post != nullptr)
	{
		if (pre->val < post->val)
		{
			last->next = pre;
			last = last->next;
			pre = pre->next;
		}
		else
		{
			last->next = post;
			last = last->next;
			post = post->next;
		}
	}

	if (pre != nullptr)
	{
		last->next = pre;
	}

	if (post != nullptr)
	{
		last->next = post;
	}

	return ret->next;
}

ListNode* middleNode(ListNode* head)
{
	if (head == nullptr)
	{
		return head;
	}
	ListNode* slow = head;
	ListNode* fast = head;

	while (fast->next != nullptr)
	{
		fast = fast->next;
		if (fast->next == nullptr)
		{
			return slow->next;
		}
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}

ListNode* sortList(ListNode* head, ListNode* tail) {
	if (head == nullptr) {
		return head;
	}
	if (head->next == tail) {
		head->next = nullptr;
		return head;
	}
	ListNode* slow = head, *fast = head;
	while (fast != tail) {
		slow = slow->next;
		fast = fast->next;
		if (fast != tail) {
			fast = fast->next;
		}
	}
	ListNode* mid = slow;
	return mergeList(sortList(head, mid), sortList(mid, tail));
}

ListNode* sortList(ListNode* head)
{
	return sortList(head, nullptr);
}

bool isAnagram(string s, string t)
{
	if (s == t)
	{
		return true;
	}
	if (s.length() != t.length())
	{
		return false;
	}
	std::map<char, int> sMap;
	std::map<char, int> tMap;
	for (int i = 0; i < s.length(); i++)
	{
		std::map<char, int>::iterator it;
		it = sMap.find(s[i]);
		if (it == sMap.end())
		{
			sMap.insert(make_pair(s[i], 1));
		}
		else
		{
			it->second++;
		}

		it = tMap.find(t[i]);
		if (it == tMap.end())
		{
			tMap.insert(make_pair(t[i], 1));
		}
		else
		{
			it->second++;
		}
	}

	if (sMap.size() != tMap.size())
	{
		return false;
	}
	auto itS = sMap.begin();
	auto itT = tMap.begin();
	for (; itS != sMap.end(); itS++, itT++)
	{
		if (itS->first != itT->first ||
			itS->second != itT->second)
		{
			return false;
		}
	}

	return true;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	nums1.insert(nums1.end(), nums2.begin(), nums2.end());
	sort(nums1.begin(), nums1.end());
	if (nums1.size() == 0)
	{
		return 0;
	}
	if (nums1.size() == 1)
	{
		return nums1[0];
	}

	if (nums1.size() % 2 == 1)
	{
		return (double)nums1[nums1.size() / 2];
	}
	else
	{
		return (double)(nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2;
	}
}

string sortString(string s)
{
	if (s.length() <= 0)
		return s;
	string ret = "";
	int nCount = 0;
	while (s.length() > 0)
	{
		set<char> tmpSet;
		tmpSet.clear();
		for (auto it = s.begin(); it != s.end(); it++)
		{
			if (tmpSet.find(*it) == tmpSet.end())
			{
				tmpSet.insert(*it);
				s.erase(it);
				//it--;
			}
		}
		if (nCount % 2 == 0)
		{
			for (auto it = tmpSet.begin(); it != tmpSet.end(); it++)
			{
				ret += *it;
			}
		}
		else
		{
			stack<char> chSta;
			for (auto it = tmpSet.begin(); it != tmpSet.end(); it++)
			{
				chSta.push(*it);
			}
			while (!chSta.empty())
			{
				ret += chSta.top();
				chSta.pop();
			}
		}
		nCount++;
	}
	
	return ret;
}

string convert(string s, int numRows)
{
	if (s.length() <= 1)
	{
		return s;
	}

	int numCol = s.length() / (2 * numRows - 2) + (s.length() % (2 * numRows - 2) - numRows > 0 ?
		s.length() % (2 * numRows - 2) - numRows : 0);
	char **arrCh = new char *[numRows];
	for (int i = 0; i < numRows; i++)
	{
		arrCh[i] = new char[numCol];
	}
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < numRows; j++)
		{
			
		}
	}
} 
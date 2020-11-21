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

ListNode* sortList(ListNode* head)
{
	return nullptr;
}
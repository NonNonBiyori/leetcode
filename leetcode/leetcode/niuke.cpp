#include "niuke.h"

namespace niuke
{
	string bigNumberAdd(string s, string t)
	{
		stack<int> ret;
		int min = (s.length() > t.length() ? t.length() : s.length());
		int cal = 0;
		for (int i = 0; i < min; i++)
		{
			int addValue = s[s.length() - i - 1] - '0' + t[t.length() - i - 1] - '0' + cal;
			if (addValue >= 10)
			{
				cal = addValue / 10;
				ret.push(addValue % 10);
			}
			else
			{
				cal = 0;
				ret.push(addValue);
			}
		}

		if (s.length() > t.length())
		{
			for (int i = 0; i < s.length() - min; i++)
			{
				int addValue = s[s.length() - (min + i) - 1] - '0' + cal;
				if (addValue >= 10)
				{
					cal = addValue / 10;
					ret.push(addValue % 10);
				}
				else
				{
					cal = 0;
					ret.push(addValue);
				}
			}
		}
		else
		{
			for (int i = 0; i < t.length() - min; i++)
			{
				int addValue = t[t.length() - (min + i) - 1] - '0' + cal;
				if (addValue >= 10)
				{
					cal = addValue / 10;
					ret.push(addValue % 10);
				}
				else
				{
					cal = 0;
					ret.push(addValue);
				}
			}
		}
		if (cal != 0)
		{
			ret.push(cal);
		}
		string retStr;
		while (!ret.empty())
		{
			retStr += to_string(ret.top());
			ret.pop();
		}
		return retStr;
	}

	ListNode* ReverseList(ListNode* pHead)
	{
		if (!pHead)
		{
			return pHead;
		}
		ListNode* ret = nullptr;
		while (pHead)
		{
			ListNode* tmpNode = pHead->next;
			pHead->next = ret;
			ret = pHead;
			pHead = tmpNode;
		}
		return ret;
	}
}

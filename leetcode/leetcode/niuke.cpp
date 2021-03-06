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

	ListNode* reverseKGroup(ListNode* head, int k)
	{
		if (!head)
		{
			return head;
		}
		int nodeNum = 0;
		ListNode* tmpNode = head;
		while (tmpNode)
		{
			nodeNum++;
			tmpNode = tmpNode->next;
		}
		int nCount = nodeNum / k;
		if (nCount == 0)
		{
			return head;
		}
		int curNode = 0;
		tmpNode = head;
		ListNode* retNode = nullptr;
		for (int i = 0; i < nCount; i++)
		{
			tmpNode = head;
			ListNode* reverseNode = head;
			for (int j = 0; j < k - 1; j++)
			{
				tmpNode = tmpNode->next;
			}
			head = tmpNode->next;
			tmpNode->next = nullptr;
			ListNode* rever = ReverseList(reverseNode);
			if (!retNode)
			{
				retNode = rever;
			}
			else
			{
				ListNode* tmp = retNode;
				while (tmp->next)
				{
					tmp = tmp->next;
				}
				tmp->next = rever;
			}
		}
		ListNode* tmp = retNode;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = head;
		return retNode;
	}

	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
	{
		TreeNode* retNode = new TreeNode(0);
		if (pre.size() < 1 || vin.size() < 1)
		{
			return nullptr;
		}

		retNode->val = pre[0];
		vector<int> right_pre;
		vector<int> left_pre;
		vector<int> right_vin;
		vector<int> left_vin;
		int pos = 0;
		for (int i = 0; i < vin.size(); i++)
		{
			if (vin[i] == retNode->val)
			{
				break;
			}
			pos++;
			right_pre.push_back(pre[i + 1]);
			right_vin.push_back(vin[i]);
		}

		for (int i = pos+1; i < vin.size(); i++)
		{
			left_pre.push_back(pre[i]);
			left_vin.push_back(vin[i]);
		}
		retNode->right = reConstructBinaryTree(right_pre, right_vin);
		retNode->left = reConstructBinaryTree(left_pre, left_vin);
		return retNode;
	}


} // namespace

#include <vector>
#include <stack>
#include <string>
using namespace std;

namespace niuke
{
	struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) :
			val(x), next(NULL) {
		}
	};

	// �����ӷ�
	string bigNumberAdd(string s, string t);

	// NC78 ��ת����
	ListNode* ReverseList(ListNode* pHead);

	// NC50 �����еĽڵ�ÿk��һ�鷭ת
	ListNode* reverseKGroup(ListNode* head, int k);
}


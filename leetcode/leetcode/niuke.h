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

	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};

	// �����ӷ�
	string bigNumberAdd(string s, string t);

	// NC78 ��ת����
	ListNode* ReverseList(ListNode* pHead);

	// NC50 �����еĽڵ�ÿk��һ�鷭ת
	ListNode* reverseKGroup(ListNode* head, int k);

	// NC12 �ؽ�������
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin);
}


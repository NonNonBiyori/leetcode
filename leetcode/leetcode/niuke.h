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

	// 大数加法
	string bigNumberAdd(string s, string t);

	// NC78 反转链表
	ListNode* ReverseList(ListNode* pHead);

	// NC50 链表中的节点每k个一组翻转
	ListNode* reverseKGroup(ListNode* head, int k);

	// NC12 重建二叉树
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin);
}


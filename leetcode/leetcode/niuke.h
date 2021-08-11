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

	// NC3 链表中环的入口节点
	ListNode *detectCycle(ListNode *head);
	// NC4 判断链表中是否有环
	bool hasCycle(ListNode *head);

	// NC16 判断二叉树是否对称
	bool isSymmetric(TreeNode* root);

	// NC22 合并两个有序的数组
	void merge(int A[], int m, int B[], int n);
}


#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);


// 147. 对链表进行插入排序
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* insertionSortList(ListNode* head);

// 148. 归并排序
ListNode* sortList(ListNode* head);

// 876. 中间节点
ListNode* middleNode(ListNode* head);


#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

// 147. ��������в�������
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* insertionSortList(ListNode* head);
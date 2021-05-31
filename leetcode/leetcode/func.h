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

// 242. 有效的字母异位词
bool isAnagram(string s, string t);

// 4. 寻找两个正序数组的中位数
double findMedianSortedArrays(vector<int>& nums1, vector<int>&   nums2);

// 1370. 上升下降字符串
string sortString(string s);

// 6. Z 字形变换
string convert(string s, int numRows);


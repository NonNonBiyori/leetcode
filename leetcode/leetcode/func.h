#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);


// 147. ��������в�������
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* insertionSortList(ListNode* head);

// 148. �鲢����
ListNode* sortList(ListNode* head);

// 876. �м�ڵ�
ListNode* middleNode(ListNode* head);

// 242. ��Ч����ĸ��λ��
bool isAnagram(string s, string t);

// 4. Ѱ�����������������λ��
double findMedianSortedArrays(vector<int>& nums1, vector<int>&   nums2);

// 1370. �����½��ַ���
string sortString(string s);

// 6. Z ���α任
string convert(string s, int numRows);


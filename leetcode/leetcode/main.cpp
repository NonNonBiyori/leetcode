#include <iostream>
#include "func.h"
#include "niuke.h"

void test_insertionSortList()
{
	ListNode p1(4);
	ListNode p2(2);
	ListNode p3(1);
	ListNode p4(3);
	p1.next = &p2;
	p2.next = &p3;
	p3.next = &p4;
	p4.next = nullptr;
	insertionSortList(&p1);
}

void test_middleNode()
{
	ListNode p1(1);
	ListNode p2(2);
	ListNode p3(3);
	ListNode p4(4);
	ListNode p5(5);
	p1.next = &p2;
	p2.next = &p3;
	p3.next = &p4;
	p4.next = &p5;
	p5.next = nullptr;
	middleNode(&p1);
}

void test_ReverseList()
{
	niuke::ListNode p1(1);
	niuke::ListNode p2(2);
	niuke::ListNode p3(3);
	niuke::ListNode p4(4);
	niuke::ListNode p5(5);
	p1.next = &p2;
	p2.next = &p3;
	p3.next = &p4;
	p4.next = &p5;
	p5.next = nullptr;
	niuke::ReverseList(&p1);
}

void test_reverseKGroup()
{
	niuke::ListNode p1(1);
	niuke::ListNode p2(2);
	niuke::ListNode p3(3);
	niuke::ListNode p4(4);
	niuke::ListNode p5(5);
	niuke::ListNode p6(6);
	niuke::ListNode p7(7);
	p1.next = &p2;
	p2.next = &p3;
	p3.next = &p4;
	p4.next = &p5;
	p5.next = &p6;
	p6.next = &p7;
	p7.next = nullptr;
	niuke::reverseKGroup(&p1,3);
}

void test_reConstructBinaryTree()
{
	vector<int> pre;
	pre.push_back(1);
	pre.push_back(2);
	pre.push_back(3);
	pre.push_back(4);
	pre.push_back(5);
	pre.push_back(6);
	pre.push_back(7);
	vector<int> vin;
	vin.push_back(3);
	vin.push_back(2);
	vin.push_back(4);
	vin.push_back(1);
	vin.push_back(6);
	vin.push_back(5);
	vin.push_back(7);
	niuke::reConstructBinaryTree(pre, vin);

}

int main()
{
	// test_insertionSortList();
	// test_middleNode();
	// isAnagram("a", "ab");
	// sortString("aaaabbbbcccc");
	// test_ReverseList();
	// test_reverseKGroup();
	test_reConstructBinaryTree();
	system("pause");
}
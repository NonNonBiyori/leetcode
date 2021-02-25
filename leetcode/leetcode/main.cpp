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

int main()
{
	// test_insertionSortList();
	// test_middleNode();
	// isAnagram("a", "ab");
	// sortString("aaaabbbbcccc");
	string ret = bigNumberAdd("11221239", "456354");
	std::cout << ret << std::endl;
	system("pause");
}
#include <iostream>
#include "func.h"

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

int main()
{
	test_insertionSortList();
	std::cout << "hello " << std::endl;
	system("pause");
}
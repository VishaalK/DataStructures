#ifndef BINARY_HEAP_H
#define BINARY_HEAP_H
#include "priority_queue.h"

//template <typename T>
class binary_heap: public priority_queue {
public:
	void push(int) override {}

	int top() override {}
	
	void pop() override {}
	
	int size() override {}

	void clear() override {}

	void print() {}
private:
	struct Node {
		int data;
		Node* left;
		Node* right;
	};

	Node* root;
	int sz;	
};

#endif

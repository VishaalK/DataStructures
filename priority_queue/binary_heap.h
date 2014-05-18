#ifndef BINARY_HEAP_H
#define BINARY_HEAP_H
#include "priority_queue.h"

//template <typename T>
class binary_heap: public priority_queue {
public:
	binary_heap();

	void push(int) override;

	int top() override;
	
	void pop() override;
	
	int size() override;

	bool isEmpty() override;
		
	void clear() override;

	void print() override;
private:
	struct Node {
		int data;
		Node* left;
		Node* right;
		Node(): data(0), left(nullptr), right(nullptr) {}
	};

	Node* root;
	int sz;	
};

#endif

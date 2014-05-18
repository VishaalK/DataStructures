#ifndef BINARY_HEAP_H
#define BINARY_HEAP_H
#include "priority_queue.h"
#include <vector>

//template <typename T>
class binary_heap: public priority_queue {
public:
	void push(int) override;

	int top() override;
	
	void pop() override;
	
	int size() override;

	bool isEmpty() override;
		
	void clear() override;

	void print() override;
private:
	vector<int> data;

	void bubbleUp(int index);

	void bubbleDown(int index);
};

#endif

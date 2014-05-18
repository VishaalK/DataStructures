#include "Utility.h"
#include "binary_heap.h"

binary_heap::binary_heap(): root(new Node()), sz(0) {}

void binary_heap::push(int i) { 
	//BUBBLE DOWN
}

int binary_heap::top() {
	if (!root) {
		throw Error("top() called on empty priority queue");
	}
	return root->data;
}

void binary_heap::pop() {
	//switch root with last elt, decrement size
	//bubble that elt down to the correct location
}

int binary_heap::size() {
	return sz;
}

bool binary_heap::isEmpty() {
	return !root;
}

void binary_heap::clear() {
	//recursively delete the elements?
}

void binary_heap::print() {
	// in order traversal
}



#include "Utility.h"
#include "binary_heap.h"

//gotta use the min-heap!!
void binary_heap::push(int i) { 
	//parent is (i - 1)/2
	data.push(i);
	bubbleUp(data.size() - 1);
}

int binary_heap::top() {
	if (!data.size()) {
		throw Error("top() called on empty priority queue");
	}
	return data[0];
}

void binary_heap::pop() {
	//switch root with last elt, decrement size
	//bubble that elt down to the correct location
}

int binary_heap::size() {
	return data.size();
}

bool binary_heap::isEmpty() {
	return !data.size();
}

void binary_heap::clear() {
	data.clear();
}

/*void binary_heap::print() {
	//this'll be rough and tough
}*/

//private method implementations


void binary_heap::bubbleUp(int index) {

}

void binary_heap::bubbleDown(int index) {

}

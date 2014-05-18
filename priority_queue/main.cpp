#include <iostream>
#include <vector>
#include "sorted_array.h"
#include "utility.h"
using namespace std;

void print_priority_queue(priority_queue*);

int main(int argc, const char * argv[])
{
	priority_queue* pq;
	pq = new sorted_array;
	// insert code here...
	try {
		cout << pq->top() << endl;
	} catch (Error& e) {
		cout << e.what() << endl;
	}

	//make an actual test harness
	// insert one at a time
	// two at a time swapped (1,5), (5, 1)
	// negatives to at a time (-1, 1), (1, 3, -1, 1)
	// garbage random values with an invariant checking (go through output and check if not sorted)

	vector<int> v = {2, 7, 1, 5, 4, 3};//, 2, -1};
	for (int i: v) {
		pq->push(i);
	}
	cout << "Size: " << pq->size() << endl;
	print_priority_queue(pq);
	std::cout << "Hello, World!\n";
	return 0;
}

void print_priority_queue(priority_queue* pq) {
	while (!pq->isEmpty()) {
		cout << pq->top() << " ";
		pq->pop();
	}
	cout << "\n";
}

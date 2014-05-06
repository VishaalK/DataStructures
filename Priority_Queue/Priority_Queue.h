/* Priority Queue Abstract Base Class */

//template <typename T, Comparator comp>
class Priority_Queue {
public:
	virtual push(int) = 0;

	virtual int pop() = 0;

	virtual int top() = 0;

	virtual int size() = 0;

	virtual void clear() = 0;
private:
	
};
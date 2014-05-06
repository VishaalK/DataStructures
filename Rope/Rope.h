#include <iostream>
#include <stdexcept>

//could also derive from an ABC String, and have two implementations, Rope and Monolithic Array
class Rope {
public:
	//What methods should a Rope have
	Rope(); //default constructor
	
	Rope(const Rope& rhs); //copy constructor

	Rope(Rope&& rhs); //move constructor

	Rope& operator = (const Rope& rhs); //copy assignment

	Rope& operator = (Rope&& rhs); //move assignment

	~Rope();

	bool operator[](int i) { //range changed 
		if (i >= size) {
			throw std::out_of_range;
		}
	}

private:
	struct Node {
		int weight;
		int left;
		int right;
	};

	int size;
	

}
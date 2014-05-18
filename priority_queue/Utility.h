#ifndef UTILITY_H
#define UTILITY_H

struct Error {
	Error(const char* msg = ""): e_msg(msg) {}
	const char* what() { return e_msg; }
	const char* e_msg;
};

#endif

#ifndef TEST2_H_INCLUDED
#define TEST2_H_INCLUDED
#include <iostream>

using namespace std;

struct Container
{
private:
	struct Node
	{
		int data;
		Node* next;
		Node(int dat = 0, Node* n = NULL) : data(dat), next(n) {}
	};
	Node* begin;
	int _size;
public:
	Container() : begin(NULL), _size(0) {}
	~Container();
	void push(int el);
	void show();
	int size() const {return _size;}
	void pop();
};

#endif // TEST2_H_INCLUDED

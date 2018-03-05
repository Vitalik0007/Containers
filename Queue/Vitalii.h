#ifndef TEST7_H_INCLUDED
#define TEST7_H_INCLUDED
#include <iostream>

using namespace std;

struct Container
{
private:
	struct Node
	{
		int data;
		Node * _next;
		Node(int el = 0, Node * _n = NULL) : data(el), _next(_n) {}
	};
	Node * _begin;
	Node * _end;
	int _size;
public:
	Container() : _begin(NULL), _end(NULL), _size(0) {}
	~Container();
	void show();
	void push(int el);
	int size() const { return _size; }
	void pop();
};

#endif // TEST7_H_INCLUDED

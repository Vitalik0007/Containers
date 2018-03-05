#include "Vitalii.h"

Container::~Container()
{
	while (_begin != NULL)
	{
		Node * temp = _begin;
		_begin = _begin->_next;
		delete temp;
	}
}

void Container::show()
{
	Node * przod = _begin;
	while (przod != NULL)
	{
		cout << przod->data << " ";
		przod = przod->_next;
	}
	cout << "-> NULL" << endl;
}

void Container::push(int el)
{
	Node * temp = new Node(el);
	if (_begin == NULL)
	{
		_begin = temp;
		_end = temp;
	}
	else
	{
		_end->_next = temp;
		_end = _end->_next;
	}
	_size++;
}

void Container::pop()
{
	Node* del = _begin;
	_begin = _begin->_next;
	delete del;
	_size--;
}
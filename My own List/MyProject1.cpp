#include "Vitalik.h"

Container::~Container()
{
	while (begin != NULL)
	{
		Node* del = begin;
		begin = begin->next;
		delete del;
	}
}

void Container::show()
{
	Node* bef = begin;
	while (bef != NULL)
	{
		cout << bef->data << ", ";
		bef = bef->next;
	}
	cout << "->NULL" << endl;
}

void Container::push(int el)
{
	Node* temp = new Node(el, begin);
	if (begin == NULL || begin->data >= el) begin = temp;
	else
	{
		Node* bef = begin;
		Node* bef2 = 0;
		while (bef != NULL && bef->data < el)
		{
			bef2 = bef;
			bef = bef->next;
		}
		bef2->next = temp;
		temp->next = bef;
	}
	_size++;
}

void Container::pop()
{
	Node * del = 0;
	Node * bef2 = 0;
	Node * bef = begin;
	while (bef != NULL && bef->next != NULL && bef->next->next != NULL && bef->next->next->next != NULL)
	{
		if (bef->next->data != bef->next->next->data)
		{
			if (bef == begin)
			{
				for (int i = 0; i<4; i++)
				{
					del = begin;
					begin = begin->next;
					delete del;
				}
				bef = begin;
			}
			else
			{
				for (int i = 0; i<4; i++)
				{
					del = bef;
					bef2->next = bef->next;
					bef = bef->next;
					delete del;
				}
			}
		}
		else
		{
			for (int i = 0; i<2; i++)
			{
				del = bef->next;
				bef->next = bef->next->next;
				delete del;
			}
			bef2 = bef->next;
			bef = bef2->next;
		}
	}
	_size--;
}

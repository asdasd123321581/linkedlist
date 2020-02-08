#pragma once
#include <iostream>

class Linkedlist
{
private:
	struct Element
	{
		Element(int in_value)
		{
			value = in_value;
		}
		int value;
		Element* next = nullptr;
	};
public:
	Linkedlist();
	void Add(const int element);
	void Print() const;
	void Delete() const;
	int Size() const;
private:
	Element* head;
	int size;
};
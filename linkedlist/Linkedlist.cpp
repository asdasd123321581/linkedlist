#include "Linkedlist.h"

Linkedlist::Linkedlist()
{
	head = nullptr;
	size = 0;
}

void Linkedlist::Add(int element)
{
	if (head == nullptr) {
		head = new Element(element);
		++size;
	}
	else {
		Element* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = new Element(element);
		++size;
	}
}

void Linkedlist::Print() const
{
	if (head == nullptr) {
		std::cout << "Your list is empty!\n";
	}
	else
	{
		Element* current = head;
		while (current != nullptr) {
			std::cout << current->value << " ";
			current = current->next;
		}
	}

}

void Linkedlist::Delete() const
{
}

int Linkedlist::Size() const
{
	return size;
}

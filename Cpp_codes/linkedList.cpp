#include <iostream>


class Node {
public:
	int data;
	Node* next;
};

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void insertFirst(Node** first, int x) {
	Node* t = new Node;
	t->data = x;
	if (*first == nullptr) {
		*first = t;
		t->next = nullptr;
	}
	else {
		t->next = *first;
		*first = t;
	}
}

void display(Node* first) {
	while (first != nullptr) {
		std::cout << first->data << ' ';
		first = first->next;
	}
}

int main() {
	Node* first = nullptr;


	insertFirst(&first, 10);
	insertFirst(&first, 20);
	insertFirst(&first, 30);
	insertFirst(&first, 40);
	insertFirst(&first, 50);
	insertFirst(&first, 10);
	insertFirst(&first, 20);
	insertFirst(&first, 30);
	insertFirst(&first, 40);
	insertFirst(&first, 10);
	insertFirst(&first, 20);
	insertFirst(&first, 30);
	insertFirst(&first, 40);
	insertFirst(&first, 50);
	insertFirst(&first, 50);

	

	display(first);


	return 0;
}

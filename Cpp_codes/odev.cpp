#include <iostream>

/*
struct Node {
	int boy;
	int agirlik;
	std::string seri_no;
	Node* next;
};

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void insertFirst(Node** first, int boy, int agirlik, std::string seri_no) {
	Node* t = new Node;
	t->boy = boy;
	t->agirlik = agirlik;
	t->seri_no = seri_no;
	if (*first == nullptr) {
		*first = t;
		t->next = nullptr;
	}
	else {
		t->next = *first;
		*first = t;
	}
}

void display(Node* p) {
	while (p != nullptr) {
		std::cout << p->boy << '\t' << p->agirlik << '\t' << p->seri_no << std::endl;
		p = p->next;
	}
}

void deleteFirst(Node**first) {
	if (*first == nullptr) {
		std::cout << "list is empty";
		return;
	}
	if ((*first)->next == nullptr) {
		delete first;
	}
	else {
		Node* p = *first;
		*first = (*first)->next;
		delete p;
	}
}

*/

struct Node {
	int data;
	Node* next;
};

void insertFirst(Node** head, int val) {
	Node* newNode = new Node;
	newNode->data = val;

	newNode->next = *(head);
	*(head) = newNode;
}

void display(Node* p) {
	while (p) {
		std::cout << p->data << ' ';
		p = p->next;
	}
	std::cout << std::endl;
}

void deleteAt(Node** first, int x) {
	Node* p = *first;
	Node* prev = nullptr;
	while (p->data != x) {
		prev = p;
		p = p->next;
	}
	prev->next = p->next;
	delete p;
}

int main() {
	/*
	Node* first = nullptr;


	insertFirst(&first, 10, 16, "AWZ124");
	insertFirst(&first, 30, 47, "AWZ143");
	insertFirst(&first, 16, 20, "AWZ543");
	insertFirst(&first, 25, 28, "AWZ621");
	insertFirst(&first, 43, 38, "AWZ754");
	insertFirst(&first, 17, 32, "AWZ852");
	insertFirst(&first, 28, 52, "AWZ974");

	display(first);*/

	Node* first = nullptr;
	insertFirst(&first, 10);
	insertFirst(&first, 20);
	insertFirst(&first, 30);
	insertFirst(&first, 40);
	insertFirst(&first, 50);

	display(first);

	deleteAt(&first, 30);

	display(first);

	


	return 0;
}

#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "node.h"
#include "iterator.h"
using namespace std;
template <typename AB>
class List {
private:
	Node<AB>* start;
public:
	List();
	AB front();
	AB back();
	void insert(AB &tree, int dat) {
		if (tree) {
			if (x > arbol->num) arbol->izq = dat;
		}
	}
	void remove_leaf(AB value);
	void remove_with_one_leaf(AB value);
	void remove_with_two_leaf(AB value);
	void print_inorder();
	void print_preorder();
	void print_postorder();
	void pop_back();
	Iterator<AB> begin();
	Iterator<AB> end();
	~List();
};
#endif
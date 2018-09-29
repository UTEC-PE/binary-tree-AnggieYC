#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
template <typename AB>
struct Node {
	int num;
	Node* izq;
	Node* der;
}
#endif
#pragma once
#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.h"

template <typename AB>
class Iterator {
private:
	Node<AB>* current;

public:
	Iterator();
	Iterator(Node<AB>* node);

	Iterator<AB> operator=(Iterator<AB> node);
	bool operator!=(Iterator<AB> cmp);
	Iterator<AB> operator++();
	AB operator*();
};

#endif

#include "node.h"

node::node() : info(0), next(NULL), before(NULL) {} 

node::node(int x, node* n, node* b) : info(x), next(n), before(b) {}

node* node::getNext() const
{
	return this->next;
}

int node::getInfo() const
{
	return this->info;
}
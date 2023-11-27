#ifndef NODE_HPP
#define NODE_HPP

#include <string>

using namespace std;

struct Node
{
	int data;
	int conut;
	string item;
	Node *next;
	Node *prev;
};
#endif
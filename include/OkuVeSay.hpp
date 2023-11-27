/**
 * @file TOP_HPP.
 * @description Top Sinivin Tanimi.
 * @course 1.C.
 * @assignment 1.Odev
 * @date Kodu 28/11/19
 * @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
 * @author Avad almohammadalibrahim awad.alibrahim@ogr.sakarya.edu
 */
#ifndef METINSAYMAVEOKUMAISLEMI_HPP
#define METINSAYMAVEOKUMAISLEMI_HPP
#include <iostream>
#include "Node.hpp"

class AddShortcut
{
private:
	int Kazanc();

	Node *add;
	Node *first;
	Node *newNode;
	int len;
	int wordCounter;
	int Addition;
	bool IsParity(string);
	friend ostream &operator<<(ostream &, AddShortcut &);
	void removeFirst();

public:
	AddShortcut();
	void Add(string);
	~AddShortcut();
};
#endif
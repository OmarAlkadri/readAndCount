/**
 * @file Test.cpp.
 * @description Kutuphanelerimiz Testlenmesi.
 * @course 1.C.
 * @assignment 1.Odev
 * @date Kodu 28/11/19
 * @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
 * @author Avad almohammadalibrahim awad.alibrahim@ogr.sakarya.edu
 */
#include "OkuVeSay.hpp"
AddShortcut::AddShortcut()
{
	add = NULL;
	first = NULL;
	len = 0;
	wordCounter = 0;
	Addition = 0;
}
bool AddShortcut::IsParity(string element)
{
	int Wordlen = 0;
	if (len == 0)
	{
		newNode->conut = 0;
		return true;
	}
	Node *temp = first;
	while (temp != NULL)
	{
		if (temp->item == element)
		{
			newNode->conut = len - Wordlen;
			// Addition += temp->item.length();
			for (char in : temp->item)
			{
				Addition++;
			}
			wordCounter++;
			return false;
		}
		temp = temp->next;
		Wordlen++;
	}
	newNode->conut = 0;
	return true;
}
void AddShortcut::removeFirst()
{
	while (first != NULL)
	{
		if (len == 0)
		{
			return;
		}
		else if (len == 1)
		{
			delete first;
			first = NULL;
		}
		else
		{
			Node *curr = first;
			first = first->next;
			first->prev = NULL;
			delete curr;
		}
		len--;
	}
}

void AddShortcut::Add(string element)
{
	newNode = new Node;
	if (IsParity(element))
	{
		newNode->item = element;
	}
	if (len == 0)
	{
		first = add = newNode;
		newNode->next = newNode->prev = NULL;
	}
	else
	{
		newNode->next = NULL;
		newNode->prev = add;
		add->next = newNode;
		add = newNode;
	}
	len++;
}
int AddShortcut::Kazanc()
{
	return Addition - wordCounter;
}
ostream &operator<<(ostream &out, AddShortcut &data)
{

	Node *temp;
	temp = data.first;
	out << "NULL <-";
	while (temp != NULL && temp->next != NULL)
	{
		out << ":" << temp->item << " - " << temp->conut << " :<->";
		temp = temp->next;
	}
	if (temp != NULL)
		out << " : " << temp->item << " - " << temp->conut << ":-> NULL";
	out << endl
		<< "harif Sayisi :" << data.Addition << endl
		<< "kelime sayisi :" << data.wordCounter << endl
		<< "Toplam Kazanc :" << data.Kazanc() << " Byte";
	return out;
}
AddShortcut::~AddShortcut()
{
	removeFirst();
}
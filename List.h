#ifndef LIST_H
#define LIST_H

#include "Position.h"
#include <list>

class List
{
private:
	std::list<Position> list;

public:

	void addPosition(const std::string name, int id, int count);
	void deletePosition(const std::string name);
	std::list<Position>::iterator findPosition(const std::string name);
	void printAll();

};

#endif
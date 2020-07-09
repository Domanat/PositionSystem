#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position
{
public: 
	Position(const std::string name, int count, int id);

private:
	std::string name;
	int count;
	int id;
};

#endif
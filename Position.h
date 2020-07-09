#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position
{
public: 
	Position(const std::string name, int id, int count);

	std::string getName() const;
	int getCount() const;
	int getId() const;

private:
	std::string name;
	int count;
	int id;
};

#endif
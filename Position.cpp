#include "Position.h"

Position::Position(const std::string name, int id, int count)
{
	this->name = name;
	this->id = id;
	this->count = count;
}

std::string Position::getName() const
{
	return name;
}

int Position::getId() const
{
	return id;
}

int Position::getCount() const
{
	return count;
}
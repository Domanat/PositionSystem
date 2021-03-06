#include "List.h"
#include <iostream>

//----------Функция для добавления значения в список--------------------
void List::addPosition(const std::string name, int id, int count)
{
	list.push_back(Position(name, id, count));
}

//----------Функция для удаления позиции из списка------------------
void List::deletePosition(const std::string name)
{
	auto delPosition = findPosition(name);

	list.erase(delPosition);
}

//---------Функция для вывода всех значений списка--------------------
void List::printAll()
{
	for (auto i : list)
	{
		std::cout << "______________________________________________" << std::endl;
		std::cout << "Name: " << i.getName() << "\nID: " << i.getId() << "\nCount: " << i.getCount() << std::endl;
		std::cout << "______________________________________________" << std::endl;
	}
}

//---------Функция для поиска значения в списке по имени--------------
std::list<Position>::iterator List::findPosition(const std::string name)
{
	return std::find_if(list.begin(), list.end(), [name](const Position& p) {
		return p.getName() == name;
		});
}
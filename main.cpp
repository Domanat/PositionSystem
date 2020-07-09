#include "List.h"

int main()
{
	List positions;
	positions.addPosition("Ball", 10, 1);
	positions.addPosition("Car", 20, 2);
	positions.addPosition("Book", 30, 3);
	positions.addPosition("Guitar", 40, 4);
	
	positions.deletePosition("Car");

	positions.printAll();

	return 0;
}
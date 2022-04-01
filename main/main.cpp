#include "Student.h"

int main()
{
	Student st1("Nastya", "18");
	Student st2("Alex", "15");
	Student st3("Domi", "15");

	st1.setName("Alex");
	st1.setAge("16");

	cout << st1.getInfo();

	return 0;
}

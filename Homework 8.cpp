#include "Human.h"

int main()
{
	Human Petia{"KABO", "Petor", "Sisoev", 'M', 19}, Vova, Seva;
	std::cout << Petia << std::endl;
	std::cin >> Vova;
	std::cout << Vova;
	Seva = Petia = Vova;
	std::cout << Petia << std::endl << Vova << std::endl << Seva;
}
#include "Human.h"

Human::Human(std::string a, std::string b, std::string c, char d, int e)
{
	Group = a;
	FirstName = b;
	SecondName = c;
	sex = d;
	age = e;
}

Human::Human()
{
	Group = "";
	FirstName = "";
	SecondName = "";
	sex = ' ';
	age = 0;
}

void Human::setGroup(std::string newGroup)
{
	Group = newGroup;
}

std::string Human::getGroup()
{
	return Group;
}

void Human::setFirstName(std::string newFirstName)
{
	FirstName = newFirstName;
}

std::string Human::getFirstName()
{
	return FirstName;
}

void Human::setSecondName(std::string newSecondName)
{
	SecondName = newSecondName;
}

std::string Human::getSecondName()
{
	return SecondName;
}

void Human::setsex(char newsex_how)
{
	sex = newsex_how;
}

char Human::getsex()
{
	return sex;
}

void Human::setage(int newage)
{
	age = newage;
}

int Human::getage()
{
	return age;
}

Human& Human::operator=(const Human& a)
{
	Group = a.Group;
	FirstName = a.FirstName;
	SecondName = a.SecondName;
	sex = a.sex;
	age = a.age;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Human& a)
{
	return out << "Group: " << a.Group << std::endl << "Name: " << a.FirstName << " " << a.SecondName << std::endl << "Sex: " << a.sex << std::endl << "Age: " << a.age << std::endl;
}

std::istream& operator>>(std::istream& in, Human& a)
{
	in >> a.Group >> a.FirstName >> a.SecondName >> a.sex >> a.age;
	return in;
}

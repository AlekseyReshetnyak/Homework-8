#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include <fstream>

class Human {
	std::string Group;
	std::string FirstName;
	std::string SecondName;
	char sex;
	int age;
public:
	Human(std::string, std::string, std::string, char, int);
	Human();

	void setGroup(std::string);
	std::string getGroup();

	void setFirstName(std::string);
	std::string getFirstName();

	void setSecondName(std::string);
	std::string getSecondName();

	void setsex(char);
	char getsex();

	void setage(int);
	int getage();

	friend std::ostream& operator<<(std::ostream&,const Human&);
	friend std::istream& operator>>(std::istream&, Human&);
	Human& operator=(const Human&);
};

#endif 
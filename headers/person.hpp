#ifndef PERSON
#define PERSON

#include <string>

class Person
{
protected:
	std::string name;
	int age;
public:
	Person();
	Person(std::string name);
	Person(std::string name, int age);
	Person(int age);

	std::string get_name();
	int get_age();

	void set_name(std::string);
	void set_age(int);
};

#endif

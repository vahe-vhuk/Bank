#include "headers/person.hpp"

Person::Person() 
	:	name("James") 
	,	age(18) 
{}

Person::Person(std::string name)
	:	name(name)
	,	age(18)
{}

Person::Person(std::string name, int age)
	:	name(name)
	,	age(age)
{}

Person::Person(int age)
	:	name("James")
	,	age(age)
{}

std::string
Person::get_name()
{
	return name;
}

int
Person::get_age()
{
	return age;
}

void
Person::set_name(std::string name)
{
	this->name = name;
}

void
Person::set_age(int age)
{
	this->age = age;
}






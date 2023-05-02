#include "headers/employee.hpp"
#include "headers/customer.hpp"

Employee::Employee()
	:	Person()
{}

Employee::Employee(std::string name)
	:	Person(name)
{}

Employee::Employee(std::string name, int age)
	:	Person(name, age)
{}

Employee::Employee(int age)
	:	Person(age)
{}

bool
Employee::check_customer(Customer& customer)
{
	int sal = customer.get_salary();
	int age = customer.get_age();

	if (age < 21 || age > 55) {
		return false;
	}
	if (sal < 50000) {
		return false;
	}
	return true;
}

















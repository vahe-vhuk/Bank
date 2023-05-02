#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include "headers/person.hpp"

class Customer;

class Employee : public Person
{
public:
	Employee();
	Employee(std::string name);
	Employee(std::string name, int age);
	Employee(int age);


	virtual bool check_customer(Customer& customer);
	//virtual void confirm_offer(Customer& customer, int credit);

};



#endif

#include <iostream>
#include "headers/customer.hpp"
#include "headers/bank.hpp"


Customer::Customer()
	:	Person()
	,	reputation(20)
	,	credit(0)
	,	salary(0)
	,	many(10000)
{}

Customer::Customer(std::string name)
	:	Person(name)
	,	reputation(20)
	,	credit(0)
	,	salary(0)
	,	many(10000)
{}

Customer::Customer(std::string name, int age)
	:	Person(name, age)
	,	reputation(20)
	,	credit(0)
	,	salary(0)
	,	many(10000)
{}

Customer::Customer(int age)
	:	Person(age)
	,	reputation(20)
	,	credit(0)
	,	salary(0)
	,	many(10000)
{}

int
Customer::get_reputation()
{
	return reputation;
}

int
Customer::get_credit()
{
	return credit;
}

int
Customer::get_salary()
{
	return salary;
}

int
Customer::get_many()
{
	return many;
}

void
Customer::set_reputation(int rep)
{
	this->reputation = rep;
}

void
Customer::set_credit(int cre)
{
	this->credit = cre;
}

void
Customer::set_salary(int sal)
{
	this->salary = sal;
}

void
Customer::set_many(int many)
{
	this->many = many;
}

bool
Customer::can_get_credit(Bank& bank)
{
	return bank.check_can_get_credit(*this);
}

int
Customer::max_credit_value(Bank& bank)
{
	return bank.check_value_of_credit(*this);
}

void
Customer::get_credit(Bank& bank, int value)
{
	int max_credit = max_credit_value(bank);
	int klo = max_credit < value ? max_credit : value;
	if (max_credit == 0 || max_credit < value*0.8) {
		std::cout << "\napsos\n";
	}
	else {
		approve_contract(bank, klo);
		std::cout << "\nuraa\n";
	}
}

void
Customer::approve_contract(Bank& bank, int value)
{
	bank.sign_contract(*this, value);
}

void
Customer::pay_credit(Bank& bank, int value)
{
	many -= value;
	if (many < 0) {
		many = 0;
	}
	credit -= value;
	if (credit < 0) {
		credit = 0;
	}
	bank.update_credit(*this, value);
}













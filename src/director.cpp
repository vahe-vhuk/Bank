#include "headers/director.hpp"
#include "headers/customer.hpp"
#include "headers/bank.hpp"

Director::Director()
	:	Employee()
{}

Director::Director(std::string name)
	:	Employee(name)
{}

Director::Director(std::string name, int age)
	:	Employee(name, age)
{}

Director::Director(int age)
	:	Employee(age)
{}

void
Director::set_bank(Bank* bank)
{
	this->bank = bank;
}

bool
Director::check_customer(Customer& customer)
{
	int rep = customer.get_reputation();
	int cre = customer.get_credit();

	if (bank->customers[&customer]) {
		return false;
	}
	if (rep < 20) {
		return false;
	}
	if (cre > 500000) {
		return false;
	}
	return true;
}

int
Director::calculate_max_credit(Customer& customer)
{
	if (!(check_customer(customer) && 
							bank->attendant.check_customer(customer))) {
		return 0;
	}
	int cre = customer.get_credit();
	int age = customer.get_age();
	int sal = customer.get_salary();
	int rep = customer.get_reputation();
	double diff = (500000 - cre) * ((double)rep / 100);
	
	return (int)(diff * (sal / age));
}

void
Director::sign_contract(Customer& customer, int value)
{
	bank->customers[&customer] = value;
	bank->depository -= value;
	
	int many = customer.get_many();
	customer.set_many(many + value);
	int cre = customer.get_credit();
	customer.set_credit(cre + value);
}

void
Director::update_credit(Customer& customer, int value)
{
	int cre = bank->customers[&customer];
	bank->customers[&customer] -= value;
	if (bank->customers[&customer] < 0) {
		bank->customers[&customer] = 0;
	}

	int rep = customer.get_reputation();
	if (value < cre / 10) {
		customer.set_reputation(rep - 1);
	}
	else {
		customer.set_reputation(rep + 1);
	}
}






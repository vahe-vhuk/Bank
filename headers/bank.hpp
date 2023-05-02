#ifndef BANK
#define BANK

#include <map>
#include <utility>
#include "headers/employee.hpp"
#include "headers/customer.hpp"
#include "headers/director.hpp"

class Customer;

class Bank
{
private:
	int depository;
	Director boss;
	Employee attendant;
	std::map<Customer*, int> customers;
public:
	friend class Director;
	Bank();

	bool check_can_get_credit(Customer& customer);
	int check_value_of_credit(Customer& customer);
	void sign_contract(Customer& customer, int value);

	void update_credit(Customer& customer, int value);
};





#endif

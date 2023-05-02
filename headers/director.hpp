#ifndef DIRECTOR
#define DIRECTOR

#include <string>
#include "headers/employee.hpp"

class Bank;
class Customer;

class Director : public Employee
{
private:
	Bank* bank;
public:
	Director();
	Director(std::string name);
	Director(std::string name, int age);
	Director(int age);

	void set_bank(Bank* bank);

	bool check_customer(Customer& customer) override;
	int calculate_max_credit(Customer& customer);
	void sign_contract(Customer& customer, int value);

	void update_credit(Customer& customer, int value);
};






#endif

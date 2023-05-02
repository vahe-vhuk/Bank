#ifndef CUSTOMER
#define CUSTOMER

#include <string>
#include "headers/person.hpp"
//#include "headers/bank.hpp"
class Bank;

class Customer : public Person
{
private:
	int reputation;
	int credit;
	int salary;
	int many;
	void approve_contract(Bank& bank, int value);
public:
	Customer();
	Customer(std::string);
	Customer(std::string, int);
	Customer(int);

	int get_reputation();
	int get_credit();
	int get_salary();
	int get_many();

	void set_reputation(int rep);
	void set_credit(int cre);
	void set_salary(int sal);
	void set_many(int many);

	bool can_get_credit(Bank& bank);
	int max_credit_value(Bank& bank);
	void get_credit(Bank& bank, int value);

	void pay_credit(Bank& bank, int value);	
};



#endif

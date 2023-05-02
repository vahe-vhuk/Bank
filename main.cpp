#include <iostream>
#include "headers/bank.hpp"


int main()
{
	Customer b("John", 30);
	b.set_salary(100000);
	Bank d;

	b.get_credit(d, 3000);

	b.get_credit(d, 1000);

	b.pay_credit(d, 4000);

	b.get_credit(d, 15000);

	std::cout << "\n" << b.get_many();

	std::cout << "\n" << b.get_credit();

	return 0;
}




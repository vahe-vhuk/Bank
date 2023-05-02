#include "headers/bank.hpp"

Bank::Bank()
	:	depository(1000000)
{
	boss.set_bank(this);
}

bool
Bank::check_can_get_credit(Customer& customer)
{
	if (!attendant.check_customer(customer)) {
		return false;
	}
	if (!boss.check_customer(customer)) {
		return false;
	}
	return true;
}

int
Bank::check_value_of_credit(Customer& customer)
{
	int assumed_value = boss.calculate_max_credit(customer);
	if (assumed_value > depository / 10) {
		assumed_value = depository / 10;
	}

	int calculated_value = boss.calculate_max_credit(customer);

	return assumed_value < calculated_value ? assumed_value : calculated_value;
}

void
Bank::sign_contract(Customer& customer, int value)
{
	boss.sign_contract(customer, value);
}

void
Bank::update_credit(Customer& customer, int value)
{
	boss.update_credit(customer, value);
}









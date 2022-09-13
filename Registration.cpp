#include "Registration.h"

Registration::Registration()
{
	
}

Registration::Registration(std::list<std::function<bool(AccountForm)>> RegistrationEvent)
{
	EventHandler = RegistrationEvent;
}

Registration::~Registration()
{
	EventHandler.clear();
}

int Registration::AccountRegistration()
{
	while (1) {
		//registration menu call

	}
	return 0;
}

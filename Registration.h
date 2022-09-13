#pragma once
#include "AccountForm.h"
#include <functional>
#include <list>

class Registration
{
public:
	AccountForm acc;	//account form
	Registration();		//don't use, use "Registration(std::function<bool(AccountForm)>)" instead 
	Registration(std::list<std::function<bool(AccountForm)>> RegistrationEvent);	
	~Registration();
	int AccountRegistration();	//registration event 
private:
	std::list<std::function<bool(AccountForm)>> EventHandler;	//0 : validation, 1 : registration
};


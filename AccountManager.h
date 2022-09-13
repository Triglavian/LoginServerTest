#pragma once
#include <iostream>
#include <list>
#include "AccountForm.h"

class AccountManager
{
public:
	AccountManager();
	~AccountManager();
	bool IsInvalidAcc(const AccountForm&);
	AccountForm LogIn();
	bool IsExistAcc();
	bool Registration();
private:
	std::list<AccountForm>* acc;
};
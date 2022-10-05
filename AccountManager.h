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
<<<<<<< HEAD
	//AccountForm LogIn();
=======
	AccountForm LogIn();
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
	bool IsExistAcc();
	bool Registration();
private:
	std::list<AccountForm>* acc;
};
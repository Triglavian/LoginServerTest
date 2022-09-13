#include "AccountManager.h"

AccountManager::AccountManager()
{
	acc = new std::list<AccountForm>();
}

AccountManager::~AccountManager()
{
	if (acc != nullptr) {
		acc->clear();
		delete acc;
	}
}

bool AccountManager::IsInvalidAcc(const AccountForm& )
{
	return false;
}

AccountForm AccountManager::LogIn()
{
	return ;
}

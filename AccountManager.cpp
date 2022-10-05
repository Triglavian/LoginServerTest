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

<<<<<<< HEAD
//AccountForm AccountManager::LogIn()
//{
//	return ;
//}
=======
AccountForm AccountManager::LogIn()
{
	return ;
}
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25

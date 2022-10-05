#pragma once
#define MMAIN		(int)MenuId::MAIN
#define MREG		(int)MenuId::REGISTRATION
#define MLOG_IN		(int)MenuId::LOG_IN
#define MLOG_OUT	(int)MenuId::LOG_OUT
#define MEXIT		(int)MenuId::EXIT
#define MMAX		(int)MenuId::MAX

enum class MenuId {
	MAIN,
	REGISTRATION,
	LOG_IN,
	LOG_OUT,
	EXIT,
	MAX
};
#include "headers.h"

class CPU
{
	public:
	CPU();

	private:
	// registers
	unsigned short int PC;
	unsigned char stack_pointer;
	unsigned char accumulator;
	unsigned char index_registerX;
	unsigned char index_registerY;
	
	// status flags
	public:
	enum flags
	{
		CARRY,
		ZERO,
		INTERRUPT_DISABLE,
		DECIMAL_MODE,
		BREAK_COMMAND,
		OVERFLOW,
		NEGATIVE
	};

	bool status_register[7];
	unsigned char stack_memory[256];
};

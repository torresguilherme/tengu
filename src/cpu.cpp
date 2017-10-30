#include "cpu.h"

CPU::CPU()
{
	PC = 0;
	stack_pointer = 255;
	accumulator = 0;
	index_registerX = 0;
	index_registerY = 0;
	for(int i = 0; i < 7; i++)
	{
		status_register[i] = false;
	}
}

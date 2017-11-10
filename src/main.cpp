#include "headers.h"
#include "cpu.h"

int main(int argc, char **argv)
{
	FILE *rom = fopen(argv[1], "rb");
	CPU cpu;
	unsigned char current_instruction;
	while(!cpu.status[cpu.INTERRUPT])
	{
		fread(&current_instruction, sizeof(char), 1, rom);
//		printf("%02x\n", current_instruction);
	}

	fclose(rom);
	return 0;
}


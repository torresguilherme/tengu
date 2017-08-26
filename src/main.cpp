#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

int main(int argc, char **argv)
{
	FILE *rom = fopen(argv[1], "rb");
	char current_instruction;
	while(!feof(rom))
	{
		fread(&current_instruction, sizeof(char), 1, rom);
		printf("%x\n", current_instruction);
	}

	fclose(rom);
	return 0;
}


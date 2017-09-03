#pragma once
#include <sstream>

class VM
{
public:
	// Constants
	static const int MAX_STACK_HEIGHT = 2000;
	static const int MAX_CODE_LENGTH = 500;
	static const int MAX_LEXI_LEVELS = 3;

	// Registers
	int sp, bp, pc, ir;

	// Stack initialized to 0
	int stack[MAX_STACK_HEIGHT] = { 0 };

	// Constructor
	VM();

	// Starts the VM
	bool Start();

	// Fetch cycle
	bool Fetch();

	// Execute cycle
	bool Execute();

	// Find base L levels down
	unsigned int Base(unsigned int l, unsigned int base);
};
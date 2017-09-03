#pragma once

class VM
{
	// Registers
	int SP, BP, PC, IR;
	// Stack
	int *stack;
public:
	// "Main" execution wrapper for the VM.
	int Execute();

	// Find base L levels down
	unsigned int Base(unsigned int l, unsigned int base);
};
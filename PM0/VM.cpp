/*
vm.cpp
Author: Dane Tallman

The P-machine is a stack machine with two memory stores: the “stack”, which is organized as a stack and contains the data to be used by the PM/0 CPU, 
and the “code”, which is organized as a list and contains the instructions for the VM. The PM/0 CPU has four registers. 
The registers are named base pointer (BP), stack pointer (SP), program counter (PC) and instruction register (IR). 

The Instruction Set Architecture (ISA) of the PM/0 has 23 instructions. Each instructions is made of three integers, and the instruction format is as follows:  “OP L M”.

Each instruction contains three components (OP, L, M) that are separated by one space.

OP	is the operation code (opcode).
L	indicates the lexicographical level.
M	depending of the operators it indicates:
- A number (instructions: LIT, INC).
- A program address (instructions: JMP, JPC, CAL).
- A data address (instructions: LOD, STO)
- The identity of the operator OPR
(e.g. OPR 0, 2 (ADD) or OPR 0, 4 (MUL)).
*/

#include "stdafx.h"
#include "vm.h"

#define MAX_STACK_HEIGHT 2000
#define MAX_CODE_LENGTH 500
#define MAX_LEXI_LEVELS 3

int VM::Execute() {
	int stack[MAX_STACK_HEIGHT] = {0};

	return 0;
}

// Find a variable in a different activation record some L levels down
unsigned int VM::Base(unsigned int l, unsigned int base)
{
	unsigned int b1;
	b1 = base;
	while (l > 0)
	{
		b1 = stack[b1 + 1];
		l--;
	}
	return b1;
}
/*************************************************************************
Function Title: make_empty, is_empty, is_full, push, pop

Summary: checks arrays to see multiple things 

Inputs: None & int
Outputs: None

Compile instructions: gcc program11.c -o program11.exe

**************************************************************************

PSEUDOCODE

void make_empty(void)
	sets int to 0

bool is_empty(void)
	checks if array has more then one thing in stack

bool is_full(void)
	checks if array is empty


void push(int i)
	adds to the stack

int pop(void)
	takes from the stack


*************************************************************************/

#include "stack.h"
#include <stdbool.h>
#define STACK_SIZE 100
#include <stdio.h>

int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	//sets int to 0
	top = 0;
}

bool is_empty(void)
{
	//checks if array has more then one thing in stack
	bool letsSee = false;
	if(top == 1)
	{
		letsSee = true;
	}
	return letsSee;
}

bool is_full(void)
{
	//checks if array is empty
	return top == STACK_SIZE;
}

void push(int i)
{
	//adds to the stack
	contents[top++] = i;
}
int pop(void)
{
	//takes from the stack
	return contents[--top];
}





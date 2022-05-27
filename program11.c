/*************************************************************************
Function Title: main

Summary: Solves RPN expressions

Inputs: None
Outputs: None

Compile instructions: gcc program11.c -o program11.exe

**************************************************************************

PSEUDOCODE

begin
	assign a char and int
	make 2 ints that we can use for equations
	ask the user for the expression
	create a while statement
		do a get char and make it equal to the char
		make an if statemnt that looks for if take is a number
			add take to the stack
		end if
		make an if for each of the operators
			get the top 2 numbers off the stack
			subtract 48
			do the operation
		end if
	end while
	check to see if the number and operations could run.
	print out the answer
end


*************************************************************************/


#include "stack.h"
#include <stdio.h>
//begin
int main(void)
{
	//assign a char and int
	char take;
	int work;
	take = 'a';
	
	//make 2 ints that we can use for equations
	int one, two;
	
	//ask the user for the expression 
	printf("Enter an RPN expression: ");
	
	//create a while statement 
	while(take != '=')
	{
		//do a get char and make it equal to the char
		take = getchar();
		
		//make an if statemnt that looks for if take is a number
		if((take > 47) && (take < 58))
		{
			//add take to the stack
			work = take;
			work -= 48;
			push(work);
		}
		//end if
		//make an if for each of the operators 
		if(take == '*')
		{
			//get the top 2 numbers off the stack
			one = pop();
			two = pop();
			//do the operation
			one = one * two;
			push(one);
		}
		//end if
		if(take == '/')
		{
			one = pop();
			two = pop();
			one = two / one;
			push(one);
		}
		if(take == '+')
		{
			one = pop();
			two = pop();
			one = one + two;
			push(one);
		}
		if(take == '-')
		{
			one = pop();
			two = pop();
			one = two - one;
			push(one);
		}
	}
	//end while 
	
	//check to see if the number and operations could run.
	if(is_empty())
	{
		printf("\nValue of expression: ");
		one = pop();
		printf("%d", one);
	}
	else
	{
		printf("Not enough operands in expression");
	}

	return 0;
}
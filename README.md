# Monty byte codes interpretor
## Topics: C - Stacks, Queues - LIFO, FIFO

## The Monty language

### About

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.

## BrainFuck

Brainfuck is an esoteric programming language created in 1993 by Urban Müller.

## Documentation

### Monty: Compilation and usage

<li>gcc -Wall -Werror -Wextra -pedantic *.c -o monty<li>
<li>
	<p>./monty <montyfile.m></p>
	<li>One operator per line</li>
	<li>spaces, tabs and newlines are ignored</li>
	<li>'#' sign represent comments and the line will be ignored</li>
<li>

### Helper functions

<li><b>cmd_executer</b>: Handle line and execute given monty instruction</li>
<li><b>add_node</b>: Add a node to the stack.</li>
<li><b>add_node_end</b>: Add a node at the end of the stack</li>
<li><b>free_stack</b>: Free memory allocated to the stack nodes</li>
<li><b>stack_len</b>: Return the stack length</li>
<li><b>is_number</b>: Check if a string is a number</li>

### Instructions

<li><b>push</b>: Push an element to the stack</li>
<li><b>pall</b>: Print all the elements of the stack</li>
<li><b>pint</b>: Print the last pushed element of the stack</li>
<li><b>pop</b>: Remove the top element of the stack</li>
<li><b>swap</b>: Swaps the top two elements of the stack</li>
<li><b>add</b>: Adds the top two elements of the stack</li>
<li><b>nop</b>: Doesn’t do anything</li>
<li><b>sub</b>: Subtracts the top element of the stack from the second top element of the stack</li>
<li><b>div</b>: Divides the second top element of the stack by the top element of the stack</li>
<li><b>mul</b>: Multiplies the second top element of the stack with the top element of the stack</li>
<li><b>mod</b>: Computes the rest of the division of the second top element of the stack by the top element of the stack</li>
<li><b>pchar</b>: Prints the char at the top of the stack, followed by a new line</li>
<li><b>pstr</b>: Prints the string starting at the top of the stack, followed by a new line</li>
<li><b>rotl</b>: Rotates the stack to the top</li>
<li><b>rotr</b>: Rotates the stack to the bottom</li>
<li><b>stack</b>: Sets the format of the data to a stack (LIFO). This is the default behavior of the program</li>
<li><b>queue</b>: Sets the format of the data to a queue (FIFO)</li>

### Additional tasks: BrainFuck

<li><b>1000-school.bf</b>: Print school. `bf 1000-school.bf`</li>
<li><b>100!-add.bf</b>: Add two digits given by the user. `bf 1000-school.bf`</li>


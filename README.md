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

<li>**cmd_executer**: Handle line and execute given monty instruction</li>
<li>**add_node**: Add a node to the stack.</li>
<li>**add_node_end**: Add a node at the end of the stack</li>
<li>**free_stack**: Free memory allocated to the stack nodes</li>
<li>**stack_len**: Return the stack length</li>
<li>**is_number**: Check if a string is a number</li>

### Instructions

<li>**push**: Push an element to the stack</li>
<li>**pall**: Print all the elements of the stack</li>
<li>**pint**: Print the last pushed element of the stack</li>
<li>**pop**: Remove the top element of the stack</li>
<li>**swap**: Swaps the top two elements of the stack</li>
<li>**add**: Adds the top two elements of the stack</li>
<li>**nop**: Doesn’t do anything</li>
<li>**sub**: Subtracts the top element of the stack from the second top element of the stack</li>
<li>**div**: Divides the second top element of the stack by the top element of the stack</li>
<li>**mul**: Multiplies the second top element of the stack with the top element of the stack</li>
<li>**mod**: Computes the rest of the division of the second top element of the stack by the top element of the stack</li>
<li>**pchar**: Prints the char at the top of the stack, followed by a new line</li>
<li>**pstr**: Prints the string starting at the top of the stack, followed by a new line</li>
<li>**rotl**: Rotates the stack to the top</li>
<li>**rotr**: Rotates the stack to the bottom</li>
<li>**stack**: Sets the format of the data to a stack (LIFO). This is the default behavior of the program</li>
<li>**queue**: Sets the format of the data to a queue (FIFO)</li>

### Additional tasks: BrainFuck

<li>**1000-school.bf**: Print school. `bf 1000-school.bf`</li>
<li>**100!-add.bf**: Add two digits given by the user. `bf 1000-school.bf`</li>


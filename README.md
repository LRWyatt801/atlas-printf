# \_printf Man Page

## Syntax

\_printf(const char \*format, ...)
#### Syntax for use of format specifiers

%\[specifier char]
## Description

The functions with in this \_printf() produce an output based off of a format specifier listed below.
## Format Specifier Characters

d, i
	The _int_ argument is converted to a string and printed to stdout

s
	A _const char *_ is expected to be a pointer to an array of characters.  It will then the array to the stdout.

c
	An _int_ is converted to a _const char_ and printed to stdout.

%
	No argument used.  A '%' is printed.

## Return Value

On a successful return, the \_printf() returns the number of characters printed (excluding the null byte at the end of a string).

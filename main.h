#ifndef MAIN_H
#define MAIN_H

/* structs */

typedef struct{
	const char *formater;
	int (*f)(va_list);
} spec;

/* prototypes */

int _printf(const char *format);

#endif

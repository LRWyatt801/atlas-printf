#ifndef MAIN_H
#define MAIN_H

/* structs */

typedef struct{
	const char *s;
	int (*f)(va_list);
} spec;

/* prototypes */

int _printf(const char *format);
int getspec(char *s, va_list);

#endif

#ifndef MAIN_H
#define MAIN_H

/* structs */

typedef struct{
	const char *s;
	int (*f)(va_list);
	const char type;
} spec;

/* prototypes */

int (*getspec(char *s))(va_list);

void int2str(va_list);
void printdigit(int num);
void printchar(char a);
void printstr(char *bstr);
void printint(int num);

#endif

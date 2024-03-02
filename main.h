#ifndef MAIN_H
#define MAIN_H

/* structs */

typedef struct spec {
	char *s;
	int (*f)(va_list);
} spec;

/* prototypes */

int _printf(const char *format, ...);

int (*getspec(const char *s))(va_list);

char *int2str(int num);
int printdigit(va_list);
int printchar(va_list);
int printstr(va_list);

#endif

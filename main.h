#ifndef MAIN_H
#define MAIN_H

/* structs */

typedef struct spec {
	char *s;
	void (*f)(va_list);
} spec;

/* prototypes */

int _printf(const char *format, ...);

void (*getspec(const char *s))(va_list);

char *int2str(int num);
void printdigit(va_list);
void printchar(va_list);
void printstr(va_list);

#endif

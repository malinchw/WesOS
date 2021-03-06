#ifndef STDIO_H
#define STDIO_H

char getc(void);

void putc(char c);

void puts(const char * s);

// This verions of gets copies until newline, replacing newline with null char, or until buflen.
// Whichever comes first
void gets(char * bug, int buflen);

#endif

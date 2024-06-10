#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>

void println(const char *format, ...);
void print_danger(const char *format, ...);
void print_warning(const char *format, ...);
void print_success(const char *format, ...);
void print_info(const char *format, ...);

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"

#define ANSI_RED     "\x1b[91m"
#define ANSI_GREEN   "\x1b[92m"
#define ANSI_YELLOW  "\x1b[93m"
#define ANSI_BLUE    "\x1b[94m"
#define ANSI_MAGENTA "\x1b[95m"
#define ANSI_CYAN    "\x1b[96m"

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_RESET   "\x1b[0m"

void log_red(const char *text);
void log_green(const char *text);
void log_yellow(const char *text);
void log_blue(const char *text);
void log_magenta(const char *text);
void log_cyan(const char *text);

#endif /* PRINT_H */


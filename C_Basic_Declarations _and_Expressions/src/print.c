#include "print.h"
#include <stdio.h>
#include <stdarg.h>

void println(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("\n");
}

void print_danger(const char *format, ...) {
	printf("%s", ANSI_RED);
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("%s",ANSI_RESET);
    printf("\n");
}

void print_warning(const char *format, ...){
	printf("%s", ANSI_YELLOW);
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("%s",ANSI_RESET);
    printf("\n");
}

void print_success(const char *format, ...){
	printf("%s", ANSI_GREEN);
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("%s",ANSI_RESET);
    printf("\n");
}

void print_info(const char *format, ...){
	printf("%s", ANSI_BLUE);
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("%s",ANSI_RESET);
    printf("\n");
}


/*
void log_red(const char *text) {
    printf("%s%s%s\n", ANSI_RED, text, ANSI_RESET);
}

void log_green(const char *text) {
    printf("%s%s%s\n", ANSI_GREEN, text, ANSI_RESET);
}

void log_yellow(const char *text) {
    printf("%s%s%s\n", ANSI_YELLOW, text, ANSI_RESET);
}

void log_blue(const char *text) {
    printf("%s%s%s\n", ANSI_BLUE, text, ANSI_RESET);
}

void log_magenta(const char *text) {
    printf("%s%s%s\n", ANSI_MAGENTA, text, ANSI_RESET);
}

void log_cyan(const char *text) {
    printf("%s%s%s\n", ANSI_CYAN, text, ANSI_RESET);
}
*/

/**
 * Verilen metni kırmızı renkte yazdırır.
 *
 * @param text Yazdırılacak metin.
 */
void log_red(const char *text) {
    printf("%s%s%s\n", ANSI_RED, text, ANSI_RESET);
}

/**
 * Verilen metni yeşil renkte yazdırır.
 *
 * @param text Yazdırılacak metin.
 */
void log_green(const char *text) {
    printf("%s%s%s\n", ANSI_GREEN, text, ANSI_RESET);
}

/**
 * Verilen metni sarı renkte yazdırır.
 *
 * @param text Yazdırılacak metin.
 */
void log_yellow(const char *text) {
    printf("%s%s%s\n", ANSI_YELLOW, text, ANSI_RESET);
}

/**
 * Verilen metni mavi renkte yazdırır.
 *
 * @param text Yazdırılacak metin.
 */
void log_blue(const char *text) {
    printf("%s%s%s\n", ANSI_BLUE, text, ANSI_RESET);
}

/**
 * Verilen metni magenta renkte yazdırır.
 *
 * @param text Yazdırılacak metin.
 */
void log_magenta(const char *text) {
    printf("%s%s%s\n", ANSI_MAGENTA, text, ANSI_RESET);
}

/**
 * Verilen metni cyan renkte yazdırır.
 *
 * @param text Yazdırılacak metin.
 */
void log_cyan(const char *text) {
    printf("%s%s%s\n", ANSI_CYAN, text, ANSI_RESET);
}


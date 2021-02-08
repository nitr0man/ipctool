#ifndef TOOLS_H
#define TOOLS_H

#include <regex.h>
#include <stdbool.h>
#include <stdint.h>

enum REG_OPS { OP_READ, OP_WRITE };

int compile_regex(regex_t *r, const char *regex_text);
bool mem_reg(uint32_t addr, uint32_t *data, enum REG_OPS op);
void lprintf(char *fmt, ...);
bool get_regex_line_from_file(const char *filename, const char *re, char *buf,
                              size_t buflen);

#endif /* TOOLS_H */

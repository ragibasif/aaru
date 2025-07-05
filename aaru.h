/*
 * File: aaru.h
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 */

#ifndef AARU_H_
#define AARU_H_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdio.h>  // Input/output:
                    // printf(), scanf(), fopen(), fclose(), fgets()
#include <stdlib.h> // General utilities:
                    // malloc(), free(), exit(), atoi(), rand()

// Dynamic Array
typedef struct DA_ DA;
extern DA *da_create(void);
extern void da_push(DA *da, int value);
extern void da_pop(DA *da);
extern int da_first(DA *da);
extern int da_last(DA *da);
extern size_t da_size(DA *da);
extern void da_dump(DA *da);
extern void da_destroy(DA *da);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // AARU_H_

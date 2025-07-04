/*
 * File: a_da.c
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 */

#include "aaru.h"

#define DA_DEFAULT_CAPACITY 16

struct DA_ {
    int *pointer;
    size_t size;
    size_t capacity;
};

DA *da_create(void) {
    DA *da = malloc(sizeof(*da));
    if (!da) {
        fprintf(stderr, "Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    da->size = 0;
    da->capacity = DA_DEFAULT_CAPACITY;
    da->pointer = calloc(da->capacity, da->capacity * sizeof(*da->pointer));
    if (!da->pointer) {
        fprintf(stderr, "Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    return da;
}

static void da_expand(DA *da) {
    da->capacity <<= 1;
    da->pointer = realloc(da->pointer, da->capacity * sizeof(*da->pointer));
    if (!da->pointer) {
        fprintf(stderr, "Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    for (size_t i = da->size; i < da->capacity; i++) {
        da->pointer[i] = 0;
    }
}

void da_push(DA *da, int value) {
    if (da->size == da->capacity) {
        da_expand(da);
    }
    da->pointer[da->size++] = value;
}

void da_pop(DA *da) {
    if (da->size) {
        da->size--;
    }
}

int da_first(DA *da) {
    if (da->size) {
        return da->pointer[0];
    }
    fprintf(stderr, "<Error> Index out of range error.\n");
    return EXIT_FAILURE;
}

size_t da_size(DA *da) { return da->size; }

int da_last(DA *da) {
    if (da->size) {
        return da->pointer[da->size];
    }
    fprintf(stderr, "<Error> Index out of range error.\n");
    return EXIT_FAILURE;
}

void da_dump(DA *da) {
    puts("|====================");
    printf("da_dump\n");
    printf("da: %p\n", (void *)da);
    printf("da->pointer: %p\n", (void *)da->pointer);
    printf("da->capacity: %zu\n", da->capacity);
    printf("da->size: %zu\n", da->size);
    for (size_t i = 0; i < da->size; i++) {
        printf("%d ", da->pointer[i]);
    }
    puts("\n====================|");
}

void da_destroy(DA *da) {
    free(da->pointer);
    da->pointer = NULL;
    da->size = 0;
    da->capacity = 0;
    free(da);
    da = NULL;
}

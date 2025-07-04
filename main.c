/*
 * File: main.c
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 */

#include "./third_party_c/internal_debug.h"
#include "aaru.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    DA *da = da_create();
    dbg(da_first(da));
    dbg(da_last(da));
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_push(da, 34);
    da_dump(da);
    da_destroy(da);

    forge_run();
    return EXIT_SUCCESS;
}

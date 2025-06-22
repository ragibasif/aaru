/*
 * File: ansi_256_color.c
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 */

#include "../aec.h"
#include <stdio.h>
#include <stdlib.h>

void ansi_256_color_mode(void);

int main(int argc, char **argv) {
    ansi_256_color_mode();
    return EXIT_SUCCESS;
}

void ansi_256_color_mode(void) {
    // Use 256-color mode
    printf(AEC_COLOR256(123) "Text with color index 123" AEC_RESET "\n");
    printf(AEC_BG_COLOR256(20) AEC_COLOR256(
        123) "Text with color index 123 and bg color index 20" AEC_RESET "\n");
}

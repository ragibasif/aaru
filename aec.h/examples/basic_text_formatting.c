/*
 * File: basic_text_formatting.c
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 */

#include "../aec.h"
#include <stdio.h>
#include <stdlib.h>

void basic_text_formatting(void);

int main(int argc, char **argv) {
    basic_text_formatting();

    return EXIT_SUCCESS;
}

void basic_text_formatting(void) {
    // Basic text colors
    printf("%sThis is red text%s\n", AEC_RED, AEC_RESET);
    printf("%sThis is green text%s\n", AEC_GREEN, AEC_RESET);
    printf("%sThis is magenta text%s\n", AEC_MAGENTA, AEC_RESET);

    // Background colors
    printf("%sBlack background%s\n", AEC_BG_BLACK, AEC_RESET);
    printf("%sGreen background%s\n", AEC_BG_GREEN, AEC_RESET);
    printf("%sBlue background%s\n", AEC_BG_BLUE, AEC_RESET);
}

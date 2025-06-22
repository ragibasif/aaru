/*
 * File: hello_world.c
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

int main() {
    // Print colored text
    printf(AEC_RED "H");
    printf(AEC_BLUE "E");
    printf(AEC_GREEN "L");
    printf(AEC_YELLOW "L");
    printf(AEC_CYAN "O");
    printf(AEC_MAGENTA ", ");
    printf(AEC_RED "W");
    printf(AEC_BLUE "O");
    printf(AEC_GREEN "R");
    printf(AEC_YELLOW "L");
    printf(AEC_CYAN "D");
    printf(AEC_MAGENTA "!" AEC_RESET "\n");

    return 0;
}

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t temp = *reg >> 1;
    uint16_t reg_0 = *reg & 1;
    uint16_t reg_2 = (*reg & (1 << 2)) >> 2;
    uint16_t reg_3 = (*reg & (1 << 3)) >> 3;
    uint16_t reg_5 = (*reg & (1 << 5)) >> 5;
    uint16_t fr_0 = reg_0 ^ reg_2;
    uint16_t fr_1 = fr_0 ^ reg_3;
    uint16_t fr_2 = fr_1 ^ reg_5;
    *reg = temp & ~(1 << 15);
    *reg |= (fr_2 << 15);
}


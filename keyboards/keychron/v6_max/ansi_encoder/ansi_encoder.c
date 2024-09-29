/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off

#ifdef RGB_MATRIX_ENABLE
const snled27351_led_t g_snled27351_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, G_1,    I_1,    H_1},
    {0, G_2,    I_2,    H_2},
    {0, G_3,    I_3,    H_3},
    {0, G_4,    I_4,    H_4},
    {0, G_5,    I_5,    H_5},
    {0, G_6,    I_6,    H_6},
    {0, G_7,    I_7,    H_7},
    {0, G_8,    I_8,    H_8},
    {0, G_9,    I_9,    H_9},
    {0, G_10,   I_10,   H_10},
    {0, G_11,   I_11,   H_11},
    {0, G_12,   I_12,   H_12},
    {0, G_13,   I_13,   H_13},
    {0, G_15,   I_15,   H_15},
    {0, G_16,   I_16,   H_16},
    {0, G_14,   I_14,   H_14},
    {0, J_16,   L_16,   K_16},
    {0, J_15,   L_15,   K_15},
    {0, J_14,   L_14,   K_14},
    {0, J_13,   L_13,   K_13},

    {0, D_1,    F_1,    E_1},
    {0, D_2,    F_2,    E_2},
    {0, D_3,    F_3,    E_3},
    {0, D_4,    F_4,    E_4},
    {0, D_5,    F_5,    E_5},
    {0, D_6,    F_6,    E_6},
    {0, D_7,    F_7,    E_7},
    {0, D_8,    F_8,    E_8},
    {0, D_9,    F_9,    E_9},
    {0, D_10,   F_10,   E_10},
    {0, D_11,   F_11,   E_11},
    {0, D_12,   F_12,   E_12},
    {0, D_13,   F_13,   E_13},
    {0, D_14,   F_14,   E_14},
    {0, D_15,   F_15,   E_15},
    {0, D_16,   F_16,   E_16},
    {0, J_12,   L_12,   K_12},
    {0, J_11,   L_11,   K_11},
    {0, J_10,   L_10,   K_10},
    {0, J_9,    L_9,    K_9},
    {0, J_8,    L_8,    K_8},

    {0, A_1,    C_1,    B_1},
    {0, A_2,    C_2,    B_2},
    {0, A_3,    C_3,    B_3},
    {0, A_4,    C_4,    B_4},
    {0, A_5,    C_5,    B_5},
    {0, A_6,    C_6,    B_6},
    {0, A_7,    C_7,    B_7},
    {0, A_8,    C_8,    B_8},
    {0, A_9,    C_9,    B_9},
    {0, A_10,   C_10,   B_10},
    {0, A_11,   C_11,   B_11},
    {0, A_12,   C_12,   B_12},
    {0, A_13,   C_13,   B_13},
    {0, A_14,   C_14,   B_14},
    {0, A_15,   C_15,   B_15},
    {0, A_16,   C_16,   B_16},
    {0, J_7,    L_7,    K_7},
    {0, J_6,    L_6,    K_6},
    {0, J_5,    L_5,    K_5},
    {0, J_4,    L_4,    K_4},

    {1, G_16,   I_16,   H_16},
    {1, G_15,   I_15,   H_15},
    {1, G_14,   I_14,   H_14},
    {1, G_13,   I_13,   H_13},
    {1, G_12,   I_12,   H_12},
    {1, G_11,   I_11,   H_11},
    {1, G_10,   I_10,   H_10},
    {1, G_9,    I_9,    H_9},
    {1, G_8,    I_8,    H_8},
    {1, G_7,    I_7,    H_7},
    {1, G_6,    I_6,    H_6},
    {1, G_5,    I_5,    H_5},
    {1, G_4,    I_4,    H_4},
    {1, J_8,    L_8,    K_8},
    {1, J_9,    L_9,    K_9},
    {1, J_10,   L_10,   K_10},
    {1, J_11,   L_11,   K_11},

    {1, D_16,   F_16,   E_16},
    {1, D_14,   F_14,   E_14},
    {1, D_13,   F_13,   E_13},
    {1, D_12,   F_12,   E_12},
    {1, D_11,   F_11,   E_11},
    {1, D_10,   F_10,   E_10},
    {1, D_9,    F_9,    E_9},
    {1, D_8,    F_8,    E_8},
    {1, D_7,    F_7,    E_7},
    {1, D_6,    F_6,    E_6},
    {1, D_5,    F_5,    E_5},
    {1, D_4,    F_4,    E_4},
    {1, D_1,    F_1,    E_1},
    {1, J_5,    L_5,    K_5},
    {1, J_6,    L_6,    K_6},
    {1, J_7,    L_7,    K_7},

    {1, A_16,   C_16,   B_16},
    {1, A_15,   C_15,   B_15},
    {1, A_14,   C_14,   B_14},
    {1, A_10,   C_10,   B_10},
    {1, A_6,    C_6,    B_6},
    {1, A_5,    C_5,    B_5},
    {1, A_4,    C_4,    B_4},
    {1, A_3,    C_3,    B_3},
    {1, A_2,    C_2,    B_2},
    {1, A_1,    C_1,    B_1},
    {1, J_1,    L_1,    K_1},
    {1, J_2,    L_2,    K_2},
    {1, J_3,    L_3,    K_3},
    {1, J_4,    L_4,    K_4},
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  __,  13,  14,  15,  16,  17,  18,  19 },
        {  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40 },
        {  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  __ },
        {  61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  __,  __,  __,  __,  74,  75,  76,  77 },
        {  78,  __,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  __,  __,  90,  __,  91,  92,  93,  __ },
        {  94,  95,  96,  __,  __,  __,  97,  __,  __,  __,  98,  99, 100, 101, 102, 103, 104, 105,  __, 106, 107 },
    },
    {
        // LED Index to Physical Position
        {0, 0}, {13, 0}, {24, 0}, {34, 0}, {45, 0}, {57, 0}, {68, 0}, {78, 0}, {89, 0}, {102, 0}, {112, 0}, {123, 0}, {133, 0},           {159, 0}, {169, 0}, {180, 0}, {193, 0}, {203, 0}, {214, 0}, {224, 0},
        {0,15}, {10,15}, {21,15}, {31,15}, {42,15}, {52,15}, {63,15}, {73,15}, {83,15}, { 94,15}, {104,15}, {115,15}, {125,15}, {141,15}, {159,15}, {169,15}, {180,15}, {193,15}, {203,15}, {214,15}, {224,15},
        {3,27}, {16,27}, {26,27}, {36,27}, {47,27}, {57,27}, {68,27}, {78,27}, {89,27}, { 99,27}, {109,27}, {120,27}, {130,27}, {143,27}, {159,27}, {169,27}, {180,27}, {193,27}, {203,27}, {214,27},
        {4,40}, {18,40}, {29,40}, {39,40}, {50,40}, {60,40}, {70,40}, {81,40}, {91,40}, {102,40}, {112,40}, {123,40}, {139,40},                                         {193,40}, {203,40}, {214,40}, {224,34},
        {7,52},          {23,52}, {34,52}, {44,52}, {55,52}, {65,52}, {76,52}, {86,52}, { 96,52}, {107,52}, {117,52}, {137,52},                     {169,52},           {193,52}, {203,52}, {214,52},
        {1,64}, {14,64}, {27,64},                            {66,64},                             {105,64}, {119,64}, {132,64}, {145,64}, {159,64}, {169,64}, {180,64}, {198,64},           {214,64}, {224,58}
    },
    {
        // RGB LED Index to Flag
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,             1, 1, 1, 1,
        1,    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,       1,    1, 1, 1,
        1, 1, 1,          1,          1, 1, 1, 1, 1, 1, 1, 1,    1, 1
    }
};
#endif

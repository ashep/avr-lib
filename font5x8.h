#ifndef FONT8
#define FONT8

#include <avr/pgmspace.h>

const uint8_t font8[] PROGMEM =
    {
        4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //   - 32 (whitespace)
        1, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, // ! - 33
        5, 0x1B, 0x12, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, // " - 34
        5, 0x00, 0x0A, 0x1F, 0x0A, 0x0A, 0x1F, 0x0A, 0x00, // # - 35
        5, 0x04, 0x0E, 0x05, 0x0E, 0x14, 0x14, 0x0F, 0x04, // $ - 36
        7, 0x00, 0x42, 0x25, 0x12, 0x08, 0x24, 0x52, 0x21, // % - 37
        5, 0x06, 0x09, 0x09, 0x06, 0x15, 0x09, 0x19, 0x16, // & - 38
        2, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ' - 39
        3, 0x04, 0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x04, // ( - 40
        3, 0x01, 0x02, 0x04, 0x04, 0x04, 0x04, 0x02, 0x01, // ) - 41
        3, 0x05, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, // * - 42
        5, 0x00, 0x00, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x00, // + - 43
        2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, // , - 44
        5, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, // - - 45
        1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // . - 46
        4, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, // / - 47
        4, 0x06, 0x09, 0x09, 0x0D, 0x0B, 0x09, 0x09, 0x06, // 0 - 48
        3, 0x02, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x07, // 1 - 49
        4, 0x06, 0x09, 0x08, 0x08, 0x04, 0x02, 0x01, 0x0F, // 2 - 50
        4, 0x06, 0x09, 0x08, 0x04, 0x08, 0x08, 0x09, 0x06, // 3 - 51
        4, 0x09, 0x09, 0x09, 0x09, 0x0F, 0x08, 0x08, 0x08, // 4 - 52
        4, 0x0F, 0x01, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, // 5 - 53
        4, 0x06, 0x09, 0x01, 0x07, 0x09, 0x09, 0x09, 0x06, // 6 - 54
        4, 0x0F, 0x08, 0x04, 0x02, 0x01, 0x01, 0x01, 0x01, // 7 - 55
        4, 0x06, 0x09, 0x09, 0x06, 0x09, 0x09, 0x09, 0x06, // 8 - 56
        4, 0x06, 0x09, 0x09, 0x09, 0x0E, 0x08, 0x09, 0x06, // 9 - 57
        1, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // : - 58
        2, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x01, 0x00, // ; - 59
        4, 0x00, 0x08, 0x04, 0x02, 0x01, 0x02, 0x04, 0x08, // < - 60
        5, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00, // = - 61
        4, 0x00, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, // > - 62
        4, 0x06, 0x09, 0x08, 0x08, 0x04, 0x02, 0x00, 0x02, // ? - 63
        4, 0x00, 0x06, 0x09, 0x0D, 0x0D, 0x0D, 0x01, 0x0E, // @ - 64
        5, 0x0C, 0x12, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11, // A - 65
        5, 0x0F, 0x11, 0x11, 0x0F, 0x11, 0x11, 0x11, 0x0F, // B - 66
        5, 0x0E, 0x11, 0x01, 0x01, 0x01, 0x01, 0x11, 0x0E, // C - 67
        5, 0x07, 0x09, 0x11, 0x11, 0x11, 0x11, 0x09, 0x07, // D - 68
        5, 0x1F, 0x01, 0x01, 0x07, 0x01, 0x01, 0x01, 0x1F, // E - 69
        5, 0x1F, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x01, 0x01, // F - 70
        5, 0x1E, 0x01, 0x01, 0x01, 0x19, 0x11, 0x11, 0x1E, // G - 71
        5, 0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11, 0x11, // H - 72
        3, 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x07, // I - 73
        4, 0x0C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x06, // J - 74
        5, 0x11, 0x11, 0x09, 0x05, 0x07, 0x09, 0x11, 0x11, // K - 75
        5, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F, // L - 78
        5, 0x11, 0x1B, 0x15, 0x15, 0x11, 0x11, 0x11, 0x11, // M - 79
        5, 0x11, 0x11, 0x13, 0x15, 0x15, 0x19, 0x11, 0x11, // N - 80
        5, 0x0E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E, // O - 81
        5, 0x0F, 0x11, 0x11, 0x11, 0x0F, 0x01, 0x01, 0x01, // P - 82
        5, 0x0E, 0x11, 0x11, 0x11, 0x11, 0x15, 0x09, 0x16, // Q - 83
        5, 0x0F, 0x11, 0x11, 0x11, 0x0F, 0x05, 0x09, 0x11, // R - 84
        5, 0x1E, 0x01, 0x01, 0x0E, 0x10, 0x10, 0x10, 0x0F, // S - 85
        5, 0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // T - 86
        5, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E, // U - 87
        5, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0A, 0x04, // V - 88
        5, 0x11, 0x11, 0x11, 0x11, 0x15, 0x15, 0x1B, 0x11, // W - 89
        5, 0x11, 0x11, 0x0A, 0x04, 0x04, 0x0A, 0x11, 0x11, // X - 90
        5, 0x11, 0x11, 0x11, 0x0A, 0x04, 0x04, 0x04, 0x04, // Y - 91
        5, 0x1F, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x1F, // Z - 92
        3, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, // [ - 93
        4, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, //   - 94 (backslash)
        3, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, // ] - 95
        3, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ^ - 96
        5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, // _ - 97
        2, 0x03, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // ` - 98
        5, 0x00, 0x00, 0x00, 0x0E, 0x10, 0x1E, 0x11, 0x1E, // a - 99
        5, 0x00, 0x00, 0x01, 0x01, 0x0F, 0x11, 0x11, 0x0F, // b - 100
        5, 0x00, 0x00, 0x00, 0x0E, 0x11, 0x01, 0x11, 0x0E, // c - 101
        5, 0x00, 0x00, 0x10, 0x10, 0x1E, 0x11, 0x11, 0x1E, // d - 102
        5, 0x00, 0x00, 0x00, 0x0E, 0x11, 0x1F, 0x01, 0x0E, // e - 103
        4, 0x00, 0x00, 0x04, 0x0A, 0x02, 0x07, 0x02, 0x02, // f - 104
        5, 0x00, 0x00, 0x06, 0x09, 0x09, 0x0E, 0x08, 0x06, // g - 105
        4, 0x00, 0x00, 0x01, 0x01, 0x07, 0x09, 0x09, 0x09, // h - 106
        3, 0x00, 0x00, 0x02, 0x00, 0x03, 0x02, 0x02, 0x07, // i - 107
        3, 0x00, 0x00, 0x00, 0x06, 0x04, 0x04, 0x05, 0x02, // j - 108
        4, 0x00, 0x00, 0x01, 0x09, 0x05, 0x03, 0x05, 0x09, // k - 109
        3, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x07, // l - 110
        5, 0x00, 0x00, 0x00, 0x0B, 0x15, 0x15, 0x11, 0x11, // m - 111
        5, 0x00, 0x00, 0x0D, 0x13, 0x11, 0x11, 0x11, 0x11, // n - 112
        5, 0x00, 0x00, 0x00, 0x0E, 0x11, 0x11, 0x11, 0x0E, // o - 113
        5, 0x00, 0x00, 0x0F, 0x11, 0x11, 0x0F, 0x01, 0x01, // p - 114
        5, 0x00, 0x00, 0x1E, 0x11, 0x11, 0x1E, 0x10, 0x10, // q - 115
        5, 0x00, 0x00, 0x00, 0x0D, 0x13, 0x01, 0x01, 0x01, // r - 116
        5, 0x00, 0x00, 0x0E, 0x01, 0x0E, 0x10, 0x10, 0x0F, // s - 117
        4, 0x00, 0x02, 0x02, 0x07, 0x02, 0x02, 0x0A, 0x04, // t - 118
        5, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x19, 0x16, // u - 119
        5, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x0A, 0x04, // v - 120
        5, 0x00, 0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x0A, // w - 121
        5, 0x00, 0x00, 0x00, 0x11, 0x0A, 0x04, 0x0A, 0x11, // x - 122
        4, 0x00, 0x00, 0x00, 0x09, 0x09, 0x0E, 0x08, 0x06, // y - 123
        5, 0x00, 0x00, 0x00, 0x1F, 0x08, 0x04, 0x02, 0x1F, // z - 124
        3, 0x00, 0x04, 0x02, 0x02, 0x01, 0x02, 0x02, 0x04, // { - 125
        1, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // | - 126
        3, 0x00, 0x01, 0x02, 0x02, 0x04, 0x02, 0x02, 0x01, // } - 127
        5, 0x02, 0x15, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // ~ - 128
        0, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, // 
};
#endif
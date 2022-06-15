#ifndef Special_Characters_h
#define Special_Characters_h

byte arrow_up[] = { B00100, B01110, B11111, B00100, B00100, B00100, B00100, B00100 };

byte arrow_down[] = { B00100, B00100, B00100, B00100, B00100, B11111, B01110, B00100 };

byte accented_lowercase_u[] = { B01000, B00100, B10001, B10001, B10001, B10011, B01101, B00000 };

/* An indicator for the currently chosen option */
byte optionIndicator[] = { B00000, B11000, B11100, B11110, B11110, B11100, B11000, B00000 };

byte degree[] = { B00110, B01001, B01001, B00110, B00000, B00000, B00000, B00000 };

byte ohm[] = { B00000, B01110, B10001, B10001, B10001, B01010, B11011, B00000 };

/* animazione indicazione di premere il pulsante */
byte animazione_1[] = { B10101, B00100, B01110, B00100, B00000, B01110, B11111, B10001 };

/* animazione pulsante premuto */
byte animazione_2[] = { B00100, B10101, B01110, B00100, B10001, B01010, B10001, B11111 };

#endif
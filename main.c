// adapted from https://github.com/raspberrypi/pico-examples/blob/master/picoboard/blinky/blinky.c
// also a solution ^

#include <stdio.h>
#include "pico/stdlib.h"

#define BUZZER 18

#define PAUSE 100 //defines delay between dots/dashes
#define PAUSE_CHAR 300 //defines delay between each letter of a word (3x PAUSE)
#define PAUSE_WORD 700 //defines delay between each word (7x PAUSE)

char str[] = "Hello, World!";
char* ptr = str;

const char *morse_chars[] = {
        ".-",    // A
        "-...",  // B
        "-.-.",  // C
        "-..",   // D
        ".",     // E
        "..-.",  // F
        "--.",   // G
        "....",  // H
        "..",    // I
        ".---",  // J
        "-.-",   // K
        ".-..",  // L
        "--",    // M
        "-.",    // N
        "---",   // O
        ".--.",  // P
        "--.-",  // Q
        ".-.",   // R
        "...",   // S
        "-",     // T
        "..-",   // U
        "...-",  // V
        ".--",   // W
        "-..-",  // X
        "-.--",  // Y
        "--.."   // Z
};

void dot() {
    for(int i=0;i<50;i++) // lasts for ~ 1ms
        {
            gpio_put(BUZZER,1);
            sleep_ms(1);
            gpio_put(BUZZER,0);
            sleep_ms(1);
        }
    sleep_ms(PAUSE);      
}

void dash() {
    for(int i=0;i<150;i++) // must last 3 times as dot
        {
            gpio_put(BUZZER,1);
            sleep_ms(1);
            gpio_put(BUZZER,0);
            sleep_ms(1);
        }
    sleep_ms(PAUSE);
}

void play_morse_char(const char *morse) {
    for (; *morse; ++morse)
    {
        if (*morse == '.') {
            dot();
        } else if (*morse == '-') {
            dash();
        }
    }
    sleep_ms(PAUSE_CHAR);
}

int main() {
    stdio_init_all();

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);

    for (; *ptr; ++ptr)
    {   
        if (*ptr >= 'A' && *ptr <= 'Z') {
            play_morse_char(morse_chars[*ptr - 'A']);
        } else if (*ptr >= 'a' && *ptr <= 'z') {
            play_morse_char(morse_chars[*ptr-'a']);
        } else if (*ptr == ' ') {
            sleep_ms(PAUSE_WORD);
        }
    }
    
}
